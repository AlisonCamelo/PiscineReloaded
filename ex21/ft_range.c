/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: durisosa <durisosa@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 19:21:41 by durisosa          #+#    #+#             */
/*   Updated: 2026/05/29 21:58:02 by durisosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*ints;

	if (min >= max)
		return (NULL);
	ints = malloc((max - min) * sizeof(int));
	if (!ints)
		return (NULL);
	i = 0;
	while (i < max - min)
	{
		ints[i] = min + i;
		i++;
	}
	return (ints);
}
