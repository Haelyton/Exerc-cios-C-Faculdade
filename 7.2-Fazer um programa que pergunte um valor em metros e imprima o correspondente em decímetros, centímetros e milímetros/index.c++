
/*3 – Fazer um programa que pergunte um valor em metros e
 imprima o correspondente em decímetros, centímetros e milímetros.*/

#include <iostream>
using namespace std;

int main(){
    int metros;

    cout<<"Qual o valor em metros?"<<endl;
    cin>>metros;

    if (metros >0){

    int decimetros = (metros * 10);
    cout<<metros<<" metros em decimetros e: "<<decimetros<<endl;
    int centimetros = (decimetros * 10);
    cout<<metros<<" metros em centimetros e:"<<centimetros<<endl;
    int milimetros = (centimetros * 10);
    cout<<metros<<" metros em milimetros e: "<<milimetros<<endl;

    }else (metros < 0);{
        cout<<"Isira um valor maior que 0!";
    }

    return 0; 
}