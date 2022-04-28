// Importamos librerías
/* 
Las bibliotecas contienen el código objeto de muchos programas que permiten hacer cosas comunes, como leer el teclado, 
escribir en la pantalla, manejar números, realizar funciones matemáticas, etc
*/
#include <iostream>
#include <string>
#include <stdlib.h>
system("pause");  // Para pausar la ejecución de un programa
using namespace std; // Esta línea nos ayuda a declarar un espacio de nombre que evita tener que usarlo cada que accedemos a alguna función especifica de una librería

// El doble / se usa para comentarios de una linea (igual que js)

/*  
Asi se hace un comentario en bloque, para cuando necesites varia lineas
*/

#define Pi 3.1416; // Forma para declarar una constante, pero es tratada como una expresion (no es recomendable)
const float Pi2 = 3.1416; // Forma recomendable

int numero_Entero = 6;
bool booleano = false;
float numero_Real = 3.1516;
double numero_Real_Gigante = 10000000000; // Igual que el float pero para números mas grandes
string nombre = "Pedro"; // Como se puede ver por el resaltado string no es un dato primitivo, sino una clase

string vector[5] = {"5", "hola", "2.7", "8,9", "adios"}; // Asi se crea y inicializa un vector (tipo_de_dato nombre_del_vector[tamanio];)

int vector2[] = {1,2,3,4,10,9,80,70,19}; // Por defecto toma el numero de elementos que contiene (si no se especifica)

float vector3[5] = {10.5}; // Se le asigna el 10.5 al elemento "cero" y los demás se completan con ceros

/*  
Las matrices no es más que una serie de vectores contenidos uno en el otro (u otros), es decir, una matriz es un vector cuyas posiciones son otros vectores
*/

// Su declaración es tipoDato nombreMatriz[filas][columnas];

int myMatriz1[2][2] = {{1,2},{3,4}}; // En total se contendras 4 datos de tipo entero (2 * 2), en esta presentación no se contempla bien

int myMatriz_Grafica[2][2] = { // Ahora veamos su representacion mas "didáctica"
    {1,2},
    {3,4}
    };

// Punteros
// Debe ir en main para el uso de memoria, por eso el error
int variable,* puntero; //Creamos una variable de tipo entero y en puntero de nombre  "puntero"
puntero = &variable;// &x la dirección de memoria de x    *x El valor de memoria que esta en la ruta de memoria x (claro si x es una ruta)
* puntero = 20; 


int main() // La funcion main es la "madre" de las funciones, es la que el compilador buscara para iniciar nuestro programa
{ // main lleva int, pero bien puede llevar declarado otro tipo de valor
    if (!booleano) // Si la condición solo tiene una linea no son necesarios los corchetes
        std::cout << "El boleano es falso\n"; // El std es cuando no especificamos el namespace
    if (booleano && numero_Entero > 5)
    {
        cout << "El boleano es verdadero y el numero entero es mayor a 5." << endl; // End line  o \n para dejar un salto de linea
    }
    if (numero_Real > 3 || numero_Entero > 5)
    {
        cout << "El numero real es mayor a 3 o el numero entero es mayor a 5. \n";
    }
    while (numero_Entero < 10)
    { // Levar el numero entero a 10
        numero_Entero++;
        cout << numero_Entero << endl;
    }

    cout << "booleano \n";

    string nombre = "Nombre"; // La podemos inicializar con lo que queramos, pues si o si este bloque se ejecuta
    do
    {

        cout << "Ingrese la palabra 'Nombre' \n";
        cin >> nombre;
    } while (nombre != "Nombre");

    int verificar_Numero_Par;
    cout << "Ingrese un numero para verificar si es primo: \n";
    cin >> verificar_Numero_Par;

    bool es_Primo = true; // A priori digamos que el numero es primo

    for (int i = 2; i < verificar_Numero_Par; i++) // Inicio se puede declarar la variable fuera o dentro, condición, aumento
    {
        if (verificar_Numero_Par % i == 0)
        { // Si es divisible por ese numero entonces no es primo.
            es_Primo = false;
            break; // Con un solo divisor que encontremos basta.
        }
    }
    if (es_Primo)
    {
        cout << "El numero " << verificar_Numero_Par << " es primo" << endl;
    }
    else
    {
        cout << "El numero " << verificar_Numero_Par << " no es primo" << endl;
    }

    int opcion;

    cout << "Escriba un numero entero entre el 1 y el 4 (incluyendolos): ";
    cin >> opcion;

    switch (opcion) // En el switch se hacen comparaciones del tipo ==
    {
    case 1:
        cout << "Has seleccionado la opcion 1.";
        break;

    case 2:
        cout << "Has seleccionado la opcion 2.";
        break;

    case 3:
        cout << "Has seleccionado la opcion 3.";
        break;

    case 4:
        cout << "Has seleccionado la opcion 4.";
        break;
        
    default:
        cout << "No has seleccionado una opcion valida.";
        break;
    }
    getch(); // Esperar un dato para terminar la ejecución (util para ejecutar en consola y poder ver las salidas)
    return 0; // Para que el programa sepa que termino correctamente la ejecución (recordando que main es una funcion)
    // Si retorna otra cosa esto indicaria que hay algún tipo de error durante la ejecución
}