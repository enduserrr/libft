/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalo <asalo@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 12:19:22 by asalo             #+#    #+#             */
/*   Updated: 2024/03/19 20:46:24 by asalo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	return non zero value if true and 0 if not.
 */
int	ft_isspace(int c)
{
	return (c == 32 || (c >= 9 && c <= 13));
}
