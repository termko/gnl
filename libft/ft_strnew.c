/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydavis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 14:23:35 by ydavis            #+#    #+#             */
/*   Updated: 2018/12/06 17:12:16 by ydavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*tmp;
	size_t	i;

	if (!(tmp = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	i = 0;
	while (i < size + 1)
	{
		tmp[i] = '\0';
		i++;
	}
	return (tmp);
}
