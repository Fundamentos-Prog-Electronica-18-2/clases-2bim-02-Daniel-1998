#include <iostream>

using namespace std;



void metodo1(int v){
    int valor = 10;
    valor = valor + v;
    //cout << "Valor es " << valor << "." << endl;
}

void metodo2(){
    valor = 10;
    //cout << "Valor es " << valor << "." << endl;
}

int main()
{

    metodo1(2);
    metodo2();
    cout << "Valor es " << valor << "." << endl;
    metodo1(3);
    cout << "Valor es " << valor << "." << endl;
    return 0;
}
