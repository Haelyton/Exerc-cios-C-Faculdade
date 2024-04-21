/*
12) Elaborar um algoritmo que lê um valor que se refere a altura de uma pessoa
e mostra uma mensagem conforme a faixa de altura:
Altura Informação mostrada

menos que 1,50 “abaixo de um metro e meio”

de 1,50 a 1,80 “entre um metro e meio e um metro e oitenta

centímetros”

mais que 1,80  “acima de um metro e oitenta centímetros”*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    float altura;
    cout<<"Digite a Altura da pessoa: ";
    cin>>altura;
    system("clear || cls");
    if (altura < 1.50)
    {
        cout<<"Abaixo de um metro e meio";
    }else if (altura >= 1.50 && altura <= 1.80)
    {
        cout<<"Entre um metro e meio e um metro e oitenta centimetros";
    }else {
        cout<<"Acima de um metro e oitenta centimetros";
    }
    return 0;
    
}