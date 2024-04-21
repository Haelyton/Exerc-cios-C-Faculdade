/*7) Ler dois valores inteiros e apresentar a adição destes valores, quando o
primeiro valor for maior que o segundo, caso contrário, efetuar a multiplicação
dos valores.*/

#include <iostream>
using namespace std;

int main(){
    int valor1, valor2;
    cout<<"Digite o primeiro valor: ";
    cin>>valor1;
    cout<<"Digite o segundo valor: ";
    cin>>valor2;

    if (valor1 > valor2)
    {
        cout<<"A soma dos valores e: "<<valor1 + valor2;
    }else{
        cout<<"A multiplicacao dos valores e: "<<valor1 * valor2;
    }
    return 0;
}