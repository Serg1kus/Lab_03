#include <iostream>

using namespace std;

int main()
{
    long long first_term = 1; 
    long long common_difference = 1; 
    long long last_term = 100000000000; 
    long long current_term = first_term; 

    while(current_term <= last_term)
    {
        
        current_term += common_difference; 
    }

    return 0;
}
