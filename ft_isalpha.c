/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtome-ve <gtome-ve@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 15:45:39 by gtome-ve          #+#    #+#             */
/*   Updated: 2024/12/08 15:45:39 by gtome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int value)
{
	if ((value >= 'A' && value <= 'Z') || (value >= 'a' && value <= 'z'))
		return (1);
	return (0);
}