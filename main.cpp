/**
* @file main.cpp
* @desc Ejemplo de uso de vectores y matrices en C++. 
*       El problema trata sobre el pago a empleados de una empresa guardando las horas que trabajan.
* @date 11-oct-2021
* @author Víctor Rivas <vrivas@ujaen.es>
*/

#include <iostream>
using namespace std;

// Máximo número de días por semana que vamos a considerar
const int MAX_DIAS = 7;

// Precio al que pagamos cada hora.
const double PRECIO_HORA = 17.75;

/** 
* v1.0 - Definición del problema
*        Debemos almacenar en un vector las horas que ha trabajado UNA de nuestras empleadas.
*        Pedimos los datos por teclado.
*/
int main() {
    // Declaramos el vector y las variables necesarias.
    double horas[MAX_DIAS];
    int cont_horas = 0;

    // Pedimos los datos al usuario.
    for( int i=0; i<MAX_DIAS; ++i ) {
        cout << "Introduzca cuántas horas trabajó el día " << i << ": ";
        cin >> horas[i];
    }

    // Calculamos cuánto debemos pagarle por las horas que ha trabajado.
    double total_horas=0;
    for( int i=0; i<MAX_DIAS; ++i ) {
        total_horas+=horas[i];
    }
    double importe_a_pagar = total_horas*PRECIO_HORA;

    // Imprimimos el resultado
    cout << "El total a pagar a esta persona es " << importe_a_pagar << " euros." << endl;
    return 0;
}
