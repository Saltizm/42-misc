/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshiming <lshiming@student.42singapor      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 00:03:11 by lshiming          #+#    #+#             */
/*   Updated: 2025/10/29 00:16:49 by lshiming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	char *store;
	char *str_start;
	if (!*to_find)
		return (str);

	store = to_find;
	while (*str++)
	{
		if (*str == *store)
		{
			str_start = str;
			while (*str_start++ == *store++);
			if (!*to_find)
				return (str);
			else
				store = to_find;
		}
	}
	return ('\0');
}

			
