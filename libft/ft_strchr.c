/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaouan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:39:36 by akaouan           #+#    #+#             */
/*   Updated: 2021/11/15 11:19:15 by akaouan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	cp;

	cp = c;
	while (*s)
	{
		if (*s == cp)
		{
			return ((char *)s);
		}
		s++;
	}
	if (*s == cp)
		return ((char *)s);
	else
		return (0);
}
/*
int main()
{
	printf("%s",ft_strchr("hello",'o'));
}*/
