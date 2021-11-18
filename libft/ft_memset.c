/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaouan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 00:16:03 by akaouan           #+#    #+#             */
/*   Updated: 2021/11/17 00:22:44 by akaouan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = (unsigned char)c;
		i++;
	}
	return ((void *)b);
}
/*
int main()
{
	char a[] = "hello";
	int b[] = {1, 2, 3, 4, 5, 6};

	ft_memset(a, 'a', 3);
	printf("Result === %s\n", a);
	ft_memset(b , 100, 1);
	printf("case 1 == %d\n", b[0]);
}*/
