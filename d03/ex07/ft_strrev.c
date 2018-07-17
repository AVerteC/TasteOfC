/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanchen <alanchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 15:18:29 by alanchen          #+#    #+#             */
/*   Updated: 2018/07/17 16:33:17 by alanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	* ft_strrev(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	char *nustring;
	char place;
	*nustring = "";
	int ni;

	ni = 0;
	while (len > 0)
	{
	place = str[len];
	*nustring+= place;
		len--;
		ni++;
	}
	return (*nustring);
}

int main(void)
{
	char *out;
	
	out = ft_strrev("yeey");
	printf("%s",out);
}