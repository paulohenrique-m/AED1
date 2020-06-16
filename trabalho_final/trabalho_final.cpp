#include <iostream>
#define M 8
#define N 8
using namespace std;

class MUNDO
{
private:
    int matriz[M][N];

public:
    /*construtor*/
    MUNDO()
    {
        for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < N; j++)
            {
                matriz[i][j] = 0;
            }
        }
        printf("mundo criado\n");
    };
    void imprime_mundo()
    {
        for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < N; j++)
            {
                printf("%i ", matriz[i][j]);
            }
            printf("\n");
        }
        /*
        descrição:procedimento para imprimir o mundo criado
        entrada:não tem
        saída:tabuleiro de 8 por 8 preenchidos
        */
    }
    void set_agente(int x, int y, int numero)
    {
        matriz[x][y] = numero;
        /*
        descrição:procedimento para setar agente em uma posição do mundo
        entrada:não tem
        saída:um lugar do agente no mundo
        */
    }
};
class AGENTE
{
private:
    int estado, x, y;
    MUNDO *mundo;

public:
    virtual void set_posicao(int x, int y, MUNDO *mundo) = 0;
    virtual void movimento(int x, int y) = 0;
    /*setar nesta classe*/
    void set_x(int valor)
    {
        x = valor;
    }
    void set_y(int valor)
    {
        y = valor;
    }
    void set_estado(int valor)
    {
        estado = valor;
    }
    void set_mundo(MUNDO *valor_matriz)
    {
        mundo = valor_matriz;
    }
    /*
        descrição:
        entrada:
        saída:
        */
    /*usar em outras funções*/
    int get_x()
    {
        return x;
    }
    int get_y()
    {
        return y;
    }
    int get_estado()
    {
        return estado;
    }
};
class WALLS : public AGENTE
{
public:
    WALLS(int x, int y, MUNDO *vetor, int estado)
    {
        set_x(x);
        set_y(y);
        set_estado(estado);
        set_mundo(vetor);
        set_posicao(x, y, vetor);
    };
    void set_posicao(int x, int y, MUNDO *vetor)
    {
        vetor->set_agente(x, y, 1);
    }
    void movimento(int x, int y)
    {
        printf("realiza movimento!");
    }
};
int main()
{
    MUNDO jogo;
    jogo.imprime_mundo();
    WALLS objeto(1, 1, &jogo, 1);
    jogo.imprime_mundo();
}