/*4 – Fazer um programa que lê o preço de um produto e 
inflacione o preço em 10% se ele for menor que 100 reais 
em 20% se for maior ou igual a 100 reais.*/

#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    double preco;
    cout<<"Qual o preco do produto?"<<endl;
    cin>>preco;

    if(preco < 100){
       const double dezPorCento = 0.10;
       double precoNovo = (preco * (1 + dezPorCento));
       cout<<fixed<<setprecision(2);
       cout<<preco<<" + 10% = "<<precoNovo;
    }else if (preco >= 100){
        const double vintePorCento = 0.20;
        double precoNovo = (preco * (1 + vintePorCento));
        cout<<fixed<<setprecision(2);
        cout<<preco<<" + 20% = "<<precoNovo;
    }

    return 0;
}