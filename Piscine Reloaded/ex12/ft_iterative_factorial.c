/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sait-ben <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 14:26:23 by sait-ben          #+#    #+#             */
/*   Updated: 2016/11/16 15:03:24 by sait-ben         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int res;

	if (nb == 0)
		return (1);
	if (nb >= 1 && nb <= 12)
	{
		res = 1;
		while (nb >= 1)
		{
			res = nb * res;
			nb--;
		}
		return (res);
	}
	else
		return (0);
}
