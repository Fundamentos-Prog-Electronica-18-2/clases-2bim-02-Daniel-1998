#include <iostream>

using namespace std;
double saldo=100;
double ingresoValor;

void sumar_saldo(double s){
    saldo = saldo + s;
}
void restar_saldo(double s){
    if(saldo >= s){
        saldo = saldo - s;
    }else{
            cout << "Tu saldo insuficiente" << endl;

    }

}
string obtenerTipoCuenta(){
    string frase = "";

    if(saldo <= 100){
        frase = "le permite ser un cliente tipo D";
    }else{
        if((saldo >= 101) && (saldo <= 1000)){
            frase = "le permite ser un cliente tipo C";

        }else{
            if((saldo >= 10001) && (saldo <= 10000)){
                frase = "le permite ser un cliente tipo B";

            }else{
                frase = "le permite ser un cliente tipo A";
            }
        }
}
return frase;

}

int obtenerEdad (int a){
    int operacion = 2018 - a;
    return operacion;

}


int main()
{
    int opcion = 0;
    double ingresoValor = 0;
    int anioNacimiento = 0;

    cout << "Ingrese su año de nacimiento: " <<endl;
    cin >> anioNacimiento;

    cout << "Ingrese una opcion 1. Sumar 2.Restar" << endl;
    cin >> opcion;

    if(opcion == 1){
        cout << "Ingrese el valor a  sumar" << endl;
        cin >> ingresoValor;
        sumar_saldo(ingresoValor);
        cout << "El saldo es: " << saldo <<endl;
    }else{
        if(opcion == 2){
                cout << "Ingrese el valor a restar" << endl;
                cin >> ingresoValor;
                restar_saldo(ingresoValor);
                cout << "El saldo es: " << saldo <<endl;

        }else{
            cout << "Usted no ah ingresado una opcion valida, su saldo no se modifica: " << saldo << endl;
        }

    }
    cout << "Hola tu saldo " << saldo<< obtenerTipoCuenta() << endl;
    int edad = obtenerEdad(anioNacimiento);
    cout << "Su edad es: " << edad << endl;
    return 0;
}
