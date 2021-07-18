/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanjeon <sanjeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 11:09:41 by sanjeon           #+#    #+#             */
/*   Updated: 2021/07/18 11:10:30 by sanjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long		ft_atol(const char *nptr)
{
	int			i;
	int			sign;
	char		*str;
	long long	num;

	i = 0;
	str = (char*)nptr;
	num = 0;
	sign = -1;
	while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while(str[i] && str[i] >= 48 && str[i] <= 57)
		num = num * 10 - str[i++] + '0';
	return(sign *num);
}
