/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdebladi <jdebladi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/16 11:04:10 by jdebladi          #+#    #+#             */
/*   Updated: 2017/06/19 15:25:09 by jdebladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lem_in.h>

void	check_data(t_data *d)
{
	if (d->start == d->end || d->start < 0 || d->end < 0)
		ft_error(d, "Error with start/end");
	if (d->lmax == 0)
		ft_error(d, "Error with tube");
}

void	check_tube(t_data *d, t_list *tmp, char *r1, char *r2)
{
	t_pos check;

	check.x = 0;
	check.y = 0;
	while (tmp)
	{
		if (ft_strcmp(r1, tmp->content) == 0)
		{
			d->y = check.x;
			check.y++;
		}
		if (ft_strcmp(r2, tmp->content) == 0)
		{
			d->x = check.x;
			check.y++;
		}
		tmp = tmp->next;
		check.x++;
	}
	if (check.y != 2 || d->x == d->y)
		ft_error(d, "Error with tube");
}

void	check_rooms(t_data *d, char *r1)
{
	t_list *tmp;

	if (*r1 == 'L' || *r1 == '#' || ft_bool_strchr(r1, '-'))
		ft_error(d, "Invalid room name");
	tmp = d->r;
	while (tmp)
	{
		if (ft_strcmp(r1, tmp->content) == 0)
			ft_error(d, "Duplicate room name");
		tmp = tmp->next;
	}
}

int		check_opt(const char c)
{
	const char	flag[6] = "drpsba";
	int			i;

	i = -1;
	while (++i < 6)
	{
		if (c == flag[i])
			return (1);
	}
	return (0);
}

void	ft_error(t_data *d, char *str)
{
	ft_put_error(str);
	ft_free(d);
	exit(EXIT_FAILURE);
}