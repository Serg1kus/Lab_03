#include <iostream>

using namespace std;

int main()
{
    long long int product = 1;

    for(int i = 1; i <= 1000000; i++)
    {
        product *= i;
    }

    return 0;
}
