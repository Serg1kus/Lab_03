#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a = 1;         
    double r = 2;        
    double an = a;       
    
    for(int j = 0; j < 10000; j++)   
    {
        an = a;                     
        for(int i = 0; i < 5000; i++) 
        {
            
            an *= r;                
        }
  
    }
    return 0;
}
