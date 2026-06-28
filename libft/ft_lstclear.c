/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alepriet <alepriet@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 10:31:17 by alepriet          #+#    #+#             */
/*   Updated: 2026/06/28 10:35:38 by alepriet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list	*current;
    t_list	*next_node;

    if (!lst || !del)
        return (NULL);
    current = *lst;
    while (current != NULL)
    {
        next_node = current->next;
        ft_lstdelone(current, del);
        current = next_node;
    }
    *lst = NULL;
}