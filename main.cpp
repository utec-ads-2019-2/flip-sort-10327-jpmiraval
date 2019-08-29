#include <iostream>

using namespace std;

void Flip(int &num1, int &num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main() {

    int largoLista,  contador=0;
while(cin>>largoLista){
    int lista[largoLista];

    for(int i = 0; i<largoLista; i++){
        cin>>lista[i];
    }

    for(int i = 0; i<largoLista; i++){
        for(int k = i; k <largoLista;k++){
            if(lista[i] > lista[k]){
                Flip( lista[k] , lista[i]);
                contador++;
            }
        }
    }

    cout << "Minimun exchange operations :" << contador;
}





    return 0;
}
