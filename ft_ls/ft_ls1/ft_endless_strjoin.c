/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_endless_strjoin.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdebladi <jdebladi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/26 23:12:08 by jdebladi          #+#    #+#             */
/*   Updated: 2017/03/26 23:29:29 by jdebladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Libft.h"

char	*ft_endless_strjoin(int nbr, ...)
{
	int i;
	va_list args;
	char *ret;
	char *tmp;

	i = 0;
	va_start(args, nbr);
	ret = malloc(sizeof(char));
	while (i < nbr)
	{
		tmp = ret;
		free(tmp);
		if (!(tmp = va_arg(args, char *)))
			{
				ft_putendl_fd("Error: nbr too big", 2);
				exit(0);
			}
		ret = ft_strjoin(ret, tmp);
		i++;
	}
	va_end(args);
	return (ret);
}
