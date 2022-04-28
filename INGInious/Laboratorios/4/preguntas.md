# 1. ¿Qué ocurre si elimino todas las palabras virtual? ¿Por qué ocurre eso?

Todos los participantes reciben 0 como premio, debido a que, por la falta de la palabra virtual, no se aplica el polimorfismo, por consiguiente solo se tiene en cuenta el metodo de la clase Padre (Presentador.h) y los demas metodos se ignoran.

# 2. Tengo un nuevo PresentadorTemporal, que hereda de Presentador, y tiene un nuevo comportamiento, pues los bitcoins que entrega son 100 multiplicados por los minutos de la hora actual (ver archivos adjuntos). Añádalo a su programa, poniéndolo el último de la fila de presentadores. ¿Qué archivos tiene que modificar? ¿Por qué?

Realizando e incluyendo la clase correctamente, solo se deberia modificar el main para agregar al PresentadorTemporal. Debido a que estamos utilizando polimorfismo, por lo que el codigo es mucho mas flexible a la hora de realizar modificaciones.

# 3. Añada de la misma manera este PresentadorTemporal al programa original (el que no tiene polimorfismo). ¿Qué archivos tiene que modificar? ¿Por qué?
Se debe modificar:

1. En el main se debe agregar la opcion para agregar al presentador temporal al concurso, por lo que se debe incluir "temporal" al final del vector nombresPresentadores y su if correspondiente en el for donde agregan los presentadores.
2. En Concurso.h se debe agregar como atributo un puntero tipo presentadorTemporal.
3. En concurso.h se debe agregar un metodo para añadir un presentadorTemporal.
4. En el destructor de Concurso se debe limpiar tambien el puntero anteriormente creado.
5. En el metodo entregarPremios de Concurso, se debe agregar la opcion para que el presentadorTemporal entregue el premio de la misma manera en la que los otros presentadores lo hacen.

La razon de todas estas modificaciones engorrosas se debe a la falta de polimorfismo, ya que debido a esto el codigo es dificil de modificar en comparacion al codigo hecho con polimorfismo.

# 4. Comparando la solución 2 y 3 diga cual es la ventaja del polimorfismo

R//

La solucion con polimorfismo generaliza mas la solucion, lo que termina en acortando las lineas de codigo, al mismo tiempo haciendo el programa mas eficiente y mas facil de modificar o añadir elementos.
