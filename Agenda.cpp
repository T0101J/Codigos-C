#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

FILE*abre_ar(char modo, char caminho[30]){
	FILE*arquivo;
	switch(modo){
		case 'g':
			arquivo= fopen (caminho,"wt");
			break;
		case 'l':
			arquivo=fopen(caminho,"rt");
			break;
		case 'a':
		    arquivo= fopen(caminho,"a");
			break;	
	}
	if(arquivo==NULL){
		printf("Nao foi possivel abrir o arquivo!");
		exit(0);
	}
	return arquivo;
}

void fecha_ar(FILE*arquivo){
	fclose(arquivo);
}



void cadastra(char nome[30],  int tel){
	FILE*arquivo;
	arquivo= abre_ar('a',"Agenda.txt");
	fprintf(arquivo,"%s %d\n",nome,tel);
	fecha_ar(arquivo);
}

void listar(){
	FILE*arquivo;
	char nome[30];
	int tel;
	arquivo = abre_ar('l',"agenda.txt");
	 while(!feof(arquivo)){//enquanto não for o fim do arquivo vai ler
     fscanf(arquivo,"%s %d ",&nome, &tel);
     printf("Nome: %s | Telefone: %d\n",nome,tel);
	 }
	 fecha_ar(arquivo);
}

int main(){
	volta:
	system("cls");
     int tel;
     int opc;
	 char nome[30];
	 printf("\t#_______Agenda_______#\n");
	
	 printf("(1) Cadastrar Contato\n");
	 printf("(2) Exibir Contato\n");
	 //printf("(3) Apagar Contato\n");
	 printf("(3) Sair");
	 printf("\n\nDigite uma opcao: ");
	 scanf("%i",&opc);
	system("cls");
	switch(opc){
		case 1:
			printf("\nDigite o nome: ");
			setbuf(stdin,NULL);
			gets(nome);
			printf("\nDigite o telefone: ");
			scanf("%d", &tel);
			
			  cadastra(nome, tel);
	        break;
	    case 2:
	    	system("cls");
		      listar();
		      system("pause");
	    	break;
	//	case  3:
			  //func3();
			  //break;
		case 3:
		      return(0);
			  break;
		default:
		printf("\n\nOpcao invalida");	  	  
	 }
	goto volta;
	
	getch();
	return(0);
}
