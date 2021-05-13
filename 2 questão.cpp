		#include<stdio.h>
		#include<conio.h>
		#include<stdlib.h>
		float psboi[5];
		int i,ak;
		
				int func1(){
					system("cls");	
					int msps,mrps,jeziel;
				
					printf(" ___________________CADASTRAR___________________\n");
					 
					 	printf("\nquando quiser sair digite (001)\n");
							for(i=1;i<=5;i++){
							
							printf("\npeso do boi N(%i): ",i);
						   		scanf("%f",&psboi[i]);
						if(psboi[i]==001){
						break;	
					}
		         	                
							    
			}  
			   	
				}
	int func2(){
		int op,jeziel;
			system("cls");
			
				printf("__________________VER CADASTROS__________________\n");					
				printf("\n quando quiser sair digite (001)\n\n");
			for(i=1;i<=5;i++){
			
				printf("\npeso do Boi de n\243mero(%i)= %.f\n",i,psboi[i]);
			}
				
					for(i=1;i<=5;i++){
        	
			if(psboi[i]>jeziel){
        	jeziel=psboi[i];	
			}else{
		}
				
			if(psboi[i]<ak){
				ak=psboi[i];
			}
         
	}
	
		 printf("\n\n  O boi mais gordo: %i\n",jeziel);
           
		printf(" \n\n O boi mais magro: %i\n",ak);				
		 
		   	
			 printf("\n para voltar digite (001): ");
			 scanf("%i",&i);  
			   	if(i==001){
						return(0);	
					}
		 }
         
		
			
		 
     
																			
		
		int main(){
		int op,res,res1;
	func1();
		do{
	system("cls");	
		printf("\n___________________Cadastro Bovino___________________\n");                                                                                                                   
		printf("  (1)Cadastrar \n");
		printf("  (2)ver Casdastros e informa\207\744es \n");
		printf("  (3)Sair \n");
		
		
		printf("\n escolha sua op\207\706o:");
		scanf("%i",&op);
		switch(op)
		{
			case 1 :
				func1();
				
				break;
			case 2 :
			   func2();
			   break;
			 case 3 :
			 	return(0);
			 	break;
			 	
			 default :
			 printf("N\707O EXISTE ESSA OP\207\706O!!");   	
		  	}
		}while(op != 1 && 2);
	
		getch();
			
			
		}
		
