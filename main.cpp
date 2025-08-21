// main.cpp
#include <iostream>
#include "matematicas.h" // Incluimos nuestro contrato

void probarMatematicas()
{
    std::cout << "Bienvenido al programa de matemáticas" << std::endl;
    std::cout << "Ingresa el primer numero" << std::endl;
    int num1;
    std::cin >> num1;
    std::cin.clear();
    std::cin.ignore(10000, '\n');
    int num2;
    std::cout << "Ingresa el segundo numero" << std::endl;
    std::cin >> num2;
    std::cin.clear();
    std::cin.ignore(10000, '\n');

    int resultado_suma = sumar(num1, num2); // Funciona
    int resultado_resta = restar(num1, num2); // Funciona

    std::cout << "Suma: " << resultado_suma << std::endl;
    std::cout << "Resta: " << resultado_resta << std::endl;



}

void primera_actividad() {
    int num3;
    std::cout << "Ingrese el numero al cual le desea sacar el factorial: ";
    std:: cin >> num3;
    std::cin.clear();
    std::cin.ignore(10000, '\n');

    int resultado_factorial = factorial(num3); // Funciona

    std::cout << "Fatorial de " << num3 << "! " << "es: " << resultado_factorial << '\n';
}

void  segunda_actividad() {
    int num4;
    std::cout << "Ingrese el numero el cual sera la base: ";
    std:: cin >> num4;
    std::cin.clear();
    std::cin.ignore(10000, '\n');
    int num5;
    std::cout << "Ingrese el numero el cual sera exponente: ";
    std:: cin >> num5;
    std::cin.clear();
    std::cin.ignore(10000, '\n');

    int resultado_potencia = potencia( num4, num5 );

    std::cout << "la potencia, con base " << num4 << " y " << " exponente " << num5 << ", es: " << resultado_potencia << '\n';
}

void probarArreglos()
{
    int cantElementos = 10;
    int arreglo[cantElementos]; // Declaración de un arreglo
    llenarArreglo(arreglo, cantElementos);
    std::cout << "Arreglo lleno: ";
    mostrarArreglo(arreglo, cantElementos);
    std::cout << " Sumando pares" << std::endl;
    int suma = sumarPares(arreglo, cantElementos);
    std::cout << "Suma de elementos en posiciones pares: " << suma << std::endl;
}

int main()
{
    //probarMatematicas();
    //probarArreglos();
    //primera_actividad();
    segunda_actividad();
    return 0;
}
