/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_isxdigit.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpisano <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 13:06:24 by bpisano      #+#   ##    ##    #+#       */
/*   Updated: 2017/11/24 13:06:26 by bpisano     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_isxdigit(int c)
{
	return ((c >= '0' && c <= '9') ||
			(c >= 'A' && c <= 'F') ||
			(c >= 'a' && c <= 'f') ? 1 : 0);
}
