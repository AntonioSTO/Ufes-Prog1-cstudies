/*
Aluno: Antônio Sant'Ana de Oliveira
Código LE1-Q4 (Programa simula um sistema de atendimento ao cliente de cartão de crédito, recebendo cpf e o número do cartão como entradas)
Programação 1
02/06/2022
*/

#include <stdio.h>

int main(){
long long int cartao, cpf;
int comando;

printf("Insira o numero de seu cartao e o cpf:\n");
scanf("%lld",&cartao);
scanf("%lld",&cpf);

printf("Numero do cartao: %lld\nCPF: %lld\n",cartao,cpf);
printf("Boas vindas!\nEscolha a opcao 0 caso voce queira encerrar o programa voluntariamente;\nEscolha a opcao 1 caso voce queira fazer uma sugestao\nEscolha a opcao 2 caso voce queira fazer uma reclamacao\nEscolha a opcao 3 caso voce queira cancelar\n");

scanf("%d",&comando);

while (comando!=0){
    if (comando==1){
        printf("Insira novamente o numero de seu cartao e o cpf:\n");
        scanf("%lld",&cartao);
        scanf("%lld",&cpf);
        break;
    }
    else if (comando==2){
        printf("Insira novamente o numero de seu cartao e o cpf:\n");
        scanf("%lld",&cartao);
        scanf("%lld",&cpf);
        break;
    }
    else if (comando==3){
        return 0;
    }
    else{
        printf("Opcao invalida.\nEscolha a opcao 0 caso voce queira encerrar o programa voluntariamente;\nEscolha a opcao 1 caso voce queira fazer uma sugestao\nEscolha a opcao 2 caso voce queira fazer uma reclamacao\nEscolha a opcao 3 caso voce queira cancelar\n");
        scanf("%d",&comando);
    }
}


return 0;

}
