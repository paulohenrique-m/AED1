#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int divide(int x, int y) //q1
{
    int z = 1;

    if (x < 0)
        x = -x;
    if (y < 0)
        y = -y;

    if (y == 0 || x < y)
        return 0;
    else if (x - y > 0)
        z += divide(x - y, y);

    return z;
    /*
	descri��o: função para dividir (a,b) apenas com subtração
	entrada:2 numeros inteiros
	saida:resultado inteiro
	*/
}
int quantos_Digitos(int A) //q2
{
    int z = 1;

    if (A == 0)
        return 0;
    else if (A < 10)
        return 1;
    else
        z += quantos_Digitos(A / 10);

    return z;
    /*
	descrição:recebe um numero inteiro e retorna a quantidade de digitos
	entrada: 1 numero inteiro
	saida: quantidade de digitos na entrada como inteiro
	*/
}
int soma_Digitos(int A) //q3
{
    int z = 0;

    if (A < 10)
        return A;
    else
    {
        z = A % 10;
        z += soma_Digitos(A / 10);
    }
    return z;
    /*
	descrição:função recursiva  pra retornar a soma dos digitos recebida pela main
	entrada:numeros inteiros
	saida: soma dos numeros
	*/
}
int multiplica(A, B) //q4
{
    int z = A;

    if (B == 0 || A == 0)
        return 0;
    else if (B == 1)
        return A;
    else
        z += multiplica(A, B - 1);

    return z;
    /*
	descrição:função recursiva que retorne o resultado da multiplicação dos dois parâmetros utilizando apenas o operador somas
	entrada: 2 numeros inteiros
	saida: resultado da multiplicação em inteiro
	*/
}
int progressao(int a, int r, int n) //q5
{

    int z = a * pow(r, n - 1);
    printf("\nN = %d Z = %d", n, z);

    if (n == 1)
        return z;
    else
        z *= progressao(a, r, n - 1);
    /*
	descrição:função recursiva que calcule o n-ésimo termo de uma progressão geométrica onde o primeiro termo e a razão são informados pelo usuário. 
	entrada:numeros inteiros
	saida: numeros inteiros
	*/
}
void ordena(int n, int *v) //q14
{
    int j, i;

    for (i = n - 1; i > -1; i--)
    {
        int troca = 0;
        for (j = 0; j < i; j++)
        {
            if (v[j] > v[j + 1])
            {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
                troca = 1;
            }
        }
        if (troca == 0)

            return;
    }
    /*
	descrição: função para ordenar o menor e o segundo menor numero.
	entrada:numeros inteiros
	saida: numeros inteiros
	*/
}

int main()
{
    int A, B;
    int primeiro, r, n;
    int opc = -1;
    int vetor[10];
    int vetor8[15];
    int x = 9;
    int a = 0;
    float media;
    int soma = 0, somador = 0; //soma � pra media e somador pra quantas vezes a media aparece abaixo da media
    int maior = 18, menor = 40;
    double q = 0, w = 1, auxiliar;
    double vetor12[100];
    int z = 0, RESULTADO = 1;
    int vetor13[5];
    int vet[100];

    while (opc != 0)
    {
        printf("---------------MENU---------------");
        printf("\n1-recursividade-(A,B) subtracao ");
        printf("\n2-recursividade-receber numero e mostrar digitos");
        printf("\n3-recursividade-recebe numero e mostra soma");
        printf("\n4-recursividade-multiplicacao dos parametros");
        printf("\n5-recursividade-funcao pra calcular n-esimo");
        printf("\n6-vetor-le 10 numeros e volta inverso");
        printf("\n7-vetor-le 10 numeros e imprime com indice se for igual");
        printf("\n8-vetor-programa com 15 numeros aleatorios no vetor");
        printf("\n9-vetor-preenche vetor com 15 numeros entre 18 e 40 mostrando maior,menor e media");
        printf("\n10-vetor-vetor par e impar");
        printf("\n11-vetor-n numeros no vetor entre 0 e 9");
        printf("\n12-vetor-100 primeiros numeros de fibonacci");
        printf("\n13-vetor-funcao com indice valendo x");
        printf("\n14-vetor-armazena n numeros e motra o quanto foi colocado");
        printf("\n0-SAIR");
        printf("\nqual opcao desejada:");
        scanf("%d", &opc);
        switch (opc)
        {
        case 0:
            printf("SAINDO...");
            break;
        case 1:
            printf("Informe um dividendo: ");
            scanf("%d", &A);
            printf("Informe um divisior: ");
            scanf("%d", &B);
            printf("A / B = %d\n", divide(A, B));
            break;
        case 2:
            printf("Informe um numero: ");
            scanf("%d", &A);
            printf("O numero informado possui %d digitos.\n", quantos_Digitos(A));
            break;
        case 3:
            printf("Informe um numero: ");
            scanf("%d", &A);
            printf("A soma dos digitos do numero eh %d.\n", soma_Digitos(A));
            break;
        case 4:
            printf("Informe um multiplicando: ");
            scanf("%d", &A);
            printf("Informe um multiplicador: ");
            scanf("%d", &B);

            printf("A * B = %d\n", multiplica(A, B));
            break;

        case 5:
            printf("Informe o primeiro termo da progressao: ");
            scanf("%d", &primeiro);
            printf("Informe a razao: ");
            scanf("%d", &r);
            printf("Informe o n-esimo termo desejado: ");
            scanf("%d", &n);
            progressao(primeiro, r, n);
            break;
        case 6:
            printf("escreva 10 numeros para colocar em um vetor:");
            while (x >= 0)
            {
                scanf("%d", &vetor[x]);
                x--;
            }
            x = 0;
            while (x < 10)
            {
                printf("\nposicao %d:%d\n", x, vetor[x]);
                x++;
            }
            break;
        case 7:
            printf("escreva 10 numeros para colocar em um vetor:");
            while (a < 10)
            {
                scanf("%d", &vetor[a]);
                a++;
            }
            a = 0;
            while (a < 10)
            {
                if (a == vetor[a])
                {
                    printf("\nposicao %d:vetor[%d]", a, vetor[a]);
                }
                a++;
            }
            break;
        case 8:
            srand(time(NULL));
            printf("atividade de vetor com numero aleatorio :D\n");
            while (a < 15)
            {
                vetor8[a] = rand() % 11;
                printf("vetor[%d]:%d\n", a, vetor8[a]);
                a++;
            }
            break;
        case 9:
            while (a < 15)
            {
                vetor8[a] = rand() % 23 + 18;
                printf("vetor[%d]:%d\n", a, vetor8[a]);
                if (vetor8[a] > maior)
                {
                    maior = vetor8[a];
                }
                if (vetor8[a] < menor)
                {
                    menor = vetor8[a];
                }
                soma += vetor8[a];
                a++;
            }
            media = soma / 15.0;
            a = 0;
            while (a < 15)
            {
                if (vetor8[a] < media)
                    ;
                somador++;
                a++;
            }
            printf("maior: %d\n", maior);
            printf("menor: %d\n", menor);
            printf("media: %0.2f\n", media);
            printf("a temperatura ficou %d vezes abaixo da media %0.2f\n", somador, media);
            break;
        case 10:
            while (a < 10)
            {

                if (a % 2 == 0)
                { //se for par, coloca 1 no vetor e mostra
                    vetor[a] = 1;
                    printf("posicao %d=1\n", a);
                }
                else
                { //se for impar, coloca 0 no vetor e mostra

                    vetor[a] = 0;
                    printf("posicao %d=0\n", a);
                }
                a++;
            }
            break;
        case 11:
            while (a < 10)
            {
                printf("vetor[%d]=", a);
                scanf("%d", &vetor[a]);
                if (vetor[a] >= 0 && vetor[a] <= 9)
                {
                    //printf("vetor[%d]=%d\n",n,vetor[n]);
                }
                else
                {
                    printf("\nnumero invalido!\ntente novamente\n");
                    a = -1;
                }
                a++;
            }
            a = 9;
            while (a > 0)
            {
                printf("\nvetor[%d]=%d", a, vetor[a]);
                a--;
            }
            break;
        case 12:
            printf("Série de Fibonacci em vetor:\n");

            for (int i = 0; i < 100; i++)
            {
                auxiliar = q + w;
                q = w;
                w = auxiliar;
                vetor12[i] = auxiliar;
                printf("vetor[%d]=%f\n", i, vetor12[i]);
            }
            break;
        case 13:
            while (z <= 5)
            {
                RESULTADO = 3 * (pow(z, 3)) + 2 * (pow(z, 2)) + z - 5;
                vetor13[z] = RESULTADO;
                printf("\n3x^3+2x^2+x-5 quando x eh %d=%d", z, vetor13[z]);
                z++;
            }
            return 0;
            break;
        case 14:
            puts("Informe a quantidade de valores desejado: ");
            scanf("%d", &a);
            for (int i = 0; i < a; i++)
            {
                printf("#%d Informe um valor: ", i);
                scanf("%d", &vet[i]);
            }
            ordena(a, vet);
            printf("Segundo menor valor digitado = %d\n", vet[1]);

            break;
        }
    }

    return 0;
}