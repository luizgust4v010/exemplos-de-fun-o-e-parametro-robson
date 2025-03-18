#include <iostream>

using namespace std;

int somaIntervalo();

int main()
{
   cout << somaIntervalo();
}

int somaIntervalo()
{
    int soma, a, b;

    a = 1;
    b = 10;
    soma = 0;

    for(int i = a; i <= b ; i++)
    {
       soma = soma + i;
    }
    return soma;

}
