#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int power = 3;             
    long long product = 1;     

    for(int i = 2; i <= 1000; i += 2)  
    {
        int powered_num = pow(i, power);    
        product *= powered_num;             
    }

    cout << "The product of even numbers from 1 to 10000 raised to the power of " << power << " is: " << product << endl;

    return 0;
}
