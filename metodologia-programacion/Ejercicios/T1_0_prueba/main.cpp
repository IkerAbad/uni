#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Spanish");

    const int base=5, altura=7;
    int area;

    area = base * altura;
    cout << "El área es: " << area;
    return 0;
}
