/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaad <isaad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 09:52:03 by isaad             #+#    #+#             */
/*   Updated: 2021/12/30 06:50:44 by isaad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	ft_atoi(const char *str)
{
	int		i;
	size_t	res;
	int		j;

	j = 1;
	i = 0;
	res = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	if (j == -1 && res >= LONG_MAX)
		return (0);
	if (j == 1 && res >= LONG_MAX)
		return (-1);
	return (res * j);
}

// int main()
// {
// 	printf("%d \n", ft_atoi("9223372036854775819"));
// 	printf("%d \n", atoi("9223372036854775819"));
// }
