/*1 - Criar um programa onde o usuário informa um numero 
inteiro entre 1 e 12 e imprime o mês correspondente.*/
/*2 - Criar um programa que possui um menu com switch case onde 
o usuário escolhe qual operação matemática ele gostaria de fazer entre
 soma, subtração, multiplicação e divisão o usuário deverá informar dois 
 números para realizar a operação.*/


#include <iostream>
using namespace std;

int main(){
    int num1, num2, operacao;
    
    cout<<"Informe o primeiro numero: "<<endl;
    cin>>num1;
    cout<<"Informe o segundo numero"<<endl;
    cin>>num2;

    cout<<"Operacoes: "<<endl;
    cout<<"1-Soma: "<<endl;
    cout<<"2-subtracao: "<<endl;
    cout<<"3-multiplicacao: "<<endl;
    cout<<"4-divisao: "<<endl;
    cin>>operacao;
if (num1 > 0 && num2 <= 12)
{
    switch (operacao)
    {
    case 1:
        cout<<"O resultado da soma dos dois numeros e: "<<num1 + num2<<endl;
        break;
    case 2:
        cout<<"O resultado da subtracao dos dois numeros e: "<<num1 - num2<<endl;
        break;
    case 3:
        cout<<"O resultado da multiplicacao dos dois numeros e: "<<num1 * num2<<endl;
        break;
    case 4:
        cout<<"O resultado da divisao dos dois numeros e: "<<num1 / num2<<endl;
        break;
    default:
        cout<<"Operacao invalida";
    }
}else {
    cout<<"Os numeros escolhidos nao pode ser calculados"<<endl;
}
    return 0;
}

    