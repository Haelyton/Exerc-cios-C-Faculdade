/*
11)Elabore um algoritmo que lê um número que representa uma senha, verifica
se a senha está correta ou não, comparando-a com a senha 34567, e informa
"Acesso autorizado" ou "Acesso negado", conforme o caso.*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    const int senhaOriginal= 34567;
    int senhaDigitada;
    cout<<"Digite sua Senha: ";
    cin>>senhaDigitada;
    system("clear || cls");
    if (senhaDigitada == senhaOriginal)
    {
        cout<<"Acesso Autorizado";
    }else{
        cout<<"Acesso Negado"<<endl;
        cout<<"Tente Novamente";
    }
    return 0;
}