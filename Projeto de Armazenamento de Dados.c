#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct Pessoa{
	char nome[50];
	char cpf[12];
	char dataNascimento[11];
	
};


int main() {
	
	setlocale(LC_ALL, "");
		
		
		int opcao, menu;
		struct Pessoa pessoas[100];
		int numPessoas = 0;
		int executar = 1;
		
	while(executar){
	system("cls");
	printf("==========================================================\n\n");
	printf("Seja Bem Vindo! Por favor, selecione uma das opções abaixo\n");
	printf("1 - Vender Ingresso\n");
	printf("2 - Listar Ingressos Vendidos\n");
	printf("3 - Validar Ingressos\n");
	printf("4 - Sair\n\n");
	printf("==========================================================\n\n");
	scanf("%d", &opcao);
	
	

	
	switch(opcao){
		
		case 1 : {
		
		system("cls");
   		 	printf("\t==Menu de Venda de Ingressos==\n\n");

   		int i = numPessoas;
    	while (i < 100) {
        	printf("Por favor, Digite o nome do titular da compra:\n");
        	scanf(" %[^\n]", pessoas[i].nome);
        getchar();
    
        	printf("Digite o CPF do titular da compra:\n");
        	scanf("%11s", pessoas[i].cpf);
        getchar();
        
        	printf("Digite o ano de nascimento do titular da compra:\n");
        scanf("%10s", pessoas[i].dataNascimento);
        getchar();
        
        numPessoas++;
        
        printf("Compra aprovada com sucesso!\n\n");
        printf("Para voltar ao menu, digite 0 e tecle Enter.\n");
                    char menu;
                    scanf(" %c", &menu);
                    getchar();

                    if (menu != '\n') {
                        break;
                    }
        
        numPessoas++;
        i++;
    }
    break;
		}

	   	case 2 : {
	   			getchar();
	   			system("cls");
                if (numPessoas > 0) {
                    printf("\t==Ingressos Vendidos==\n\n");
                    int i;
                    for (i = 0; i < numPessoas; i++) {
                        printf("Nome: %s\n", pessoas[i].nome);
                        printf("CPF: %s\n", pessoas[i].cpf);
                        printf("Data de Nascimento: %s\n", pessoas[i].dataNascimento);
                        printf("\n");
                        printf("===============================\n\n");
                    }
                } else {
                    printf("Nenhum dado salvo encontrado\n");
                }
                printf("Pressione qualquer tecla para continuar\n");
                getchar();
                break;
		}
		case 3 : {
			system("cls");
			getchar();
			if (numPessoas > 0) {
        char cpfDigitado[12];
        printf("==Digite o CPF para a validação do ingresso==\n");
        scanf("%11s", cpfDigitado);
        getchar(); 

        int encontrado = 0; 
        int i = 0; 

        while (i < numPessoas) {
            if (strcmp(cpfDigitado, pessoas[i].cpf) == 0) {
                encontrado = 1;
                break;
            }
            i++;
        }

        if (encontrado) {
            printf("Ingresso Validado com Sucesso\n\n");
            printf("Resumo:\n");
            printf("Nome: %s\n", pessoas[i].nome);
            printf("CPF: %s\n", pessoas[i].cpf);
            printf("Data de Nascimento: %s\n", pessoas[i].dataNascimento);
            printf("===============================\n\n");
        } else {
            printf("CPF inválido! O CPF não foi encontrado nos registros.\n");
        }
    } else {
        printf("Nenhum dado salvo encontrado\n");
    }
    printf("Pressione qualquer tecla para voltar ao menu.\n");
    getchar();
    break;
		}
		case 4 :{
			  printf("Encerrando o programa...\n");
    		  exit(0);
			break;
		}
	  
    }
 
  }
  return 0;
}
 


