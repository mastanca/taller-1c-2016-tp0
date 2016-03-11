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
