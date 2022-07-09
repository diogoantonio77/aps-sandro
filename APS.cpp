#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
	system("color 2");
	setlocale(LC_ALL, "Portuguese");
	int i, menu, menu2, random;
	float preco, total1, total2, total3, total4, total5, total6, qtd, total;
	total=0;
	qtd=0;
	preco=0;
	menu=0;

	
	while(menu!=4){
		{
			printf("@");
		}
			 
		for (i=1;i<= 110;i++)
		{
			printf("@");
		}
		printf("\n#                                                                                             	 	#\n");
		printf("#                                                                                                 	 	#\n");
		printf("#                             Escolha uma das op��es abaixo:⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ 		#\n");
		printf("#                                                            ⠀⠀⠀⠀⠀⠀⣠⡶⠀⠀⠀⠀⣾⡛⠁⠀⠀⠀⢀⣴⠆⠀⠀⠀⠀⠀⠀⠀		⠀#\n");
		printf("#                                  1 - Produtos              ⠀⠀⠀⠀⠀⠸⢷⣤⣀⠀⠀⠀⠈⠛⢻⣦⠀⠀⠸⣧⣤⡀⠀⠀⠀⠀⠀⠀⠀⠀     #\n");
		printf("#                                                            ⠀⠀⠀⠀⠀⠀⠀⣈⣽⠇⠀⠀⠀⠲⠟⠃⠀⠀⠀⢀⣨⡿⠀⠀⠀⠀⠀⠀⠀⠀      #\n");
		printf("#                                  2 - Pagamento             ⠀⠀⠀⠀⠀⠀⠀⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀       #\n");
		printf("#                                                            ⠀⠀⠀⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠁⠀   #\n");
		printf("#                                  3 - Contato               ⠀⠀⠀⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀    #\n");
	    printf("#                                                            ⠀⠀⠀⠘⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃⠀⠀⠀⠀⠀⠀    #\n");
	    printf("#                                  4 - Sair                   ⠀⠀⠀⠀⠈⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠁⠀⠀⠀⠀⠀⠀⠀   #\n");
	    printf("#                                                             ⠀⠀⠀⠀⠀⠀⠈⠙⠻⠿⣿⣿⣿⣿⣿⣿⣿⠿⠟⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀    #\n");
	    printf("#                                                             ⠀⠀⠀⠀⠀⠀⢀⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀      #\n");
	    printf("#                                                            ⠀⠀⠀⠀⠀ ⠀⢸⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀      #\n");
	    printf("#                                                            ⠀⠀⠀⠀ ⢀⣀⣈⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀      #\n");
	    printf("#                                                            ⠀⠀⠀⠀⣾⣿⣿⡷⠀⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒⠀⣿⡄⠀⠀⠀⠀⠀⠀⠀⠀     #\n");
	    printf("#                                                             ⠀⠀⠀⠀⠈⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀      #\n");
	    printf("#                                                                                        				#\n");
	    printf("#                                                                                                       #\n");
	    printf("#                                                                                                       #\n");
	    printf("#                                                                                               		#\n");
	    printf("#                                                                                                       #\n");		
		
		for (i=1;i<= 110;i++) 
		{
			printf("@");
		}
		
		printf("\n\n  Digite Aqui:  ");
		while(menu<=0 || menu>5)
		{
			scanf("%i",&menu);
		}
		switch(menu){
			case 1:
			{
				system("cls");
				for (i=1;i<= 40;i++) 
				{
					printf("@");
				}
				printf("\n#							#");
				printf("\n# 1. Medalhão de Frango	#");
				printf("\n# 2. Churrasco fraldinha	#");
				printf("\n# 3. Linguiça toscana		#");
				printf("\n# 4. Picanha     			#");
				printf("\n# 5. Filé de peixe        #");
				printf("\n# 6. Caldo             	#");
				printf("\n# 7. Digite Para Sair   	#\n");
				for (i=1;i<= 40;i++) 
				{
					printf("@");
				}
				printf("\n\n Digite Aqui:  ");
				while(menu2<1 || menu2>7)
				{
					scanf("%i",&menu2);
				}
	
				
				switch(menu2){
					case 1:{
						printf("medalhão de frango, digite a quantidade (25,00R$ a unidade)\n");
						scanf("%f",&qtd);
						preco=25;
						total1=(qtd*preco)+total1;
						printf("\n Sua compra foi registrada!\n");
						
						break;
						}
						case 2:{
						printf("Churrasco fraldinha, digite a quantidade (40,00R$ a unidade)\n");
						scanf("%f",&qtd);
						preco=40;
						total2=(qtd*preco)+total2;
						printf("\n Sua compra foi registrada!\n");
						
						break;
						}
					
						case 3:{
						printf("Combo Linguiça toscana (45,00R$)\n");
						scanf("%f",&qtd);
						preco=45;
						total3=(qtd*preco)+total3;
						printf("\n Sua compra foi registrada!\n");
						
						break;
						}
					
						case 4:{
						printf("Picanha (120R$ a unidade)\n");
						scanf("%f",&qtd);
						preco=120;
						total4=(qtd*preco)+total4;
						printf("\n Sua compra foi registrada!\n");
						
						break;
						}
					
						case 5:{
						printf("Filé de peixe (30,00R$ a unidade)\n");
						scanf("%f",&qtd);
						preco=30;
						total5=(qtd*preco)+total5;
						printf("\n Sua compra foi registrada!\n");
						
						break;
						}
						case 6:{
						printf("Caldo de mandioca (10,00R$ a unidade)\n");
						scanf("%f",&qtd);
						preco=10;
						total6=(qtd*preco)+total6;
						printf("\n Sua compra foi registrada!\n");
						
						break;
						}
						
					}
				menu2=0;
					
				break;
			}
			case 2:{
				system("cls");
				total=total1+total2+total3+total4+total5+total6;
				for (i=1;i<= 38;i++) 
				{
					printf("@");
				}
				
					printf("\n#                                    #");
					printf("\n#   Valor Total Gasto   		%.2f R$      #",total);
					printf("\n#   medalhão de frango    	%.2f R$      #",total1);
					printf("\n#   Churrasco fraldinha  		%.2f R$      #",total2);
					printf("\n#   Linguiça toscana    		%.2f R$      #",total3);
					printf("\n#   Picanha         			%.2f R$      #",total4);
					printf("\n#   Filé de peixe  			%.2f R$      #",total5);
					printf("\n#   Caldo de mandioca     	%.2f R$      #",total6);
					printf("\n#Digite um numero qualquer para sair #\n");
				
				for (i=1;i<= 38;i++) 
				{
					printf("@");
				}
					printf("\n\n Digite Aqui:  ");
					
					while(menu2==0){
						scanf("%i",&menu2);
				}
					
					break;
					
			}
			case 3:{
				system("cls");
				for (i=1;i<= 40;i++) 
				{
					printf("@");
				}
				
				printf("\n#                                      #");
				printf("\n# Telefone: (34)4002-8922              #");
				printf("\n#                                      #");
				printf("\n# Email: suachurrascia@gmail.com       #");
				printf("\n#                                      #");
				printf("\n# Endere�o: Rua 0 Numero 1         	 #");
				printf("\n#                                      #");
				printf("\n# 7. Digite Para Sair                  #\n");
				for (i=1;i<= 40;i++) 
				{
					printf("@");
				}
				printf("\n Digite Aqui:  ");
				scanf("%i",&menu2);
				menu2=0;
				break;
			}	
		}
    	if(menu!=4){
    	system("cls");
    	menu=0;
		}		
	
	}
}

