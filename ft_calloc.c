/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:18:18 by oel-feng          #+#    #+#             */
/*   Updated: 2023/11/22 11:52:50 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*s;
	long	i;
	long	j;
	size_t	mult;

	j = nmemb;
	i = size;
	if (i < 0 && j < 0)
		return (NULL);
	mult = nmemb * size;
	if (mult / nmemb != size)
		return (NULL);
	s = (void *)malloc(mult);
	if (!s)
		return (0);
	ft_bzero(s, (mult));
	return (s);
}
