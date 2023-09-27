#include <iostream>

int insere_meio(int vetor[], int &qtde, int elemento)
{

    // Calcula a posi��o do meio do vetor
    int meio = qtde / 2;

    // Desloca os elementos para a direita para abrir espa�o para o novo elemento
    for (int i = qtde; i > meio; i--)
    {
        vetor[i] = vetor[i - 1];
    }

    // Insere o elemento no meio
    vetor[meio] = elemento;

    // Incrementa a quantidade de elementos no vetor
    qtde++;

    return qtde;
}

int main()
{
    int vetor[100]; // Tamanho m�ximo do vetor
    int qtde = 6;   // Quantidade de elementos no vetor

    // Inicializa o vetor com alguns valores de exemplo
    for (int i = 0; i < qtde; i++)
    {
        vetor[i] = i + 1;
    }

    std::cout << "Vetor original: ";
    for (int i = 0; i < qtde; i++)
    {
        std::cout << vetor[i] << " ";
    }
    std::cout << std::endl;

    int elemento = 100;
    insere_meio(vetor, qtde, elemento);

    std::cout << "Vetor ap�s a inser��o: ";
    for (int i = 0; i < qtde; i++)
    {
        std::cout << vetor[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}