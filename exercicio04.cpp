#include <iostream>

void calcula(int &X, int &Y)
{
    int soma = X + Y;
    int subtracao = X - Y;

    X = soma;
    Y = subtracao;
}

int main()
{
    int num1, num2;

    std::cout << "Digite o o primeiro n�mero inteiro:" << std::endl;
    std::cin >> num1; 

    std::cout << "Digite o segundo n�mero inteiro:" << std::endl;
    std::cin >> num2;

    calcula(num1, num2);

    std::cout << "Ap�s a chamada da fun��o, X agora �: " << num1 << std::endl;
    std::cout << "Ap�s a chamada da fun��o, Y agora �: " << num2 << std::endl;

    return 0;
}
