/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshiming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:27:16 by lshiming          #+#    #+#             */
/*   Updated: 2025/10/27 17:50:36 by lshiming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		printf("%i ", *str);
		if (!(('A' <= *str && *str <= 'Z') || ('a' <= *str && *str <= 'z')))
			return (0);
		str++;
	}
	return (1);
}
//int	main(void)
//{
//	char	*str;
//	char	*notstr;
//	
//	printf("A:%d, Z:%d, a:%d, z:%d\n", 'A', 'Z', 'a', 'z');
//	str = "Hello";
//	notstr = "Hello123";
//	printf("%d\n", ft_str_is_alpha(str));	
//	printf("%d", ft_str_is_alpha(notstr));
//}
