
//1 - Fazer um programa para Converter Reais para Dólares e Euros.

#include <iostream>
#include <iomanip>

using namespace std;
int main (){
    const double dolar = 5.02; //dados pegados da internet no dia 28/03/24 as 20:09HRS
    const double euro = 5.41;   //dados pegados da internet no dia 28/03/24 as 20:09HRS
    double reais, calculoDolar, calculoEuro;

    cout<<"Digite o valor para a conversao: ";
    cin>>reais;

    cout<<fixed<<setprecision(2);
    calculoDolar = (reais / dolar);
    calculoEuro = (reais / euro);

    cout<<"Seu valor em Reais para Dolar foi de: $"<<calculoDolar<<endl;
    cout<<"Seu valor em Reais para Euro foi de: €"<<calculoEuro<<endl; 

    return 0;

}