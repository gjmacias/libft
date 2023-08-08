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
memset		| ft_memalloc	| ft_lstnew		| ft_capitalize 
bzero		| ft_memdel		| ft_lstdelone	| ft_countwords 
memcpy		| ft_strnew		| ft_lstdel		| ft_islower    
memccpy		| ft_strdel		| ft_lstadd		| ft_isupper    
memmove		| ft_strclr		| ft_lstiter	| ft_strndup    
memchr		| ft_striter	| ft_lstmap		| ft_lst_reverse
memcmp		| ft_striteri	|				| ft_realloc
strlen		| ft_strmap		|				| ft_strjoinch
strdup		| ft_strmapi	|				| ft_strnchr
strcpy		| ft_strequ		|				| ft_copyuntil
strncpy		| ft_strnequ	|			| ft_strstartswith
strcat		| ft_strsub		| | ft_intlen
strlcat		| ft_strjoin	| | ft_strendswith
strchr		| ft_strtrim	| | ft_pathjoin
strrchr		| ft_strsplit	| | ft_lstaddback
strstr		| ft_itoa		| | get_next_line
strnstr		| ft_putchar	| | ft_putnstr
strcmp		| ft_putstr		| | ft_strreplace
strncmp		| ft_putendl	| | ft_isemptystr
atoi		| ft_putnbr		| | ft_strsplitall
isalpha		| ft_putchar_fd	| | ft_countwordsall
isdigit		| ft_putstr_fd	| | ft_freestrarr
isalnum		| ft_putendl_fd	| | ft_strjoincl
isascii		| ft_putnbr_fd	| | ft_strjoinchcl
isprint		|| | ft_count2darray
toupper		| | | ft_strarrmax
tolower		| | | ft_get_parent_path

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
[1]: https://www.42barcelona.com/ "42 BCN"
