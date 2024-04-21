/**2 - Fazer um programa para descobrir a idade de uma pessoa, 
considerando apenas ano de nascimento e ano atual.*/


#include <iostream>
using namespace std;

int main (){
    int anoNascimento;
    cout<<"Digite seu ano de nascimento: ";
    cin>>anoNascimento;

    int mesNascimento;
    cout<<"Digite seu mes de nascimento: ";
    cin>>mesNascimento;

    int diaNascimento;
    cout<<"Digite seu dia de nascimento: ";
    cin>>diaNascimento;

    int anoAtual;
    cout<<"Ano atual?"<<endl;
    cin>>anoAtual;

    int mesAtual;
    cout<<"Digite o mes atual? "<<endl;
    cin>>mesAtual;

    int diaAtual;
    cout<<"Digite o dia atual? "<<endl;
    cin>>diaAtual;

    
    int calculoAno = (anoAtual - anoNascimento);

    if (mesAtual < mesNascimento || (mesAtual == mesNascimento && diaAtual < diaNascimento))
    {
         calculoAno--;

    }
        cout<<"Voce tem "<<calculoAno<<" anos"<<endl;
        
    return 0;
}

