/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alepriet <alepriet@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 10:24:46 by alepriet          #+#    #+#             */
/*   Updated: 2026/06/28 11:00:26 by alepriet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list	*last;

    if (!lst || !new)
        return (NULL);
    if (*lst == NULL)
    {
        *lst = new;
        return (NULL);
    }
    last = ft_lstlast(*lst);
    last->next = new;
}