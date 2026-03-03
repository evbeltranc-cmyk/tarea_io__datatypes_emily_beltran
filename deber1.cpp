#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre;
    int edad;
    double estatura;
    char inicial;
    bool leGustaProgramar;

    cout << "Nombre: ";
    getline(cin, nombre);

    cout << "Edad: ";
    cin >> edad;

    cout << "Estatura: ";
    cin >> estatura;

    cout << "Inicial de tu apellido: ";
    cin >> inicial;

    cout << "Te gusta programar? (1 = si, 0 = no): ";
    cin >> leGustaProgramar;

    cout << "\n--- RESUMEN ---\n";
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Estatura: " << estatura << endl;
    cout << "Inicial: " << inicial << endl;
    cout << "Le gusta programar: " << (leGustaProgramar ? "Si" : "No") << endl;

    return 0;
}