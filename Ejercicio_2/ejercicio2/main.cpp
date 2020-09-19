//Programa para imprimir una figura de letras

#include <iostream>
using namespace std;

void figura(int n, int esp);

int main(){

    int n, esp;

    cout<<"Ingrese el limite: ";
    cin>>n;
    esp = 2*(n-1)-1;

    figura(n,esp);

    return(0);
}

void figura(int n, int esp){

    char letra='A', letra2='A';

    for (int i=1; i<=n; i++){
        letra='A';
        letra2='A';

        //Imprime las Letras
        for (int j=0; j<i;j++){
            cout<<letra;
            letra++;
        }

        //Espacios
        for (int j=1; j<=esp; ++j){
            cout<<' ';
        }

        //Reflejo
        letra2=letra-1;
        for (int j=0; j<i; ++j){
            if (j==0 && i==n){
                letra2--;
            }
            else{
                cout<<letra2;
                letra2--;
            }
        }
        esp =esp-2;
        cout<<endl;
    }

    //Otra mitad de la figura

    for (int i=0; i<n; i++){
        letra = 'A';
        int esp = 2*(i)+1;

        //Imprime las letras
        for (int j=n-i-1; j>0; --j){
            cout << letra;
            letra ++;
        }

        //Espacios
        for (int j=1; j<=esp; j++){
            cout << ' ';
        }

        //Reflejo
        letra2 = letra-1;
        for (int j=n-i-1; j>0; --j){
            cout << letra2;
            letra2 --;
        }
        cout <<endl;
    }
    cout<<endl;

}
