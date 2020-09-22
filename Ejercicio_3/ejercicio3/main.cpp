//Programa que calcula la suma de los digitos de un numero entero elevados a si mismos

#include <iostream>

using namespace std;

int potencia(int base, int exp);

int main()

{
    int n;
    cout << " Escribe el numero deseado: ";
    cin >> n;

    int residuo, suma = 0, pot=0;
    float s=1;

    while (s!=0)
        {
        s = n/10;
        residuo = n%10;
        int valor=residuo;

        pot=potencia(residuo,valor);

        n = s;
        suma = suma + pot;
        }
    cout<<endl;
    cout << " El resultado es: " << suma << endl;
    cout<<endl;
    return 0;
}

int potencia(int base, int exp){
    int x=1, resultado=0;
    if (exp == 1) {
        resultado +=1;
    }
    else {
        while (x<exp){
            if (resultado<base){
                resultado=base*base;
            }
            else{
                resultado=resultado*base;
            }
            x++;
        }
    }
    return resultado;
}
