/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 15:44:53 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/18 11:39:48 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_count_map_lines(char *str)
{
	int lines;

	lines = 0;
	while (*str)
	{
		if (*str == '\n')
			lines++;
		str++;
	}
	return (lines - 1);
}

int		ft_lines_have_same_width(char *str)
{
	int w;
	int i;

	while (*str != '\n')
		str++;
	w = ft_get_lines_width(str);
	while (*str)
	{
		i = 0;
		while (i < w && *str)
		{
			str++;
			if (*str == '\n')
				return (0);
			i++;
		}
		str++;
		if (*str != '\n' && *str)
			return (0);
	}
	return (1);
}

void	ft_map_error(void)
{
	write(2, "map error\n", 10);
}
