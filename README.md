# Taller de Programación I - TP 0
Repositorio para los tps de taller

sizeof() es una funcion que devuelve la representacion en bytesde un tipo de dato. La representacion depende
de la arquitectura y la implementacion, sin embargo C y C++ determinan un minimo de bits para la representacion de tipos,
por ejemplo para char son 8bits y para int son 16bits.
Entones la salida de sizeof( char ) es 1, y la salida de sizeof( int ) es 4, representados en bytes.

El valor del sizeof de un struct no es la suma de los sizeof de sus elementos, ya que el compilador agrega padding
por una cuestion de performance.

El error generado al subir el codigo fuente original es un error del linker, ya que estamos llamando a la funcion
malloc y nunca incluimos la libreria en la cual esta definida (stdlib)

Al corregir los errores de compilacion y linkeo, el programa compilo correctamente pero fallo al verificar
las normas de codificacion. El retorno esperado era un 0 y el obtenido fue un 1.
Las normas de codificacion fallaron ya que habia espacios en blanco de mas entre los arguementos de las funcion y
los parentesis y porque se utilizo strcpy en vez de snprintf, el cual es casi siempre mejor.
La prueba 1 fallo porque al querer abrir un archivo que no existe el programa hace un return 2, que se entiende
como que finalizo como un error ya que es distinto de 0.

Se corrigieron los errores en las normas de codificacion, se reemplazaron los numeros magicos por constantes y se
corrigio el valor de retorno si el fp == NULL.
Al subir esta nueva version las normas de codificacion solo presentan la sugerencia de snprintf. La prueba 1 paso
exitosamente y ahora el fallo ocurre en la prueba numero 2.
Los fallos en valgrind se deben a la apretura de archivos que luego no fueron cerrados y a la llamada a un malloc
que no esta cerrada con un free en ningun momento. Los archivos que no se cierran no pueden garantizar
que todo lo que se mando a escribir a ellos sea realmente escrito, ya que puede haber quedado en algun buffer.
El malloc que no se libera con free es memoria que se pierde ya que queda reservada pero nunca mas es usada.

Se agregaron el free y el fclose. Arrojo un error con codigo extraño (134). Al parecer estaria tratando de
leer mas alla del espacio reservado. Segun valgrind pareciera que estamos tratando de leerde la direccion 0x0
lo que pareceria indicar un null pointer. Utilizando strncpy podria solucionarse el problema, ya que el tercer
arguemento de dicha funcion es hasta cuantos caracteres voy a leer, evitando asi pasarme si es mas grande.
Segmentation fault: Se produce cuando un programa trata de acceder a una posicion de memoria a la cual no tiene
acceso, o en una forma no permitida.
Buffer oveflow: Se genera cuando se escribe en un buffer y el tamaño de lo que tratamos de escribir excede el tamaño
del buffer, pisando la memora adyacente a este.
Para la prueba 2 se ingreso el archivo text corto y para la 4 el texto largo. El comando ejecutado para la prueba 3
fue 	./tp soy-un-archivo-con-nombre-largo.txt
