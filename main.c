#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>

	int option, option2,contador= 0;
	char name_cont;
	char name_cont2;
	char content [500];
	char content2 [500];
	int c;

FILE * pont_arq;

struct contate
{
char name_cont3[500];
int  num_cont;
char email_cont[500];
};

void menu_principal()
{
printf ("------------Menu-----------\n");
printf ("|                          |\n");
printf ("| 1 - Pesquisar um contato |\n");
printf ("| 2 - Criar um contato     |\n");
printf ("|                          |\n");
printf ("----------------------------\n");
printf ("\n\n");
printf ("Por favor, selecione uma op��o: ");
scanf("%d",&option);

switch(option)
{

	case 1:
		system("cls");
		puts("\nVoc� escolheu a op��o: Pesquisar um contato!");
		puts("------------------------------------------");
	break;

	case 2:
		system("cls");
		puts("\nVoc� escolheu a op��o: Criar um contato!");
		puts("------------------------------------------");
	break;
	default:
		printf("Op��o inv�lida!\n");

}
}
void menu_second()
{
printf ("-------------Menu-----------\n");
printf ("|                          |\n");
printf ("| 1 - Fechar o Programa    |\n");
printf ("| 2 - Voltar ao menu       |\n");
printf ("|                          |\n");
printf ("----------------------------\n");
printf ("\n\n");
printf ("Por favor, selecione uma op��o: ");
scanf("%d",&option2);
switch(option2)
{

	case 1:
		puts("\nVoc� escolheu a op��o: Fechar o Programa!");
		puts("-------------------------------------------");
	break;

	case 2:
		puts("\nVoc� escolheu a op��o: Voltar ao menu!");
		puts("----------------------------------------");
	break;
	default:
		printf("Op��o inv�lida!\n");
}
}


int main(void) {
	struct contate contato;

	setlocale(LC_ALL, "");

	menu_principal();

	switch(option){

	case 1:
    /*	puts("Qual o numero do Contato que quer pesquisar?\n");
        scanf("%s",name_cont);
        */
       /* printf("O contato foi encontrado com sucesso!");
        printf("O nome do contato �: %s");				// precisamos de um jeito de atribuir numero ao nome para a pesquisa dos contatos (pensar)
        printf("O telefone do contato � : %d");			// ler mais de um linha e o posi��o especifica
        printf("O email do contato � : %s");
        */
		pont_arq = fopen("contatos.txt" , "r");

		if (pont_arq) {
    while ((c = getc(pont_arq)) != EOF)
        putchar(c);

		fclose(pont_arq);
		}


    if(pont_arq == NULL){
	printf("\nO contato n�o exite!\n");
        }else{
        	fgets(content2,500,pont_arq);
        	printf("\nO dados do contato � : %s\n",content2);
		}
        // como pegar dados especificos de dentro do arquivo

    	break;

	case 2:


		fgets(contato.name_cont3,500,stdin);
		puts("Digite os dados do contato para cria-lo\n");
		puts("-------------------------------------------");
		contador++;
		printf("Contato %d\n",contador);
		puts("Digite o nome:\n");
		scanf("%[^\n]s",contato.name_cont3);

	   	puts("Digite o email:\n");
		scanf("%s",contato.email_cont);

	   	puts("Digite o telefone:\n");
		scanf("%d",&contato.num_cont);


		pont_arq = fopen("contatos.txt" , "a");
		fprintf(pont_arq,"\nContato %d \n%s \n%s \n%d",contador,contato.name_cont3,contato.email_cont,contato.num_cont);
   		system("cls");
   		puts("Conte�do gravado com sucesso!");
   		fclose(pont_arq);

	break;

            default:
			printf("Op��o inv�lida!\n");}
menu_second();
system("cls");

switch(option2)
{

	case 1:
		puts("Voc� escolheu fechar o programa!\n");
exit (1);
break;

	case 2:
		puts("Voc� escolheu voltar ao menu!\n");
		main();
break;

	default:
		printf("Op��o inv�lida!\n");
}

	return 0;
}

