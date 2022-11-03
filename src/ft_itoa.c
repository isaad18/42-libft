/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaad <isaad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 14:26:04 by isaad             #+#    #+#             */
/*   Updated: 2022/11/03 13:02:19 by isaad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include"../includes/libft.h"

int	digits(int s)
{
	int	i;

	if (s < 0)
		i = 1;
	else
		i = 0;
	while (s)
	{
		s /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int			v;
	char		*buffer;
	long int	b;

	b = n;
	v = digits(n);
	if (!n)
		return (ft_strdup ("0"));
	buffer = (char *)malloc(v + 1);
	if (!buffer)
		return (0);
	*(buffer + v--) = '\0';
	if (n < 0)
	{
		buffer[0] = '-';
		b = -1 * b;
	}
	while (b > 0)
	{
		*(buffer + v--) = b % 10 + '0';
		b /= 10;
	}
	return (buffer);
}
