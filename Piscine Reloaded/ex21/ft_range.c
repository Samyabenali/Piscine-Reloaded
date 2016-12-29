/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sait-ben <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 14:44:05 by sait-ben          #+#    #+#             */
/*   Updated: 2016/11/16 15:07:29 by sait-ben         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *src;
	int i;
	int j;

	if (min >= max)
		return (NULL);
	src = malloc(sizeof(int) * (max - min + 1));
	if (src == NULL)
		return (NULL);
	i = 0;
	j = min;
	while (i <= (max - min))
	{
		src[i] = j;
		j++;
		i++;
	}
	return (src);
}
