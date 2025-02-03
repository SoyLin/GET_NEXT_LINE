/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilu <lilu@student.42madrid.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 20:29:17 by lilu              #+#    #+#             */
/*   Updated: 2025/02/03 19:50:09 by lilu             ###   ########.fr       */
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
	int *p1, *p2, *p3, *p4;

	printf("almacenada en p1: %p\n", p1);
	printf("almacenada en p2: %p\n", p2);
	printf("alamcenada en p3: %p\n", p3);
	printf("almacenada en p4: %p\n", p4);

	printf("propia ID de p1: %p\n", &p1);
	printf("propia ID de p2: %p\n", &p2);
	printf("propia ID de p3: %p\n", &p3);
	printf("propia ID de p4: %p\n", &p4);

	int	*line;
	int	x = 9;

	printf("ronda 1 dirección que lleva line:%p\n",line);
	
	if (line)
		printf("line != null\n");
	else
		printf("line es null\n");

	line = &x;
	printf("dirección x:%p\n",&x);
	printf("dirección almacenada line:%p\n",line);
	
	if (line)
		printf("line != null\n");
	else
		printf("line es null\n");
	
	
	// int	i;

	// i = 0;
	// line = (void *) malloc(6 * 1);
	// while (i < 5)
	// {
	// 	line[i] = i + '0';
	// 	i++;
	// }
	// line[i] = '\0';
	
	// ptemp = line;
	
	// printf("dirección line:%p\n",line);
	// printf("dirección ptem:%p\n",ptemp);
	
	// printf("valor line:%s\n",line);
	// printf("valor ptem:%s\n",ptemp);
	// free(line);
	// printf("%s\n",ptemp);
	
	return (0);

	// char	*p = "hola";
	// printf("Dirección de hola. %p\n",p);
	// printf("Dirección de puntero p. %p\n",&p);

}