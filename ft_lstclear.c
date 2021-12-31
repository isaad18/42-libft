/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaad <isaad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 03:24:58 by isaad             #+#    #+#             */
/*   Updated: 2021/12/28 07:30:25 by isaad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*c;

	while (lst && *lst)
	{
		c = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = c;
	}
	*lst = 0;
}
