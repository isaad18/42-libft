/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaad <isaad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 02:05:05 by isaad             #+#    #+#             */
/*   Updated: 2021/12/28 00:30:15 by isaad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;
	int	size;

	if (!s)
		return ;
	i = 0;
	size = ft_strlen(s);
	if (s && f)
	{
		while (i < size)
		{
			(*f)(i, s);
			i++;
			s++;
		}
	}
}
