#include <iostream>
// Library needed to get a random seed
#include <time.h>

using namespace std;

int main() {
    // Gets a random seed for our rand() function
    
    srand( time(NULL) );
    // Picks either 0 or 1 randomly with equal probablilty	
    int random = rand() % 2;
    cout << random;
    



    return 0;
}