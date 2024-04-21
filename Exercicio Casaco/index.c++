/*1 - Fazer um programa para saber se precisa levar casaco se 
for sair de casa, solicitando duas informações ao usuário Temperatura 
e Velocidade do Vento.

Se o vento estiver mais de 40 km/h, preciso de um caso;
Se a temperatura estiver abaixo de 15° C, preciso de um casaco;

Criar uma variável booleana vestir_casaco para validar as expressões e informar ao usuário.*/

#include <iostream>
using namespace std;

int main(){
    int temperatura, vento;

    cout<<"Qual a velocidade do vento?"<<endl;
    cin>>vento;
    cout<<"Qual a Temperatura"<<endl;
    cin>>temperatura;

    bool vestir_casaco = false;

    if (vento >= 40 || (temperatura <= 15))
    {
        vestir_casaco = true;
    }if (vestir_casaco == true)
    {
        cout<<"Nao saia de casa sem um casaco";
    }else {
        cout<<"Pode ir tranquilo sem casaco o tempo esta otimo";
    }
    
   
    
    return 0;
}
