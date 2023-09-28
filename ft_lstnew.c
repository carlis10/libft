/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cravegli <cravegli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:37:03 by cravegli          #+#    #+#             */
/*   Updated: 2023/09/26 12:41:23 by cravegli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list	*l;

	l = (t_list *)malloc(sizeof(*l));
	if (!l)
		return (NULL);
	l->content = content;
	l->next = NULL;
	return (l);
}
