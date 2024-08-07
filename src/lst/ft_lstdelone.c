/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalo <asalo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 13:31:18 by asalo             #+#    #+#             */
/*   Updated: 2024/07/16 17:25:15 by asalo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))

{
	if (!del)
		return ;
	if (lst)
		(*del)(lst->content);
	free(lst);
}
