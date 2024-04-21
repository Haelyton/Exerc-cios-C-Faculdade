/*8) Fazer um programa em "C" que solicite 2 números e informe:


a) A soma dos números;
b) O produto do primeiro número pelo quadrado do segundo;
c) O quadrado do primeiro número;
d) A raiz quadrada da soma dos quadrados;
e) O módulo do primeiro número.*/


#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;
int calculos;
int main(){
    int num1, num2;
    cout<<"Digite o primeiro numero: "<<endl;
    cin>>num1;
    cout<<"Digite o segundo numero: "<<endl;
    cin>>num2;
    system ("clear || cls");

    
    do {cout<<"1-A soma dos numeros: "<<endl;
        cout<<"2-O produto do primeiro numero pelo quadrado do segundo: "<<endl;
        cout<<"3-O quadrado do primeiro numero: "<<endl;
        cout<<"4-A raiz quadrada da soma dos quadrados: "<<endl;
        cout<<"5-O modulo do primeiro numero: "<<endl;
        cout<<"Escolha sua opcao: ";
        cin>>calculos;
        system ("clear || cls");
    
        switch (calculos)
        {
        case 1:
            cout<<"A soma dos numeros e: "<<num1 + num2<<endl;
            cout<<"\n";
            cout<<"<><><><><><><><><><><><><><><><><><><><><><><><"<<endl;
            cout<<"\n";
            break;
        case 2:
            cout<<fixed<<setprecision(2);
            cout<<"O produto do primeiro numero pelo quadrado do segundo e: "<<(num1 * pow(num2, 2))<<endl;
            cout<<"\n";
            cout<<"<><><><><><><><><><><><><><><><><><><><><><><><"<<endl;
            cout<<"\n";
            break;
        case 3:
            cout<<"O quadrado do primeiro numero: "<<pow(num1, 2)<<endl;
            cout<<"\n";
            cout<<"<><><><><><><><><><><><><><><><><><><><><><><><"<<endl;
            cout<<"\n";
            break;
        case 4:
            cout<<fixed<<setprecision(2);
            cout<<"A raiz quadrada da soma dos quadrados: "<<sqrt((pow(num1, 2) + pow(num2, 2)))<<endl;
            cout<<"\n";
            cout<<"<><><><><><><><><><><><><><><><><><><><><><><><"<<endl;
            cout<<"\n";
            break;
        case 5:
            cout<<"O modulo do primeiro numero: "<<fabs(num1)<<endl;
            cout<<"\n";
            cout<<"<><><><><><><><><><><><><><><><><><><><><><><><"<<endl;
            cout<<"\n";
        default:
            break;
        }
    }while (calculos != '0');
    return 0;
}

