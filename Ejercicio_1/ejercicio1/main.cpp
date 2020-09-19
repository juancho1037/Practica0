#include <iostream>

using namespace std;

void figura(int n,int esp);

int main()
{
    int n, esp;
    cout << "Hola, cual es el limite deseado: ";
    cin>>n;
    esp=2*(n-1)-1;

    figura(n, esp);

    return 0;
}


void figura(int n,int esp){

   //Ciclo encargado de las filas
   for (int f=1 ; f<=n ; f++) {
        char letra='A' , letra2='A';

        //Ciclo encargado de las columnas
        for (int c=0 ; c<f ; c++) {
            cout<<letra;
            letra++;
        }
        //Ciclo que se ecarga de imprimir los espacios necesarios
        for (int c=1 ; c<=esp ; ++c) {
            cout<<' ';
        }
        letra2=letra-1;
        //Ciclo para imprimir el reflejo de letras
        for (int c=0;c<f; ++c) {
            if (c==0 && f==n) {
                letra2 --;
            }
            else {
                cout<<letra2;
                letra2--;
            }
        }
    esp=esp-2;
    cout<<endl;
    }

}
