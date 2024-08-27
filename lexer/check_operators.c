/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_operators.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hime <mel-hime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 23:59:03 by eel-ansa          #+#    #+#             */
/*   Updated: 2024/08/27 11:02:53 by mel-hime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

int	check_oper(t_lexer *node)
{
	if (node->type >= 5 && node->type <= 8)
		return (0);
	return (1);
}

