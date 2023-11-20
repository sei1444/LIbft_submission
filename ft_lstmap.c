/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 19:21:21 by marvin            #+#    #+#             */
/*   Updated: 2023/11/21 01:07:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    int lstsize;
    t_list *result;
    t_list *tmplst;

    lstsize = ft_lstsize(lst);
    result = malloc(sizeof(t_list) * lstsize);
    tmplst = malloc(sizeof(t_list));
    tmplst->next = NULL;
    while (lst->next != NULL)
    {
        tmplst->content = f(lst->content);
        ft_lstadd_back(&result, tmplst);
        del(tmplst->content);
        lst = lst->next;
    }
    free(tmplst);
    return (result);
}
