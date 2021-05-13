#include<iostream>
#include<conio.h>
#include <locale>
#include<stdlib.h>

#define clrscr() system("cls");
#define getch() kbhit()

using namespace std;

const int tam = 8; //define o tamanho da tabela

struct hash{
    int chave;
    char livre;     //L = livre, 0 = ocupado, R = removido
};

int funcao_hashing(int num){ //define as chaves da armazenamento associativo
    return num % tam;
}

void mostrar_hash(hash tabela[]){  //mostra o codigo com base a chave
    for(int i=0; i<tam; i++)
        if(tabela[i].livre == 'O')
            cout << "\nEntrada " << i << ": " << tabela[i].chave<<"\n\n";
}

void inserir(hash tabela[], int pos, int n){ //insere na tabela
    int i = 0;
    while(i < tam && tabela[(pos+i)%tam].livre != 'L' && tabela[(pos+i)%tam].livre != 'R')
        i=i+1;

    if(i<tam){
        tabela[(pos+i)%tam].chave = n;
        tabela[(pos+i)%tam].livre = 'O';
    } else {
        cout <<"\nTabela cheia!. Por Favor tente novamente";
    }
}

int buscar(hash tabela[], int n){
    int i = 0;
    int pos=funcao_hashing(n);

    while(i < tam && tabela[(pos+i)%tam].livre != 'L' && tabela[(pos+i)%tam].chave != n)
        i=i+1;

    if(tabela[(pos+i)%tam].chave == n && tabela[(pos+i)%tam].livre != 'R'){
        return (pos+i)%tam;
    } else {
        return tam;     //não encontrado
    }
}

void remover(hash tabela[], int n){

    int posicao = buscar(tabela, n);

    if(posicao < tam){
        tabela[posicao].livre = 'R';
               cout<<"Valor removido com sucesso!\n\n";
    } else {
        cout << "\nelemento não está presente.";
    }
}

int main(){

    setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português

    hash tabela[tam];

    int op, pos, num, i;

    //inicialização da tabela
    for(i = 0; i < tam; i++)
        tabela[i].livre = 'L';

    do{
        clrscr();
        cout << "\nMENU DE OPÇÕES :) \n";
        cout << "\n[1] - Inserir elemento";
        cout << "   [2]- Mostrar tabela hashing";
        cout << "   [3]- Excluir elemento";
        cout << "   [4]- Sair";

        cout << "\n\n\nDigite sua opção: ";
        cin >> op;

        if (op < 1 || op > 4)
            cout << "\nOpção inválida!!";
        else {
            switch(op){
                case 1:
                    cout << "Digite um número: ";
                    //leitura do número a ser inserido
                    cin >> num;
                    pos = funcao_hashing(num);
                    inserir(tabela, pos, num);
                    cout<< "Valor inserido com sucesso!\n\n";
                    system("pause");
                    break;
                case 2:
                    mostrar_hash(tabela);
                      system("pause");
                    break;
                case 3:
                    cout << "Digite um número: ";
                    cin >> num;
                    remover(tabela, num);
                      system("pause");
                    break;
            }
        }
        getch();
    }while (op != 4);
return(0);
}
