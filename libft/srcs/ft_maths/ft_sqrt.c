/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angavrel <angavrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 20:23:14 by angavrel          #+#    #+#             */
/*   Updated: 2016/11/29 15:27:21 by angavrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i * i < n)
		i++;
	return (i);
}
