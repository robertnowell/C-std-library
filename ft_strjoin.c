/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnowell <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 19:52:09 by rnowell           #+#    #+#             */
/*   Updated: 2016/09/27 19:52:10 by rnowell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;

	if (!s1 || !s2)
		return (NULL);
	result = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!result)
		return (NULL);
	ft_strcpy(result, s1);
	return (ft_strcat(result, s2));
}
