// DESAFIO Aula 06 Constantes

/* Serviço de Limpeza de Carpetes Frank
Opções:
    R$100,00 o quarto pequeno
    R$150,00 o quarto grande

Taxa de impostos sobre a venda é de 6%
Os orçamentos são válidos por 30 dias.

Solicite ao usuário o numero de quartos de cada tamanho que ele gostaria de limpar, e forneça o orçamento como:

Orçamento para serviço de limpeza de carpetes:
Número de quartos pequenos: 2
Número de quartos grandes: 1
Preço por quarto pequeno: R$200,00
Preço por quarto grande: R$150,00
Custo: R$350,00
Imposto: R$21,00

================================================
Orçamento Total: R$371,00
Orçamento válido por 30 dias
*/

#include <iostream>

using namespace std;
int main(){
    const double valor_quarto_pequeno = 100;
    const double valor_quarto_grande = 150;
    const double imposto = 0.06;
    const string orcamento_valido = "Os orcamentos sao validos por 30 dias.";
    double calculo_quarto_pequeno, calculo_quarto_grande, calculo_total_quartos, calculo_imposto,
    total;



    cout<<"Orcamento para servico de limpeza de carpetes: "<<endl;
    int quarto_pequeno;
    cout<<"Numero de quartos pequenos: ";
    cin>>quarto_pequeno;
    int quarto_grande;
    cout<<"Numero de quartos grandes: ";
    cin>>quarto_grande;

    calculo_quarto_pequeno = (quarto_pequeno * valor_quarto_pequeno);
    calculo_quarto_grande = (quarto_grande * valor_quarto_grande);

    cout<<"Preco por quarto Pequeno: R$"<<calculo_quarto_pequeno<<endl;
    cout<<"Preco por quarto Grande: R$"<<calculo_quarto_grande<<endl;

    calculo_total_quartos = (calculo_quarto_pequeno + calculo_quarto_grande);
    cout<<"Custo Total dos quartos: R$"<<calculo_total_quartos<<endl;

    calculo_imposto = (calculo_total_quartos * imposto);
    cout<<"Imposto: R$"<<calculo_imposto<<endl;


    cout<<"==========================================="<<endl;
    total = (calculo_imposto + calculo_total_quartos);
    cout<<"Orcamento Total: R$"<<total<<endl;
    cout<<orcamento_valido;




    return 0;
}