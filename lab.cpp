#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a = 1;         // Початковий елемент
    double r = 2;         // Знаменник
    double an = a;        // Поточний член прогресії

    cout << "Geometric progression: ";

    for(int j = 0; j < 1000000; j++)   // Обчислюємо 1000 різних геометричних прогресій
    {
        an = a;                     // Починаємо з початкового елемента
        for(int i = 0; i < 5000; i++) // Обчислюємо 50 членів прогресії
        {
            cout << an << " ";      // Виводимо поточний член
            an *= r;                // Обчислюємо наступний член
        }
        cout << endl;
    }

    return 0;
}
