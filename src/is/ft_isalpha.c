/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalo <asalo@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 18:04:47 by asalo             #+#    #+#             */
/*   Updated: 2024/03/19 20:46:13 by asalo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	return non zero value if true and 0 if not.
 */
int	ft_isalpha(int c)
{
	return ((c > 64 && c < 91) || (c > 96 && c <= 122));
}
