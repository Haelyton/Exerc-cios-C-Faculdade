/*9) Fazer um programa em "C" que lê o preço de um produto e inflaciona esse
preço em 10% se ele for menor que 100 e em 20% se ele for maior ou igual a
100.*/
#include <iostream>
using namespace std;

int main(){
    string produto;
    double preco;
    float dezPorCento = 0.10;
    float vintePorCento = 0.20;
    cout<<"Qual seria o produto: "<<endl;
    cin>>produto;
    cout<<"Qual o preco do produto: "<<endl;
    cin>>preco;

    if (preco <= 0)
    {
        cout<<"Nao e possivel calcular valores negativos!";
    }else if (preco < 100)
    {
        cout<<"O preco da "<<produto<<" e de R$"<<(preco * (1 + dezPorCento));
    }else {
        cout<<"O preco da "<<produto<<" e de R$"<<(preco * (1 + vintePorCento));
    }
    return 0;
    

}