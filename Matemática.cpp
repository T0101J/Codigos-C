#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void funcfra(){
	  system("cls");
	 float deno,numer;
	 
	 printf("_____Determinando a medida em graus com fracao_____");
	 
	 printf("\nOBS: Onde for pi digite o valor 3.14! (use ponto no lugar da virgula)");
 	 
	  printf("\nInforme o NUMERADOR: \n");
          scanf("%f",&numer);
	  printf("\nInforme o DENOMINADOR: \n");
	      scanf("%f",&deno);
	      
	  if(numer == 3.14)
	    {
		 numer=180;
	    }else{
	     deno=180;
	   }
	  numer=numer/deno;
	 printf("O resultado e:%.f",numer);
   }
   

int main (){
	 int op;
	   system("cls");
	   volta:
	  printf(" ________ Determine a medida em graus: ________ ");

	  printf("\n Informe qual operacao sera feita: \n");
	  printf("|fracao ---> 1       ex: pi/4 \n|multiplicao ---> 2   ex: pi.3  \n|adicao ---> 3       ex: pi+4  \n|subtracao ---> 4      ex: pi-4  \n");
	    scanf("%i",&op);

	 switch(op)
	   {
		 case 1:
			funcfra();
		  break;
		 case 2:
		    //funcmul();
		  break;
		 case 3:
			//funcad();
		  break;
		 case 4:
		    //funcsub();
		  break;
	     default:
	       printf("opcao invalida!");
	       goto volta;				
	    }
	 return (0);
   }

