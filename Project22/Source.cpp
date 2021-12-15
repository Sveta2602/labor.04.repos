#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    int n, i;
    cout << "¬ведите кол-во операций: ";
    cin >> n;
    double sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum += sqrt(1 + pow(cos(sin(i)), 2)) / 1 + pow(sin(cos(i)), 2);
    }
    cout << "»спользу€ цикл for++: " << sum << endl;
    sum = 0;
    for (i = n; i >= 1; i--)
    {
        sum += sqrt(1 + pow(cos(sin(i)), 2)) / 1 + pow(sin(cos(i)), 2);
    }
    cout << "»спользу€ цикл for--: " << sum << endl;
    sum = 0;
    i = 1;
    while (i <= n)
    {
        sum += sqrt(1 + pow(cos(sin(i)), 2)) / 1 + pow(sin(cos(i)), 2);
        i++;
    }
    cout << "»спользу€ цикл while: " << sum << endl;
    sum = 0;
    i = 1;
    do {
        sum += sqrt(1 + pow(cos(sin(i)), 2)) / 1 + pow(sin(cos(i)), 2);
        i++;
    } while (i <= n);
    cout << "»спользу€ цикл do while: " << sum << endl;
    return 0;
}
