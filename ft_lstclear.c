/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 19:21:11 by marvin            #+#    #+#             */
/*   Updated: 2023/11/21 01:20:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    int lstsize;
    int i;
    t_list *tmplst;

    if (lst == NULL)
        return ;
    lstsize = ft_lstsize(*lst);
    i = 0;
    while (i < lstsize)
    {
        tmplst = ft_lstlast(*lst);
        del(tmplst->content);
        free(tmplst);
        i++;
    }
    *lst = NULL;
}
