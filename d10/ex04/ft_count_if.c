/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 19:18:44 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/11 19:38:54 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char))
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
		{
			n++;
		}
		i++;
	}
	return (n);
}
