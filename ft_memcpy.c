/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:34:18 by oel-feng          #+#    #+#             */
/*   Updated: 2023/11/09 09:30:31 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	a;
	char	*res;
	char	*org;

	a = 0;
	res = (char *)dest;
	org = (char *)src;
	if (!res && !org)
		return (0);
	while (a < n)
	{
		res[a] = org[a];
		a++;
	}
	return (dest);
}
