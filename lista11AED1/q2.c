#include <stdio.h>
#include <stdlib.h>

struct aluno
{
    int cadastro;
    char nome[20];
    int nota;
    float renda;
};
void cadastrar_alunos(int n, struct aluno vetor[])
{
    for (int i = 0; i < n; i++)
    {
        printf("\n-------aluno[%i]-------\n", i + 1);
        printf("\nqual//cadastro// do aluno[%i]", i + 1);
        scanf("%i", &vetor[i].cadastro);
        printf("qual//nome// do aluno[%i]", i + 1);
        scanf("%s", vetor[i].nome);
        printf("qual//nota// do aluno[%i]", i + 1);
        scanf("%i", &vetor[i].nota);
        printf("qual//renda// do aluno[%i]", i + 1);
        scanf("%f", &vetor[i].renda);
    }
}
void listar_alunos(int n, struct aluno vetor[])
{
    for (int i = 0; i < n; i++)
    {
        printf("\n-------aluno[%i]-------\n", i + 1);
        printf("cadastro[%i]: %i\n", i + 1, vetor[i].cadastro);
        printf("nome[%i]:%s\n", i + 1, vetor[i].nome);
        printf("nota[%i]:%i\n", i + 1, vetor[i].nota);
        printf("renda[%i]:%0.2f\n", i + 1, vetor[i].renda);
    }
}
void maior_nota(int n, struct aluno vetor[])
{
    int maior = 0;
    for (int i = 0; i < n; i++)
    {
        if (vetor[i].nota >= maior)
        {
            maior = vetor[i].nota;
        }
    }
    printf("a maior nota eh %i", maior);
}
void renda_media(int n, struct aluno vetor[])
{
    int cont = 0;
    float media;
    for (int i = 0; i < n; i++)
    {
        cont += vetor[i].renda;
    }
    media = cont / 10.0;
    printf("a media da renda de todos os alunos eh %0.2f", media);
}
void nota_media(int n, struct aluno vetor[])
{
    int cont = 0;
    float media;
    for (int i = 0; i < n; i++)
    {
        cont += vetor[i].nota;
    }
    media = cont / 10.0;
    printf("a media da nota de todos os alunos eh %0.2f", media);
}
void procurar_aluno(int n, struct aluno vetor[], int procura)
{
    int x;
    for (int i = 0; i < n; i++)
    {
        if (vetor[i].cadastro == procura)
        {
            procura = vetor[i].cadastro;
            x = i;
        }
    }
    printf("\na matricula [%i] eh do aluno %s", procura, vetor[x].nome);
    printf("\nnota:%i\nrenda:%i", vetor[x].nota, vetor[x].renda);
}
void criar_arquivo(int n, struct aluno vetor[])
{
    FILE *fp;
    char nome;
    printf("qual nome do arquivo?:");
    scanf("%s", nome);
    fp = fopen(nome, "w");
    if (fp == NULL)
    {
        printf("erro ao abrir o arquivo!!");
        return;
    }
    for (int i = 0; i < n; i++)
    {
        fprintf("\n-------aluno[%i]-------\n", i + 1);
        fprintf("cadastro[%i]: %i\n", i + 1, vetor[i].cadastro);
        fprintf("nome[%i]:%s\n", i + 1, vetor[i].nome);
        fprintf("nota[%i]:%i\n", i + 1, vetor[i].nota);
        fprintf("renda[%i]:%0.2f\n", i + 1, vetor[i].renda);
    }
    fclose(fp);
    printf("\narquivo criado!!");
}
int main()
{
    int opc = -1;
    int n = 0, cont;
    int x;
    float media;
    printf("quantos alunos tem:");
    // scanf("%i", &n); tirar comentario e colocar "n" no 10
    struct aluno vetor[10];

    while (opc != 0)
    {
        printf("\n\n----------MENU----------\n");
        printf("1-cadastrar alunos(faca,se nao tiver feito)\n");
        printf("2-lista dos alunos\n");
        printf("3-renda media dos alunos\n");
        printf("4-media de alunos\n");
        printf("5-maior nota\n");
        printf("6-pesquisar alunos por matricula\n");
        printf("7-criar um arquivo com a lista dos alunos\n");
        printf("0-sair\n\n");
        scanf("%i", &opc);
        switch (opc)
        {
        case 0:
            printf("SAINDO...");
            break;
        case 1:
            cadastrar_alunos(n, vetor);
            printf("\n-------------------");
            printf("\ncadastro feito!!");
            break;
        case 2:

            listar_alunos(n, vetor);
            printf("\n\n-------------------");
            printf("\nlista feita!!");
            break;
        case 3:
            renda_media(n, vetor);
            printf("\n\n-------------------");
            printf("\nrenda feita!!");
            break;
        case 4:
            nota_media(n, vetor);
            printf("\n\n-------------------");
            printf("\nmedia feita!!");
            break;
        case 5:
            maior_nota(n, vetor);
            printf("\n\n-------------------");
            printf("\nmaior nota feita!!");
            break;
        case 6:
            printf("digite a matricula para pesquisar");
            scanf("%i", &x);
            procurar_aluno(n, vetor, x);

            break;
        case 7:
            criar_arquivo(n, vetor);
            printf("\n\n-------------------");
            break;
        default:
            printf("invalido!!");
            break;
        }
    }

    return 0;
}