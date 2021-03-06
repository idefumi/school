/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fideguch <fideguch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 03:48:09 by fideguch          #+#    #+#             */
/*   Updated: 2020/08/03 08:13:07 by fideguch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*s;

	if (n == 0 || size == 0)
	{
		n = 1;
		size = 1;
	}
	if (!(s = malloc(n * size)))
		return (0);
	if (s)
		ft_bzero(s, n * size);
	return (s);
}
