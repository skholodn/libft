/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skholodn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 11:45:58 by skholodn          #+#    #+#             */
/*   Updated: 2016/12/01 11:50:38 by skholodn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_toupper(int c)
{
	unsigned char	d;

	if (c < 0 || c >= 255)
		return (c);
	d = (unsigned char)c;
	return (d >= 'a' && d <= 'z' ? d - 32 : c);
}