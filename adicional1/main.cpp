#include <iostream>
// obtener el cuadrado y el cubo de un numero ingresado por el usuario

using namespace std;


int  obtenerCuadrado(int a){
    int resultado =a*a;
    return resultado;
}
int  obtenerCubo(int b){
   int  resultado = b*b*b;
   return resultado;
}

int main()
{
    double numero = 0;
    int opcion = 0;
    int resultado = 0;

    cout << "Ingrese un numero para operar" << endl;
    cin >> numero;
    cout << "Ingrese una opcion 1.el cuadrado y 2.el cubo de un numero " << endl;
    cin >> opcion;
    if (opcion == 1){
        resultado = obtenerCuadrado(numero);
        cout << "El cuadrado del numero " << numero << "es :" << resultado << endl;
    }else{
        if (opcion == 2){
            resultado = obtenerCubo( numero );
            cout << "El cubo del numero " << numero << "es :" << resultado << endl;
        }else{
            cout << "Opción incorrecta " <<endl;
        }
    }

    return 0;
}
