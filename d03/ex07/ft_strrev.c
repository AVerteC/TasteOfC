/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanchen <alanchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 15:18:29 by alanchen          #+#    #+#             */
/*   Updated: 2018/07/18 13:56:25 by alanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strrev(char *str)
{
	int len;
	int flen;
	int newiter; 
	len = 0;
	newiter = 0;
	while (str[len] != '\0')
	{
		printf("current char: %c \n", str[len]);
		len++;
	}
	printf("total length %d \n",len);
	flen = len;

	char reverse[flen];
	//char *reverse = malloc(flen * sizeof(char));
	char place;

	while (len >0)
	{
	place = str[len];
	reverse[newiter] = place;
		len--;
		printf("index position: %d \n",len);
		printf("current char %c \n", str[len]);
		printf("reverse index position: %d \n",newiter);
		newiter++;
	}
	return (*reverse);
	//free (reverse);
}

int main(void)
{
	char *out;
	out = ft_strrev("abcde");
	printf("%s",out);
	return (0);
}