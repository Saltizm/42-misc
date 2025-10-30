/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshiming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 12:43:18 by lshiming          #+#    #+#             */
/*   Updated: 2025/10/27 16:25:03 by lshiming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
//int	main(void)
//{
//	char	dest[6]="HELLO";
//	char	src[4]="Noo";
//	unsigned int	count;
//
//	count = 5;
//
//	ft_strncpy(dest, src, count);
//	printf("%s,%s", dest, src);
//}
