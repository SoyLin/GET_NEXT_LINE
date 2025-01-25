/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilu <lilu@student.42madrid.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 21:17:01 by lilu              #+#    #+#             */
/*   Updated: 2025/01/25 19:19:53 by lilu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ARCHIVO DE CABECERA (HEADER) .h

//PREPROCESADOR
//Es un programa que forma parte del compilador y que "prepara" o modifica el código fuente antes de ser compilado.
//EJ: el preprocesador reemplaza todos los BUFFER_SIZE encontrados en el código por el valor 5, es muy EFECTIVA que cambia todo por solo una línea de código en el HEADER .h

//DIRECTIVAS #
//Son instrucciones que sirven para organizar el programa: facilita la reutilzación del código (#include) para "insertar" librerías y funciones
//definir constantes y marcos (#define), evitar duplicaciones y conflictos(#ifndef,#endif,#ifdef)

//#define nombre valor   =   -D nombre = valor ()
//estas dos definiciones son IDÉNTICOS por eso puedo restablecer/cambiar el valor del marco BUFFER_SIZE con el compilador

//se permite espacios después del # porque el preprocesador de C está diseñado para ignorar espacios innecesarios. Pero prohibe dejar salto de línea entre # y directiva (prohibe que no haya nada detrás del #)


//GET_NEXT_LINE_H y BUFFER_SIZE : se escriben en mayúsculas por las normal para indicar que son
//MACROS DE PREPROCESADORES y para diferenciar en el programa de las variables o funciones que suelen estar escritas en camelCase.  Los marcos se definen con #define y NO tienen un tipo asociado

//GET_NEXT_LINE_H: es un macro de preprocesador utilizada como guardia de inclusión. Evita que el contenido de este archivo header se incluya más de una vez durante la compilación
//Ventajas: evita errores de compilación por duplicado y podemos incluir el archivo de cabecera en cualquier orden sin preocuparnos por duplicaciones

//EJ: tenemos 2 archivos .c que incluyeron el header
// archivo1.c #include "get_next_line.h"
// archivo2.c #include "get_next_line.h"
//Cuando se incluye por 1ª vez -> el preprocesador verifica si la macro está definido con este código: #ifndef GET_NEXT_LINE_H
//Como no está definido cumple la condición de #ifndef GET_NEXT_LINE_H y ejecuta el bloque de código:  # define GET_NEXT_LINE_H
//Cuando se incluye por 2ª vez -> el preprocesador DETECTA que está definida > NO cumple la condición : #ifndef GET_NEXT_LINE_H y NO SE EJECUTARA EL INTERBLOQUE = NO SE DEFINIRÁ EL MACRO 


//SENTENCIA DE IF PRINCIPAL
//if !(GET_NEXT_LINE_H) {...} -> si NO se cumple la condición no se ejecutaría el bloque de código de IF
//PROPÓSITO: evitar inclusión múltiple
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

//BLOQUE DEL IF DENTRO DEL IF PRINCIPAL
//BUFFER: area de memoria para almacenar los datos leídos de forma temporal
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5 //el buffer tendrá tamaño de 5 bytes por defecto,si no ha sido definido previamente
# endif

# include <stdlib.h>  //librería que proporciona: malloc, free
# include <unistd.h>  //read()
# include <fcntl.h>  //open() devuelve un file descriptor

size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s);
char	*get_next_line(int fd);

//CIERRE DEL IF PRINCIPAL
#endif

//https://www.it.uc3m.es/pbasanta/asng/course_notes/ch13s11.html