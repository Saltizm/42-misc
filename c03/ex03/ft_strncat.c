/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshiming <lshiming@student.42singapor      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 23:53:28 by lshiming          #+#    #+#             */
/*   Updated: 2025/10/29 00:02:39 by lshiming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	while (dest++);
	while (nb)
	{
		if(!*src)
			*dest++ = *src++;
		*dest++ = '\0';
		nb--;
	}
	return (dest);
}
