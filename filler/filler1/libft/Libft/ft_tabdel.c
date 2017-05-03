/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdebladi <jdebladi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 09:19:16 by jdebladi          #+#    #+#             */
/*   Updated: 2017/04/20 12:47:51 by jdebladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_tabdel(char **tab)
{
	int i;

	if (tab != NULL)
	{
		i = -1;
		while (tab[++i])
			free(tab[i]);
		free(tab[i]);
		free(tab);
	}
}
