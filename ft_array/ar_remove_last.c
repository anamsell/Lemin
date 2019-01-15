/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ar_remove_last.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpisano <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/03/28 17:15:59 by bpisano      #+#   ##    ##    #+#       */
/*   Updated: 2018/04/23 19:40:00 by bpisano     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_array.h"

int		ar_remove_last(t_array *array)
{
	return (ar_remove_at(array, ar_count(*array) - 1));
}
