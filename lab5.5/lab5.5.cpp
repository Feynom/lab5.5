#include <iostream>
#include <Windows.h>

using namespace std;

double C(int n, int k, int& count);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n, k;
    int count = 0;

    cout << "Введіть значення 'N':"; cin >> n;
    cout << "Введіть значення 'K':"; cin >> k;
    cout << "Рівень рекурсії:";
    double c = C(n, k, count);
    cout << "\nРезультат:" << c << endl;
    cout << "Глибина рекурсії:" << count << endl;

    return 0;
}

double C(int n, int k, int& count)
{
    count++;
    cout << count << "   ";
    if (n > 0 && k != n && k != 0)
    {
        double r = (n * 1.0 - k * 1.0 + 1) / (k * 1.0);
        return r * C(n, k - 1, count);
    }
    if (k == n || k == 0)
        return 1;
}