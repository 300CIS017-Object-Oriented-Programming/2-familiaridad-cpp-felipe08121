// matematicas.cpp
#include "matematicas.h" // Se incluye a sí mismo

// --- Definiciones (El "cómo") ---
int sumar(int num1, int num2)
{
    return num1 + num2;
}

int restar(int num1, int num2)
{
    // TODO agregar validacion para que num1 >= num2, sino cambiar el orden para restar num2 - num1
    if( num1>= num2) {
        return num1 - num2;
    }
    else {
        int temp;
        temp = num1;
        num1 = num2;
        num2 = temp;
        return num1 - num2; // Se puede resolver mas facil usando el return num2 - num1,
        //se realizo el cambio con una variable temporal como practica.
    }
    // Se implemento el cambio de orden.
}

// Ejemplos con arreglos
int llenarArreglo(int arreglo[], int tamano)
{
    for (int i = 0; i < tamano; i++)
    {
        arreglo[i] = i + 1; // Llena el arreglo con números del 1 al 10
    }
    return 0; // Retorna 0 para indicar éxito
}

int sumarPares(int arreglo[], int tamano)
{
    int suma = 0;
    for (int i = 0; i < tamano; i += 2)
    {
        // Posiciones pares
        suma += arreglo[i];
    }
    return suma;
}

void mostrarArreglo(int arreglo[], int tamano)
{
    for (int i = 0; i < tamano; i++)
    {
        std::cout << arreglo[i] << " "; // Muestra el elemento en la posición i})
    }
}

int factorial( int numero ) {

    int factorial = 1;
    for ( int i = 1; i <= numero; i++) {
        factorial *=  i;
    }
    return factorial;
}

int potencia( int base, int exponente ) {
    int resultado = 1;
    for ( int i = 1; i <= exponente; i++ ) {
        resultado *= base;
    }

    return resultado;
}

int encontrarMaximo( int arreglo[], int tamano ) {

    int max = -10000;

    for (int i = 0; i < tamano; i++ ) {
        if ( arreglo[i] > max ) {
            max = arreglo[i];
        }
    }
    return max;
}