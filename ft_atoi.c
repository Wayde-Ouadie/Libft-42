/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 06:18:28 by oel-feng          #+#    #+#             */
/*   Updated: 2023/11/09 22:42:43 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_sign(char c)
{
	if (c == 45)
		return (-1);
	return (1);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long long	tmp;
	long long	res;

	i = 0;
	sign = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == 43 || str[i] == 45)
		sign = ft_sign(str[i++]);
	while (ft_isdigit(str[i]))
	{
		tmp = res * 10 + (str[i] - 48);
		if (tmp < res && sign == 1)
			return (-1);
		if (tmp < res && sign == -1)
			return (0);
		i++;
		res = tmp;
	}
	return (res * sign);
}