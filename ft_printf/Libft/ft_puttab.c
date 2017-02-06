/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puttab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdebladi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 16:45:38 by jdebladi          #+#    #+#             */
/*   Updated: 2016/11/16 16:47:31 by jdebladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puttab(char **tab)
{
	size_t	i;

	i = 0;
	while (tab[i])
	{
		ft_putstr((char *)tab[i]);
		ft_putchar('\n');
		i++;
	}
}