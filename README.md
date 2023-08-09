# libft - gmacias-
En este proyecto recrearemos desde 0 algunas de las librerias estandar de C, añadiendo algunas nuevas.

### Indice
* [Que es libft?](#que-es-libft)
* [Que utilizamos?](#que-utilizamos)
* [Como funciona?](#como-funciona)
* [Como utilizamos la libreria?](#como-utilizamos-la-libreria)

### Que es libft?
Libft es un projecto de [42][1] donde recreamos algunas de las librerias estandar de C añadiendo algunas nuevas que creando nuestra propia libreria de funciones para utilizarlos en nuestros programas.

Disclaimer: *No reinventamos la rueda. Este ejercision nos ayuda a entender como funcionas algunos algoritmos basicos en profuindidad*

### Que utilizamos?
Como podrás comprobar, hay 4 secciones:

1.  **Funciones Libc:** Algunas funciones estandar de C
2.  **Funciones adicionales:** Funciones que seran utiles para futuros proyectos de 42
3.  **Funciones Bonus:** Funciones que nos ayudaran a entender la manipulación de listas
4.  **Funciones Personales:** Funciones que me seran de ayuda a futuro

Funciones Libc |Funciones adicionales | Funciones Bonus | Funciones Personales
:----------- | :-----------: | :-----------: | -----------:
atoi		| ft_itoa	| ft_lstadd_back		| ft_error
bzero		| ft_putchar_fd	| ft_lstadd_front		| ft_sign 
calloc		| ft_putendl_fd	| ft_lstclear		|  
isalnum		| ft_putnbr_fd	| ft_lstdelone		|  
isalpha		| ft_split	| ft_lstiter		|  
isascii		| ft_striteri	| ft_lstmap		|  
isdigit		| ft_strjoin		| ft_lstnew	|  
isprint		| ft_strlcat		| ft_lstsize	|  
memchr		| ft_strlcpy		| |  
memcmp		| ft_strmapi		| |  
memcpy		| ft_strtrim		| |  
memmove		| ft_substr		| |     
memset		| | |     
strchr		| | |     
strdup		| | | 
strlcat		| | | 
strlen		| | | 
strncmp		| | | 
strncmp		| | | 
strnstr		| | | 
strrchr		| | | 
tolower		| | | 
toupper		| | | 

### Como funciona?

La meta es crear una libreria que contenga todas nuestras funciones para poder utilizarlas en futuros proyectos llamada: *libft.a*

Para crear esta libreria seguimos los siguientes pasos:

	git clone https://github.com/gjmacias-/libft
	cd libft
	make

Al revisar el directorio, en alguna parte encontraras la libreria: *libft.a*

### Como utilizamos la libreria?

Para utilizarlo primero debes de  tener la libreria: *libft.a*.
Luego debes añadirlo en el compilador, primero la ruta de libft.a y luego el nombre de la libreria

`gcc archivos.c -L<ruta de libft.a> -lft`

-L tomara la ubicacion de la libreria<br>
-l tomara el nombre de la libreria. en este caso seran los caracteres que vegan despues de `lib` de tu libreria.

y eso seria todo!
# Quizás pueda interesarte!

### - Para ver mi progresion en 42 🌠
[AQUÍ](https://github.com/gjmacias/42BCN)

### - Mi perfil de 42 👾
[AQUÍ](https://profile.intra.42.fr/users/gmacias-)

# Contacto 📥

◦ Email: gmacias-@student.42barcelona.com

[1]: https://www.42barcelona.com/ "42 BCN"
