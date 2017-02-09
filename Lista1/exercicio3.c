#include <stdio.h>
#include <stdlib.h>
int t_valores;
char resp = 'S';
float num, soma;

/*Funcao para validar o comando de repeticao do programa*/
char resposta(char *r){
    if(*r > 122 || *r < 65 || (*r > 90 && *r < 97)){
        printf("Valor incorreto. Tchau!\n");
        exit(0);
    } else
    if(*r < 123 && *r > 96){
        *r -= 32;
    }
    return *r;
}

void main(void){
    while(resp == 'S'){
        printf("Deseja continuar? [S/N] ");
        resp = getch();
        resposta(&resp);
        printf("%c\n", resp);

        printf("Insira um numero real: ");
        scanf("%f", &num);
        t_valores++;
        soma += num;
    }
 }
