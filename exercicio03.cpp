#include <iostream>

void ordenar(float &a, float &b, float &c, float &d)
{
    float temp;
    bool trocou;

    do
    {
        trocou = false;
        if (a > b)
        {
            temp = a;
            a = b;
            b = temp;
            trocou = true;
        }
        if (b > c)
        {
            temp = b;
            b = c;
            c = temp;
            trocou = true;
        }
        if (c > d)
        {
            temp = c;
            c = d;
            d = temp;
            trocou = true;
        }
    } while (trocou);
}

int main()
{
    float num1, num2, num3, num4;

    std::cout << "Digite quatro n�meros float:" << std::endl;
    std::cin >> num1 >> num2 >> num3 >> num4;

    ordenar(num1, num2, num3, num4);

    std::cout << "Os n�meros em ordem crescente s�o: " << num1 << " " << num2 << " " << num3 << " " << num4 << std::endl;

    return 0;
}