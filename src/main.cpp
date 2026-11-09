
#include <iostream>
#include <string>
using namespace std;

// Estructura del ejercicio 3
struct Jugador {
    string nickname;
    int nivel;
    bool esVIP;
};

int main() {

    int opcion;

    do {
        cout << "\n===== ACTIVIDAD 9 =====" << endl;
        cout << "1. El Sensor de Aprobacion" << endl;
        cout << "2. Contador de Vidas" << endl;
        cout << "3. Registro de Jugador" << endl;
        cout << "4. Control de Inventario" << endl;
        cout << "0. Salir" << endl;
        cout << "Elegir una opcion: ";
        cin >> opcion;

        switch (opcion) {

            // EJERCICIO 1
            case 1: {
                const int NOTA_MINIMA = 6;
                float nota1, nota2, promedio;

                cout << "\n--- SENSOR DE APROBACION ---" << endl;

                cout << "Ingrese la nota del primer cuatrimestre: ";
                cin >> nota1;

                cout << "Ingrese la nota del segundo cuatrimestre: ";
                cin >> nota2;

                promedio = (nota1 + nota2) / 2;

                cout << "Promedio: " << promedio << endl;

                if (promedio >= NOTA_MINIMA) {
                    cout << "APROBADO" << endl;
                } else {
                    cout << "A INTENSIFICACION" << endl;
                }

                break;
            }

            // EJERCICIO 2
            case 2: {
                int vidas = 3;

                cout << "\n--- CONTADOR DE VIDAS ---" << endl;

                while (vidas > 0) {
                    cout << "Jugador activo. Vidas restantes: "
                         << vidas << endl;

                    vidas = vidas - 1;
                }

                if (vidas == 0) {
                    cout << "GAME OVER" << endl;
                }

                break;
            }

            // EJERCICIO 3
            case 3: {
                Jugador jugador;

                cout << "\n--- REGISTRO DE JUGADOR ---" << endl;

                cout << "Ingrese su nickname: ";
                cin >> jugador.nickname;

                cout << "Ingrese su nivel: ";
                cin >> jugador.nivel;

                cout << "Es VIP? (1 = Verdadero, 0 = Falso): ";
                cin >> jugador.esVIP;

                if (jugador.esVIP == true) {
                    cout << "Bienvenido al Servidor VIP, "
                         << jugador.nickname << endl;
                } else {
                    cout << "Bienvenido al Servidor Estandar, "
                         << jugador.nickname << endl;
                }

                break;
            }

            // EJERCICIO 4
            case 4: {
                int stock[5] = {12, 0, 5, 30, 0};
                int i = 0;

                cout << "\n--- CONTROL DE INVENTARIO ---" << endl;

                while (i < 5) {

                    if (stock[i] == 0) {
                        cout << "ALERTA: Sin stock en la posicion "
                             << i << endl;
                    }

                    i = i + 1;
                }

                cout << "Revision de inventario finalizada." << endl;

                break;
            }

            case 0:
                cout << "\nPrograma finalizado." << endl;
                break;

            default:
                cout << "\nOpcion incorrecta. Intente nuevamente." << endl;
        }

    } while (opcion != 0);

    return 0;
}
