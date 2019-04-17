#include <iostream>
#include<stdio.h>
#include "Tad's-ex1.h"
#define MaxTam 30
using namespace std;
typedef int Apontador;
typedef struct EstruturaDados
{
    int mes,dia,hora;
    char nome[30];
};
typedef struct EstruturaLista
{
    EstruturaDados Dados[MaxTam];
    Apontador Inicio;
    Apontador Fim;
};
int main()
{int opcao,dia,mes;
EstruturaDados Aux;
EstruturaLista Lista;
SettarLista (Lista);
    opcao=Menu();
    switch(opcao)
    {
        case 1:
            // Inserir Compromisso
           dia=Checar_data();
           dia=Aux.dia;
           mes=Aux.mes;
            cout<<"digite a hora do compromisso(exemplo:duas da tarde=1400)\n";
                cin>>Aux.hora;
                getchar();//pausa
            cout<<"digite o nome do compromisso\n";
                cin.getline(Aux.nome,30);
            Inserir_na_lista(Aux, Lista);

    }
    return 0;
}
