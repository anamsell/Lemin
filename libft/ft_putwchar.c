/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_wputchar.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpisano <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/02/05 13:57:32 by bpisano      #+#   ##    ##    #+#       */
/*   Updated: 2018/02/06 12:10:33 by bpisano     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_putwchar(wchar_t c)
{
	ft_putwchar_fd(c, 1);
}
