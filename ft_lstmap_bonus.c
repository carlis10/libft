/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cravegli <cravegli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:17:10 by cravegli          #+#    #+#             */
/*   Updated: 2023/09/26 13:27:11 by cravegli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*l;

	l = (t_list *)malloc(sizeof(lst));
	if (!l)
		return (NULL);
	l = lst;
	ft_lstiter(l, f);
	return (l);
}
