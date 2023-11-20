/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 19:21:28 by marvin            #+#    #+#             */
/*   Updated: 2023/11/20 19:59:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int lstsize;
    
    lstsize = 0;
    while (lst != NULL)
    {
        lst = lst->next;
        lstsize++;
    }
    return (lstsize);
}
