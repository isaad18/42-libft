/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaad <isaad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 16:24:17 by isaad             #+#    #+#             */
/*   Updated: 2022/11/03 13:02:19 by isaad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*dst;

	dst = (char *)malloc(size * count);
	if (!dst)
		return (0);
	ft_bzero(dst, size * count);
	return (dst);
}
