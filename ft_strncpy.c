/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 11:08:11 by akalombo          #+#    #+#             */
/*   Updated: 2019/05/18 13:37:12 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

char*				ft_strncpy(char *str1, char *str2, int len)
{
	int i = 0;
	while (len >= 0)
	{
		str2[i] = str1[i];
		i++;
		len--;
	}
	str2[i] = '\0';
	
	return (str2);
}