#include <stdio.h>//Biblioteca de comunica��a com o usu�rio
#include <stdlib.h>//Biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h>//Biblioteca de aloca��es de texto por regi�o
#include <string.h>//Biblioteca respos�vel pelas string

int registro() //Funcao para registrar usuarios
{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];//final da criacao das strings/variaveis
	
	
	printf("Digite o CPF a ser cadastrado: ");
	scanf("%s", cpf);//responsavel por armazenar nas strings %s
	
	strcpy(arquivo, cpf); //Responsavel por copiar os valores das string
	
	FILE *file; // cria o arquivo
	file = fopen(arquivo, "w"); // cria o arquivo
	fprintf(file,"\nCPF: ");
	fprintf(file,cpf); // salvo o valor da variavel
	fclose(file); // fecha o arquivo
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,"\nNome: ");
	fprintf(file,nome);
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a");// "a" de atualizar
	fprintf(file,"\nSobrenome: ");
	fprintf(file,sobrenome);
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s",cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,"\nCargo: ");
	fprintf(file,cargo);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,"\n\n");
	fclose(file);
	
	system("pause");

	}
	

int consulta()
{
setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
char cpf[40];
char conteudo[100];
	
printf("Digite o CPF a ser consultado: ");
scanf("%s",cpf);
system("cls");//responsavel por limpar a tela
  	
FILE *file;
file = fopen(cpf,"r");

printf("\nEssas s�o as informa��es do usu�rio: ");

  	
if(file == NULL)
{
	printf("\nN�o foi possivel abrir o arquivo, n�o localizado!.\n");
}

while(fgets(conteudo, 100, file) != NULL)
{
	printf("%s", conteudo);
}
  	
system ("pause");
}


int deletar()
{
	char cpf[40];
	
	printf("Digite o CPF do usu�rio a ser deletado: ");
	scanf("%s",cpf);
	
	remove(cpf);

	FILE *file;
	file = fopen(cpf,"r");
	

	
	if(file == NULL);
	{
		printf("CPF n�o cadastrado no sistema!.\n");
		system("pause");
	}
	
}

int main()
{
	int opcao=0;//Definindo vari�veis
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	
		system ("cls");

	    setlocale(LC_ALL, "Portuguese");//Definindo a linguagem
    	printf("\t\tCart�rio da EBAC\n\n");//In�cio do menu principal
    	printf("\tEscolha a op��o desejada do menu:\n\n");//Corpo do menu
    	printf("\t\t1 - Registrar nomes\n");//Op��o um
	    printf("\t\t2 - Consultar nomes\n");//Op��o dois
	    printf("\t\t3 - Deletar nomes\n");
	     printf("\t\t4 - Sair do sistema\n\n");

	    printf("Op��o: ");//Fim do menu principal
	
		scanf("%d", &opcao); // armazenando a escolha do usu�rio
	
		system("cls");
		
		switch(opcao)
		{
			case 1:
				registro();
				break;
				
			case 2:
				consulta();
				break;
				
			case 3:
				deletar();
				break;
				
			case 4:
			printf("Obrigado por ultilizar nosso sistema\n");
			return 0;
			break;
			
					
			default:
				printf("Essa op��o n�o est� dispon�vel!\n\n");
				system("pause");
				break;
		}	
	
	
		

	
	}
}


