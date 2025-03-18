#include <iostream>

using namespace std;

int somar(int a, int b);

int main()
{
    int a, b;

 cout << "entre com o valor de a ";
 cin >> a;

 cout << " entre com o valor de b ";
 cin >> b;

  cout << somar(10,10);

}

int somar(int a, int b)
{
    int soma;

    soma = a + b;

    return (soma);

}
