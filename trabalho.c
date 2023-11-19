#include <stdio.h>

//1 responda um pequeno questionario sobre linguagem de programaçâo !!\\




  struct cadastro{
    char nome[20];
    char endereco[100];
    int telefone;
};

int main (){

    int i, menu, prato, bebida, valor = 0, valorbebida = 0;
    struct cadastro c1[10];

    printf("nome:");
    scanf("%[^\n]s", c1[i].nome);
    printf("endereco:");
    scanf("%[^\n]s", c1[i].endereco);
    fflush(stdin);
    printf("telefone:");
    scanf("%d", &c1[i].telefone);

    printf("****MENU****\n");

    printf("1 - pratos feitos\n 2 - bebidas\n 3 - finalizar\n");
    scanf("%d", &menu);

    while(menu != 3){
        if(menu == 1){
            printf("1 - panqueca: 15R$\n 2 - frango a parmediana: R$14\n 3 - bife bovino: R$18\n 0 - finalizar:!!\n");
            scanf("%d", &prato);
            if(prato == 1){
                valor = valor + 15;
            }
            else if(prato == 2){
                valor = valor + 14;
            }
            else if(prato == 3){
                valor = valor + 18;
            }
            else if(prato == 0){
                printf("*****MENU*****\n");
                printf("1 - prato feito\n 2 - bebidas\n 3 - finalizar\n");
                scanf("%d", &menu);
            }
            else{
                printf("!!A OPCAO NAO EXISTE!!\n");
            }
        }
        else if(menu == 2){
            printf("1 - agua: 4R$\n 2 - refrigerante: 5R$\n 3 - suco de laranja: 7R$\n 0 - finalizar!!\n");
            scanf("%d", &bebida);
            if(bebida == 1){
                valor = valor + 4;
            }
            else if(bebida == 2){
                valor = valor + 5;
            }
            else if(bebida == 3){
                valor = valor + 7;
            }
            else if(bebida == 0){
                printf("*****MENU*****\n");
                printf("1 - prato feito\n 2 - bebidas\n 3 - finalizar\n");
                scanf("%d", &menu);
            }
            else{
                printf("!!A OPCAO NAO EXISTE!!\n");
            }

            }
        }
    }
    printf("%s %s %d", c1[1].nome, c1[1].endereco, c1[1].telefone);

return 0;
}

