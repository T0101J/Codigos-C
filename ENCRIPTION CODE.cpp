#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

char msg [300];
char cript[300]; 
int tam_msg;
void cripto(){
	system("cls");
	int i;
		fflush(stdin);
	  printf("_______________________ENCRIPTION CODE_______________________\n\n\n");
	 printf("\n\nDigite a mensagem: ");
	 fgets(  msg, 300, stdin );

	 
	  tam_msg = strlen(msg);
        for(i=0;i<tam_msg;i++)
        {
        	    if(msg[i]=='\0'){
        	    	cript[i]='-';
        	    }else{
					cript[i] = msg[i]+5;
					}
				}
                
        

       printf("\n\nMensagem criptografada: %s\n\n\n\n",cript);
       
	system("pause");
}

void descripto(){
	system("cls");
	fflush(stdin);
  printf("_______________________ENCRIPTION CODE_______________________\n\n\n");
  printf("\n\nDigite a mensagem que deve ser descriptografada: ");
  fgets(  msg, 300, stdin );
  
 int i;
    for(i=0;i<tam_msg;i++)
        {
        	    if(msg[i]=='-'){
        	    	cript[i]='\0';
        	    }else{
				     cript[i] = msg[i] - 5;	
					}
				}
        
        
	printf("\n\nMensagem Descriptografada: %s\n\n\n\n",cript);
	system("pause");		
}


int main(){
	volta:
			fflush(stdin);
		system("cls");
	int op;
	printf("_______________________ENCRIPTION CODE_______________________\n\n\n");
	printf("[1] CRIPTOGRAFAR UMA MENSAGEM\n\n[2] DESCRIPTOGRAFAR\n\n[3] Sair\n\n");
    printf("Escolha:");
	scanf("%d",&op);
	
	switch (op){
		case 1: 
		    cripto();
		break;
		case 2:
			descripto();
		break;
		case 3:
		    return(0);
	 default:
	        printf("Essa opcao nao existe seu merda, tenta de novo seu burro!");
	 }
	 
	
	goto volta;
	printf("BY THIAGO SANTOS");
	return(0);
}
