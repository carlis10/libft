/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cravegli <cravegli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:22:54 by cravegli          #+#    #+#             */
/*   Updated: 2023/09/13 12:47:35 by cravegli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c > 97 && c < 122)
		return (c - 32);
	return (c);
}