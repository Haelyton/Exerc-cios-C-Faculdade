/*14)Faça um algoritmo que leia as 3 notas de um aluno e calcule a sua média
anual ponderada, com o peso: 2, 3 e 5, respectivamente. Se a nota obtida for
entre 6 a 10 está aprovado; se é entre 4 e 5.9 em recuperação, se é menor
que 4 reprovado. Se o aluno está em recuperação ler a nota de recuperação
e calcular a média final (que é a média entre a média anual e a nota de
recuperação). Se a média final é menor que 5 o aluno está reprovado após
recuperação, se é igual ou maior que 5 está aprovado após recuperação.*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    float nota1, nota2, nota3;
    float media, mediaFinal;
    float peso1=2, peso2=3, peso3=5;
    float notaRecuperacao;
    cout<<"Digite a Primeira nota do aluno: ";
    cin>>nota1;
    cout<<"Digite a Segunda nota do aluno: ";
    cin>>nota2;
    cout<<"Digite a Terceira nota do aluno: ";
    cin>>nota3;
    system("clear || cls");
    media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

    if (media >= 6)
    {
        cout<<"Aprovado";
    }else if (media >= 4 && media < 6)
    {
        cout<<"Este aluno esta de recuperacao!"<<endl;
        cout<<"Digite a nota da recuperacao: ";
        cin>>notaRecuperacao;

        mediaFinal = (media + notaRecuperacao) / 2;

        if (mediaFinal >= 5)
        {
            cout<<"Aprovado apos Recuperacao";
        }else{
            cout<<"Reprovado apos recuperacao";
        }
    }else{
            cout<<"Reprovado";
        }
        return 0;
    }
    
    /*EXEMPLO:
    Utilize valores com pontuação para realização dos calculos
    
    nota1 = 5.80
    nota2 = 8.90
    nota3 = 5.75
    */


