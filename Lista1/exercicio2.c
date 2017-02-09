#include <stdio.h>
int cod = 1, i, qtd_total;
float preco, valor_total;
float tab_preco[9] = {8.90, 3.50, 1.80, 2.50, 2.05, 2.10, 4.20, 2.25, 1.69, 1.58};

void main(void)
{

	printf("-------------------------------------------------------------\n");
	printf("| CODIGO            | PRODUTO           | PRECO UNITARIO    |\n");
	printf("-------------------------------------------------------------\n");
	printf("-------------------------------------------------------------\n");
	printf("| 001               | Arroz             | R$ %.2f           |\n", tab_preco[0]);
	printf("-------------------------------------------------------------\n");
	printf("| 002               | Feijao            | R$ %.2f           |\n", tab_preco[1]);
	printf("-------------------------------------------------------------\n");
	printf("| 003               | Oleo              | R$ %.2f           |\n", tab_preco[2]);
	printf("-------------------------------------------------------------\n");
	printf("| 004               | Farinha           | R$ %.2f           |\n", tab_preco[3]);
	printf("-------------------------------------------------------------\n");
	printf("| 005               | Acucar            | R$ %.2f           |\n", tab_preco[4]);
	printf("-------------------------------------------------------------\n");
	printf("| 006               | Sal               | R$ %.2f           |\n", tab_preco[5]);
	printf("-------------------------------------------------------------\n");
	printf("| 007               | Cafe              | R$ %.2f           |\n", tab_preco[6]);
	printf("-------------------------------------------------------------\n");
	printf("| 008               | Manteiga          | R$ %.2f           |\n", tab_preco[7]);
	printf("-------------------------------------------------------------\n");
	printf("| 009               | Leite             | R$ %.2f           |\n", tab_preco[8]);
	printf("-------------------------------------------------------------\n");
	printf("| 010               | Biscoito          | R$ %.2f           |\n", tab_preco[9]);
	printf("-------------------------------------------------------------\n");
	printf("\n");

	while(cod){
		printf("Insira o codigo do PRODUTO: ");
		scanf("%d", &cod);
		for(i = 0; i < 10; i++){ /* Percorre o array de produtos */
            if(i + 1 == cod){ /* Verifica qual produto foi selecionado */
                valor_total += tab_preco[i];
                qtd_total++;
            }
		}
		printf("Caso queira parar insira em codigo do PRODUTO o valor 0 (zero).\n\n");
	} /* Fim Looping */
	/* Imprime o resultado final */
	printf("O total de produtos comprados eh: %d\n", qtd_total);
	printf("O total das compras eh: R$ %.2f\n", valor_total);
	getchar();
}
