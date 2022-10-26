/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caykut <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:35:11 by caykut            #+#    #+#             */
/*   Updated: 2022/10/17 21:16:42 by caykut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)

{
	size_t	i;
	char	*str;
	size_t	j;
	size_t	a;

	a = ft_strlen(s);
	j = 0;
	i = start;
	str = (char *)malloc(len + 1);
	if (!s || !str)
		return (0);
	while (i < a && j < len)
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}
