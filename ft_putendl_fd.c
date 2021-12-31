/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaad <isaad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 09:18:12 by isaad             #+#    #+#             */
/*   Updated: 2021/12/28 00:28:37 by isaad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	char	endline;

	if (!s)
		return ;
	endline = '\n';
	while (*s)
	{
		write (fd, s, 1);
		s++;
	}
	write (fd, &endline, 1);
}
