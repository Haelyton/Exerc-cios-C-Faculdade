/*
13) Elaborar um algoritmo que lê 2 valores a e b e os escreve com a mensagem:
‘São múltiplos’ ou ‘Não são múltiplos’.*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int a, b;
    cout<<"Digite o valor de a: ";
    cin>>a;
    cout<<"Digite o valor de b: ";
    cin>>b;
    system("clear || cls");
    if (a % b == 0 || b % a == 0)
    {
        cout<<"Sao multiplos";
    }else{
        cout<<"Nao sao multiplos";
    }
    return 0;
}