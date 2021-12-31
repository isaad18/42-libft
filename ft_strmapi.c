/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaad <isaad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 19:44:49 by isaad             #+#    #+#             */
/*   Updated: 2021/12/28 00:27:05 by isaad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*c;

	if (!s)
		return (0);
	i = 0;
	len = ft_strlen(s);
	c = (char *)malloc(len + 1);
	if (!c)
		return (0);
	while (i < len)
	{
		c[i] = f(i, s[i]);
		i++;
	}
	c[i] = 0;
	return (c);
}
