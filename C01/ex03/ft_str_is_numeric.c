/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshiming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:52:39 by lshiming          #+#    #+#             */
/*   Updated: 2025/10/28 16:01:42 by lshiming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str)
{
	int	to_int;

	while (*str)
	{
		to_int = *str - '0';
		if (to_int < 0 || to_int > 9)
			return (0);
		str++;
	}
	return (1);
}
//int	main(void){
//	char	*digits;
//	char	*nodigits;
//
//	digits = "12345";
//	nodigits = "12345g";
//	printf("output1: %d\n", ft_str_is_numeric(digits));	
//	printf("output1: %d\n", ft_str_is_numeric(nodigits));	
//}
