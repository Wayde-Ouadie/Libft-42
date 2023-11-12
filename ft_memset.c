/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 03:06:14 by oel-feng          #+#    #+#             */
/*   Updated: 2023/11/12 04:17:32 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*str;

	str = b;
	i = 0;
	while (i < len)
		str[i++] = c;
	return (b);
}

// int		main(void)
// {
// 	int		i;

// 	char ptr[] = "hello W world";
	
// 	ft_memset((char *)ptr + 6, 104, 1);
// 	printf("%s\n", ptr);
// }