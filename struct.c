

//--------------------------------------------
typedef struct
{

    char nome, endereco[150];
    int numero, datnacimento;

//Precisa cadastar contatos.

} Contato;

//--------------------------------------------
typedef struct
{

    Contato;

//Precisa receber os contatos e separa-los em grupo.

} GrupoContato;

//--------------------------------------------
typedef struct
{

    char descricao, status [150];
    int data, hora;

// Precisa associar as informações, do lembrete aos contatos.

} Lembrete;
//--------------------------------------------
