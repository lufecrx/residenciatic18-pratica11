#include <iostream>

bool eh_primo(int numero)
{
    if (numero <= 1)
    {
        return false; // N�meros menores ou iguais a 1 n�o s�o primos
    }
    if (numero <= 3)
    {
        return true; // 2 e 3 s�o primos
    }
    if (numero % 2 == 0 || numero % 3 == 0)
    {
        return false; // N�meros divis�veis por 2 ou 3 n�o s�o primos
    }

    // Verifica se o n�mero � primo testando divisores at� a raiz quadrada do n�mero
    for (int i = 5; i * i <= numero; i += 6)
    {
        if (numero % i == 0 || numero % (i + 2) == 0)
        {
            return false;
        }
    }

    return true;
}

int conta_primos(int *vet, int qtde)
{
    int count = 0;
    for (int i = 0; i < qtde; i++)
    {
        if (eh_primo(vet[i]))
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int qtde;

    std::cout << "Digite a quantidade de elementos no vetor: ";
    std::cin >> qtde;

    int *vetor = new int[qtde];

    std::cout << "Digite os elementos do vetor:" << std::endl;
    for (int i = 0; i < qtde; i++)
    {
        std::cout << "Elemento " << i + 1 << ": ";
        std::cin >> vetor[i];
    }

    int quantidade_primos = conta_primos(vetor, qtde);

    std::cout << "Quantidade de n�meros primos no vetor: " << quantidade_primos << std::endl;

    // Liberar a mem�ria alocada para o vetor
    delete[] vetor;

    return 0;
}
