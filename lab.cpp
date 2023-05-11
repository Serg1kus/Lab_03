#include <iostream>

using namespace std;

int main()
{
    int first_term = 1; 
    int common_difference = 1; 
    int last_term = 100000; 
    int current_term = first_term; 

    while(current_term <= last_term)
    {
        
        current_term += common_difference; 
    }

    return 0;
}
