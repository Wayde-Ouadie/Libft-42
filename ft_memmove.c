/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:45:08 by oel-feng          #+#    #+#             */
/*   Updated: 2023/11/08 16:46:08 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	a;
	char	*res;
	char	*org;

	a = 0;
	res = (char *)dest;
	org = (char *)src;
	if (res > org)
		while (n-- > 0)
			res[n] = org[n];
	else
		ft_memcpy(res, org, n);
	return (dest);
}
