/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caykut <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:44:55 by caykut            #+#    #+#             */
/*   Updated: 2022/10/16 15:16:16 by caykut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	j;
	size_t	i;
	size_t	len;
	size_t	a;

	i = 0;
	j = 0;
	a = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	new = malloc(sizeof(char) * len);
	while (s1[i])
		new[a++] = s1[i++];
	while (s2[j])
		new[a++] = s2[j++];
	new[a] = '\0';
	return (new);
}
