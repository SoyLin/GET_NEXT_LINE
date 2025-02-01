/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilu <lilu@student.42madrid.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 20:29:17 by lilu              #+#    #+#             */
/*   Updated: 2025/02/01 20:55:53 by lilu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*prueba(int	n)
{
	if (n==1)
	{
		return("hello");
	}
	return(0);
}
// char	*get_next_line(int fd)
// {
	
// }


int	main()
{
	char	*line;
	char	*ptemp;
	int	i;

	i = 0;
	line = (void *) malloc(6 * 1);
	while (i < 5)
	{
		line[i] = i + '0';
		i++;
	}
	line[i] = '\0';
	
	ptemp = line;
	printf("ptem:%s\n",ptemp);
	printf("line:%p\n",line);
	printf("ptem:%p\n",ptemp);
	
	printf("%s\n",line);
	free(line);
	printf("%s\n",ptemp);
	
	return (0);

	// char	*p = "hola";
	// printf("Dirección de hola. %p\n",p);
	// printf("Dirección de puntero p. %p\n",&p);

}