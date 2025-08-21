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

    int resultado_potencia = potencia( num4, num5 ); //Funciona

    std::cout << "la potencia, con base " << num4 << " y " << " exponente " << num5 << ", es: " << resultado_potencia << '\n';
}

void tercera_actividad_suma()
{
    std::cout << "Ingresa el primer numero" << std::endl;
    int num6;
    std::cin >> num6;
    std::cin.clear();
    std::cin.ignore(10000, '\n');
    int num7;
    std::cout << "Ingresa el segundo numero" << std::endl;
    std::cin >> num7;
    std::cin.clear();
    std::cin.ignore(10000, '\n');

    int resultado_suma = sumar(num6, num7); // Funciona

    std::cout << "Suma: " << resultado_suma << std::endl;
}

void tercera_actividad_resta()
{
    std::cout << "Ingresa el primer numero" << std::endl;
    int num7;
    std::cin >> num7;
    std::cin.clear();
    std::cin.ignore(10000, '\n');
    int num8;
    std::cout << "Ingresa el segundo numero" << std::endl;
    std::cin >> num8;
    std::cin.clear();
    std::cin.ignore(10000, '\n');

    int resultado_resta = restar(num7, num8); // Funciona

    std::cout << "Resta: " << resultado_resta << std::endl;
}


void cuarta_actividad() {
    int edad;
    int arreglo[10] = { 23, 12, 55, 555, 1024, 21, 1 ,2 ,3 ,33 };
    encontrarMaximo( arreglo, 10 );
    std::cout << "Por favor ingrese su edad: ";
    std::cin >> edad;
    std::cin.clear();
    int max;
    max = encontrarMaximo( arreglo, 10 );
    std::cin.ignore(10000, '\n' );
    std::cout << "Su edad es: " << edad << " y " << "el maximo valor del arreglo es: " << max <<
        " y la suma de su edad con el valor maximo del arreglo es: " << max+edad << '\n';
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
    int opcion;
    //probarMatematicas();
    //probarArreglos();
    //primera_actividad();
    //segunda_actividad();
    do {
        std::cout << "\n-----Menu de Operaciones-----\n";
        std::cout << "1. Suma. \n";
        std::cout << "2. Resta. \n";
        std::cout << "3. Factorial. \n";
        std::cout << "4. Potencia. \n";
        std::cout << "5. Encontrar el numero maximo de un arreglo. \n";
        std::cout << "-1. Salir. \n";
        std::cout <<"Seleccione una opcion: ";
        std::cin >> opcion;
        std::cin.clear();
        switch (opcion) {
            case 1:
                tercera_actividad_suma();
                break;
            case 2:
                tercera_actividad_resta();
                break;
            case 3:
                primera_actividad();
                break;
            case 4:
                segunda_actividad();
                break;
            case 5:
                cuarta_actividad();
                break;
            case -1:
                std::cout << "Saliendo del programa....\n";
                break;
            default:
                std::cout << "La opcion seleccionada no esta disponible.\n";
                break;
        }
    }
    while ( opcion != -1); // El menu funciona.
    return 0;
}
