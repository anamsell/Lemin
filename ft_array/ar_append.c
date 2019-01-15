/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ar_append.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpisano <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/03/28 14:20:27 by bpisano      #+#   ##    ##    #+#       */
/*   Updated: 2018/04/26 16:28:04 by bpisano     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_array.h"

int		ar_append(t_array *array, ...)
{
	int			i;
	int			count;
	va_list		params;
	t_array		new;

	count = ar_count(*array);
	if (!ar_init(&new, count + 1))
		return (0);
	i = -1;
	va_start(params, array);
	while (++i < count)
		new[i] = (*array)[i];
	new[i] = va_arg(params, void *);
	new[i + 1] = NULL;
	free(*array);
	*array = new;
	return (1);
}
