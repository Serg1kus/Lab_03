#include <iostream>

using namespace std;

int main()
{
    long long int product = 1;

    for(int i = 1; i <= 1000; i++)
    {
        product *= i;
    }

    cout << "Product of numbers from 1 to 1000000 is: " << product << endl;

    return 0;
}
