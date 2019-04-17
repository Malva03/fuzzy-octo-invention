#include "Tad's-ex1.h"
#include <iostream>
int Menu ()
{   int opcao;
    using namespace std;
    cout<<"escolha uma opcao\n\n";
    cout<<"1-Inserir um compromisso\n\n";
    cout<<"2-Remover um compromisso\n\n";
    cout<<"3-Imprimir agenda\n\n";
    cout<<"4-Verificar disponibilidade\n\n";
    cout<<"0-sair\n\n";
    cout<<"opcao:";
        cin>>opcao;
    if(opcao>4)
    {   while(opcao>4)
        {
        cout<<"opcao invalida.Redigite.\n";
            cin>>opcao;
        }
    }
    else
    {
        return opcao;
    }
}
int Checar_data()//considerando que esta agenda vai desde abril/2019 ate abril/2020
{int mes,dia;
using namespace std;
                cout<<"digite o dia do compromisso\n";
     cin>>dia;
                cout<<"digite o mes do compromisso\n";
     cin>>mes;
if(mes==2)//fevereiro
{
    if(dia>29)
    {
        while(dia>29)
        {
            cout<<"dia invalido.Redigite.\n";
            cin>>dia;
        }
    }
    else{return dia;}
}
else if((mes<8)&&(mes%2==0))//mes menor que 8 e par
{
    if(dia>30)
    {
        while(dia>30)
        {
            cout<<"dia invalido.Redigite.\n";
            cin>>dia;
        }
    }
    else{return dia;}
}
else if((mes<8)&&(mes%2!=0))//mes menor que 8 e ímpar
{
    if(dia>31)
    {
        while(dia>31)
        {
            cout<<"dia invalido.Redigite.\n";
            cin>>dia;
        }
    }
    else{return dia;}
}
else if((mes>8)||(mes=8)&&(mes%2==0))//mes maior ou igual a 8 e par
{
    if(dia>31)
    {
        while(dia>31)
        {
            cout<<"dia invalido.Redigite.\n";
            cin>>dia;
        }
    }
    else{return dia;}
}
else//mes maior ou igual a 8 e ímpar
{
    if(dia>30)
    {
        while(dia>30)
        {
            cout<<"dia invalido.Redigite.\n";
            cin>>dia;
        }
    }
    else{return dia;}
}
}
void SettarLista(EstruturaLista &Lista)
{
    Lista.Inicio = 0;
    Lista.Fim = 0;
}
void Inserir_na_lista(EstruturaDados Aux,EstruturaLista &Lista)
{
    Lista.Dados[Lista.Fim]= Aux;
    Lista.Fim++
}
