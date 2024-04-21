/*10)Elaborar um algoritmo que leia uma letra que pode ser ‘F’ ou ‘J’ e mostra a
mensagem “pessoa física”, “pessoa jurídica” ou "tipo de pessoa inválido",
conforme o caso.*/

#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
    char tipoDePessoa;
    cout<<"Digite 'f' para pesssoa Fisica e 'j' para pessoa Juridica: "<<endl;
    cin>>tipoDePessoa;
    system("clear || cls");
    if (tipoDePessoa == 'f' || tipoDePessoa == 'F')
    {
        cout<<"Pessoa Fisica";
    }else if (tipoDePessoa == 'j' || tipoDePessoa == 'J')
    {
        cout<<"Pessoa Juridica";
    }else{
        cout<<"Tipo de pessoa invalido";
    }
    return 0;
    
}