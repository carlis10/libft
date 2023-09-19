/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cravegli <cravegli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:21:09 by cravegli          #+#    #+#             */
/*   Updated: 2023/09/14 13:59:21 by cravegli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*m;
	size_t	t;

	if (count == 0 || size == 0)
		return (0);
	t = count * size;
	m = malloc(t);
	if (!m)
		return (0);
	ft_bzero(m, t);
	return (m);
}
