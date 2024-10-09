#include <iostream>
using namespace std;

int Input(){
    int a;
    do{
        cout<<"Inserire il numero Postitivo: ";
        cin>>a;
        if(a <= 0){
            cout<<"Inserire un numero diverso o maggiore di 0"<<endl;
        }
    }while(a <= 0);
    return a;
}

int Somma(int n1,int n2){
    int som;
    som = n1 + n2;
    return som;
}

int Sottrazione(int n1,int n2){
    int sott;
    sott = n1 - n2;
    return sott;
}

int Moltiplicazione(int n1,int n2){
    int molt;
    molt = n1 * n2;
    return molt;
}

int Divisione(int n1,int n2){
    int div;
    div = n1 / n2;
    return div;
}

int Potenza(int b,int e){
    int pot = b;
    for(int i = 0; i < e-1; i++){
        pot = pot * b;
    }
    return pot;
}

int main() {
   int a,b,som,dif,molt,div,pot;
   a = Input();
   b = Input();
   som = Somma(a,b);
   dif = Sottrazione(a,b);
   molt = Moltiplicazione(a,b);
   div = Divisione(a,b);
   pot = Potenza(a,b);
   cout<<"La somma dei due numeri equivale a: "<<som<<"; la differenza a : "<<dif<<"; la moliplicazione a: "<<molt<<"; la divisione a: "<<div<<"; la potenza a: "<<pot<<endl;
   return 0;
}

