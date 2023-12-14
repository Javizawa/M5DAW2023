// ParametrosReferencia.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;
int number1 = 0;
int number2 = 4;

//enemigo1
string enemy1 = "Ramon";
int enemyHP1 = 1000;

//enemigo2
string enemy2 = "Javi";
int enemyHP2 = 100;

void showParam(int& p1, int p2) {
    p1 = 10;
    p2 = 50;
    number1 = 0;
    number2 = 4;
    cout << "El valor de P1 es:" << p1 << "\n";
    cout << "El valor de P2 es:" << p2 << "\n";
}


void enemyToAttack(string enemyName, int& enemyHP, int damage) {
    enemyHP = enemyHP - damage;
    cout << "Has atacado al enemigo " << enemyName << "\n";
}


int main()
{
    cout << "La vida de " << enemy1 << " es de " << enemyHP1 << "\n";
    cout << "La vida de " << enemy2 << " es de " << enemyHP2 << "\n";
    enemyToAttack(enemy1, enemyHP1, 100);
    enemyToAttack(enemy2, enemyHP2, 50);
    cout << "La vida de " << enemy1 << " es de " << enemyHP1 << "\n";
    cout << "La vida de " << enemy2 << " es de " << enemyHP2 << "\n";

  //  showParam(number1, number2);
  //  cout << "El valor de number1 es:" << number1 << "\n";
  //  cout << "El valor de number2 es:" << number2 << "\n";

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
