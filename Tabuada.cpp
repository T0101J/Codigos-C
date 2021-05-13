#include<stdio.h>
#include<conio.h>
int main (){
	int n1,n2,sct;
voltar:	
printf("\n ______Operacao entre dois numeros______\n");
  
  printf("\nAdicao---> 1 \nsubtracao ---> 2 \nmultiplicacao ---> 3 \nDivisao ---> 4 \nSair --->000\n\nEscolha qual operacao deseja fazer: ");
  scanf("%i",&sct);
 if(sct==000){
 	 return(0);
   } 	
printf("\nInforme um numero: ");
 scanf("%i",&n1);
 printf("\nInforme o segundo numero: "); 
  scanf("%d",&n2);
  

 switch(sct)
 {
 	case 1:
 		printf("A soma e:%i \n",n1+n2);
 		break;
 	case 2:
 		printf("A subtracao e:%i \n",n1-n2);
 		break;
 	case 3:
 		printf("A multiplicacao e:%i\n",n1*n2);
		 break;	
	case 4:
		printf("A divisao e: %i\n",n1/n2);
		break; 
 	default:
	 printf("Nao existe essa opcao!");
	}
	 goto voltar;
 
 getch();
	return(0);
}

