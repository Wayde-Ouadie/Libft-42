/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:18:18 by oel-feng          #+#    #+#             */
/*   Updated: 2023/11/15 15:29:09 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*s;
	long	i;
	long	j;

	i = nmemb;
	j = size;
	if (i < 0 && j < 0)
		return NULL;
	s = (void *)malloc(nmemb * size);
	if (!s)
		return (0);
	ft_memset(s, 0, (nmemb * size));
	return (s);
}
