#include <iostream>
using namespace std;



int main() {

    int arrayLenght;
    while(cin>>arrayLenght) {
        int array[arrayLenght];
        int index=0;
        int contador=0;
        while(index<arrayLenght){
            cin>>array[index];
            index++;
        }
        for(size_t i=0;i<arrayLenght-1;i++){
            for(size_t j=0;j<arrayLenght-1-i;j++){
                if(array[j]>array[j+1]){
                    swap(array[j],array[j+1]);
                    contador++;}
            }}
        cout<<"Minimum exchange operations : "<< contador<<endl;

    }
    return 0;
}
