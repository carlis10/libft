/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cravegli <cravegli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:05:27 by cravegli          #+#    #+#             */
/*   Updated: 2023/09/14 14:30:19 by cravegli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cp;
	int		i;

	i = 0;
	cp = (char)ft_calloc(ft_strlen(s1), sizeof(char));
	if (!cp)
		return (0);
	while (s1[i] != '\0')
	{
		cp[i] == s1[i];
	}
	cp[i] = '\0';
	return (cp);
}
