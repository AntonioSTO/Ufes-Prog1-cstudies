/*
Aluno: Antônio Sant'Ana de Oliveira
Código LE2-Q4 (Modifique o exercício 4 da lista anterior para usar um struct.)
Programação 1
13/06/2022
*/

#include <stdio.h>
#include <string.h>

typedef struct {    //Struct com as variáveis que serão utilizadas

long long int cpf1,cartao1;
long long int cpf2,cartao2;
int comando;

} tNum_Banco;


int main(){

tNum_Banco dados;  //Definição da nomenclatura para orientação das variáveis

printf("Insira o numero de seu cartao e o cpf:\n");
scanf("%lld",&dados.cartao1);
scanf("%lld",&dados.cpf1);

printf("Numero do cartao: %lld\nCPF: %lld\n",dados.cartao1,dados.cpf1);
printf("Boas vindas!\nEscolha a opcao 0 caso voce queira encerrar o programa voluntariamente;\nEscolha a opcao 1 caso voce queira fazer uma sugestao\nEscolha a opcao 2 caso voce queira fazer uma reclamacao\nEscolha a opcao 3 caso voce queira cancelar\n");

scanf("%d",&dados.comando);

while (dados.comando!=0){
    if (dados.comando==1){
        printf("Insira novamente o numero de seu cartao e o cpf:\n");
        scanf("%lld",&dados.cartao2);
        scanf("%lld",&dados.cpf2);
        if (dados.cartao2==dados.cartao1 && dados.cpf2==dados.cpf1){printf("Os valores informados estao corretos!\n");
        printf("Numero do cartao: %lld\nCPF: %lld\n",dados.cartao2,dados.cpf2);
        printf("Boas vindas!\nEscolha a opcao 0 caso voce queira encerrar o programa voluntariamente;\nEscolha a opcao 1 caso voce queira fazer uma sugestao\nEscolha a opcao 2 caso voce queira fazer uma reclamacao\nEscolha a opcao 3 caso voce queira cancelar\n");
        }
        else {printf("Os valores informados estao incorretos!\n");
        printf("Numero do cartao: %lld\nCPF: %lld\n",dados.cartao2,dados.cpf2);
        printf("Boas vindas!\nEscolha a opcao 0 caso voce queira encerrar o programa voluntariamente;\nEscolha a opcao 1 caso voce queira fazer uma sugestao\nEscolha a opcao 2 caso voce queira fazer uma reclamacao\nEscolha a opcao 3 caso voce queira cancelar\n");
        }
        scanf("%d",&dados.comando);
    }
    else if (dados.comando==2){
        printf("Insira novamente o numero de seu cartao e o cpf:\n");
        scanf("%lld",&dados.cartao2);
        scanf("%lld",&dados.cpf2);
        if (dados.cartao2==dados.cartao1 && dados.cpf2==dados.cpf1){printf("Os valores informados estao corretos!\n");
        printf("Numero do cartao: %lld\nCPF: %lld\n",dados.cartao2,dados.cpf2);
        printf("Boas vindas!\nEscolha a opcao 0 caso voce queira encerrar o programa voluntariamente;\nEscolha a opcao 1 caso voce queira fazer uma sugestao\nEscolha a opcao 2 caso voce queira fazer uma reclamacao\nEscolha a opcao 3 caso voce queira cancelar\n");
        }
        else {printf("Os valores informados estao incorretos!\n");
        printf("Numero do cartao: %lld\nCPF: %lld\n",dados.cartao2,dados.cpf2);
        printf("Boas vindas!\nEscolha a opcao 0 caso voce queira encerrar o programa voluntariamente;\nEscolha a opcao 1 caso voce queira fazer uma sugestao\nEscolha a opcao 2 caso voce queira fazer uma reclamacao\nEscolha a opcao 3 caso voce queira cancelar\n");
        }
        scanf("%d",&dados.comando);
    }
    else if (dados.comando==3){
        return 0;
    }
    else{
        printf("Opcao invalida.\nEscolha a opcao 0 caso voce queira encerrar o programa voluntariamente;\nEscolha a opcao 1 caso voce queira fazer uma sugestao\nEscolha a opcao 2 caso voce queira fazer uma reclamacao\nEscolha a opcao 3 caso voce queira cancelar\n");
        scanf("%d",&dados.comando);
    }
}


return 0;

}



