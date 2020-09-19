//Programa que calcula la suma de los digitos de un numero entero elevados a si mismos

#include <iostream>

using namespace std;

void Resultado(int n);

int main()

{
    int n;

    cout << " Escribe el numero deseado: ";
    cin >> n;

    Resultado(n);
    return 0;
}

void Resultado(int n){

    int residuo, suma = 0;
    float s=1;

    while (s!=0)
        {
        s = n/10;
        residuo = n%10;
        n = s;
        suma = suma + (residuo*residuo);
        }
    cout<<endl;
    cout << " El resultado es: " << suma << endl;
    cout<<endl;
}
