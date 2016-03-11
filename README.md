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
