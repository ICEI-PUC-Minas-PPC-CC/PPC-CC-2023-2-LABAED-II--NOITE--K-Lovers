#include <stdio.h>

void exibiMenu()
{
    printf ("OPCAO CRIAR CONTATO [1]\n");
    printf ("OPCAO EXCLUIR CONTATO [2]\n");
    printf ("OPCAO VER INFORMACOES SOBRE CONTATO [3]\n");
    printf ("OPCAO CRIAR GRUPO [4]\n");
    printf ("OPCAO EXCLUIR GRUPO [5]\n");
    printf ("OPCAO ADICIONAR CONTATO AO GRUPO [6]\n");
    printf ("OPCAO EXCLUIR CONTATO DO GRUPO [7]\n");
    printf ("OPCAO DEFINIR LEMBRETES [8]\n");
    printf ("OPCAO EXCLUIR LEMBRETE [9]\n");
    printf ("VISUALIZAR LEMBRETES [10]\n");
    printf ("VISUALIZAR CONTATOS [11]\n");
    printf ("VISUALIZAR GRUPOS [12]\n");
    printf ("PARA SAIR DIGITE 0 \n");

}

void opcaoSelecionada (int opcao){

    switch(opcao){
    case 1 :
        criarContato();
        break;
    case 2 :
        excluirContato();
        break;
    case 3 :
        verInfo();
        break;
    case 4 :
        criarGrupo();
        break;
    case 5 :
        excluirGrupo();
        break;
    case 6 :
        addCttGrupo();
        break;
    case 7 :
        tirarCttGrupo();
        break;
    case 8 :
        definirLembrete();
        break;
    case 9 :
        excluirLembrete();
        break;
    case 10:
        verLemb();
        break;
    case 11:
        verCtt();
        break;
    case 12:
        verGrupos();
        break;
    case 0 :
        system("pause");




    }








}

/*
- Criar contato
- Excluir contato
- Ver informações sobre conttao
- Criar grupos
- Excluir grupos
- Adicionar contato aos grupos
- Excluir contatos do grupo
- Definir lembretes
- Exluir lembretes*/
