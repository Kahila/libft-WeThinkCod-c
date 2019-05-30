/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 11:08:11 by akalombo          #+#    #+#             */
/*   Updated: 2019/05/30 18:20:11 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char*				ft_strncpy(char *str1, char *str2, int len)
{
	int i = 0;
	while (len > 0 && str2[i] != '\0')
	{
		str1[i] = str2[i];
		i++;
		len--;
	}
	
    while (len > 0)
    {
        str1[i] = '\0';
        i++;
        len--;
    }
	
	return (str1);
}
