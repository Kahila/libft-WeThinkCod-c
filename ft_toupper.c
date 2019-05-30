/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 15:58:26 by akalombo          #+#    #+#             */
/*   Updated: 2019/05/30 16:18:56 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_toupper(int ch)
{
	char c = (char)(ch);
	if (c >= 'a' && c <= 'z')
		return ((ch - 7) - 25);
	else
		return ((c));
}
