
Los archivos fueron entregados con todas las soluciones, asi que utilice gran parte de ellas como apoyo, no sin aplicar antes estilizado a los archivos (mis propias modificaciones).

# 1. Instanciar un objeto con "" , por ejemplo Persona persona("");

Al intentar instaciar un objeto persona sin nombre en este caso: `Persona Juan("")` sale el error 1 que corresponde a:

```c++
  if(nombre.size() == 0) {
	  throw 1;
  }
```
En el constructo del objeto persona.

# 2. Instanciar al músico santana , Set instrumento e Imprimir, por ejemplo:

```c++
Musico Santana("Santana");
santana.setInstrumento("Guitarra");
santana.imprimir(cout); 
```
La ejecucion termina sin problemas

# 3. Instanciar a la persona santana , Set instrumento e Imprimir, por ejemplo: 

```c++
Persona santana("Santana");
santana.setInstrumento ("Guitarra");
santana.imprimir (cout); 
```
La ejecucion arroja un error porque el objeto perosona no tiene un metodo `setInstrumento()`

# 3.1 ¿Cómo asocia lo sucedido a los conceptos vistos en clase, explique su respuesta

Si llego a inicializar objetos personas y musicas con el mismo identificador me arrojo el error `previous definition`, porque declarar dos objetos con el mismo identificador.

Esto aplica para cualquier tipo de dato por ejemplo:

```c++
int a;
double a;
```
Esa declaracion arroja un error del mismo tipo.

Por otro lado vemos el concepto de herencia donde la clase musica hereda:
```c++
protected:
    string nombre;
    int age;
    
public:
    Persona(string nombre) throw(int);
    ~Persona();
    virtual void imprimir(ostream &flujo) throw(int);
    string getNombre() const;
    void setEdad(int age);
```
# 4.  Instanciar a la cantante shakira y su nombre artisitco , pruebe Set instrumento, setcantaBien e Imprimir , por ejemplo:

```c++
Cantante Shakira("Shakira Mebarak");
Shakira.setcantaBien(false);
Shakira.setnombreArtistico("Shakira");
Shakira.imprimir(cout); 
```
La ejecucion termino correctamente.

# 5. Incluya la edad para el musico y el cantante como un método set e imprimalo. 

Indirectamente lo mejor es aplicarlo a la clase padre (persona) para que estas dos clases lo hereden sin tener que implementar los metodos directamente en ellas.Tambien modifico el metodo imprimir para que muestre la edad.

Si se requiere si o si una implementacion especifica en esas clases se requiere el uso de `virutal`, modificando el metodo dentro del propio objeto seria:

```c++
void Musico::imprimir(ostream &flujo)  throw(int)
{
	if(instrumento.size() == 0) {
	  throw 4;
	}
	flujo << this->getNombre();
	flujo << endl;
	flujo << "El instrumento es: " << this-> instrumento;
	flujo << endl;
    flujo << "La edad es: " << this-> age;
    flujo << endl;
    flujo << "Toca " << cuantas_instrumentos() << " instrumentos" << endl;
}
```

# 6. Implemente una nueva funcionalidad en la clase musico que toca varios instrumentos, la propiedad es un entero que dice cuántos instrumentos toca, utilice el nuevo método en la clase muscio int cuantas_instrumentos() const throw(); //Nueva función 

Esta funcionalidad si la hago propiamente en la clase musico.

```c++
// En la clase
private:
	string instrumento;
    int cant;

public:
    int cuantas_instrumentos() const throw(int);
// En los metodos
// Para setiarlo
void Musico::setCantInstrumento(int cant)
{
  this-> cant = cant;
  cuantas_instrumentos();
}
// Para mostrarlo
int Musico::cuantas_instrumentos() const throw(int)
{
  if (cant < 0)
  {
    throw 6;
  }
  return cant;
}
```

# 8. Defina el método imprimir como virtual imprima un cantante y un musico. ¿Qué sucede? 

Se le esta avisando al compilador que un método será polimórfico y que en las clases derivadas existen distintas definiciones del mismo (o pueden existir).

# ¿Por qué sucede?

porque asi funciona en c++.

# ¿Cómo asocia lo sucedido a los conceptos vistos en clase?

Virtual es una herramienta muy poderosa en la heriencia, haciendo mas flexible el uso de clases molde para implementaciones especificas.

# 8. Implemente la clase espectador que hereda de persona que le gusta o no la banda.

Los requerimientos especificos de esta clase serian:
- Atributo gusto (como booleano)
- Metodo Set para el gusto
- Metodo Get para el gusto