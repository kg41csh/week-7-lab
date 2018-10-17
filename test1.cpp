#include <iostream>
// Library needed to get a random seed
#include <time.h>

using namespace std;

int main() {
    // Gets a random seed for our rand() function
    
    int x;

    cout << "*********************************************" << endl;
    cout << "WELCOME! WELCOME! TO VISIT OUR ONLINE CASINO"  << "\n";
    cout << "*********************************************" << endl;
    
    cout << "Do you want to play the game?"<< endl;
    cout << "If yes, put 1. If no, put 0." << endl;
    
    cin >> x;

    if ( x == 0 ){ 
        cout << "See you next time" << endl;
        return 0;
    }
    else {
        cout << "Let's start game!" << endl;  
    }

      
    cout << "Please, choose 1 or 0" << endl;
    cin >> x;

    if ( x > 1 ) { 
        cout << "You are cashing out" << endl;
    }    
        else if ( x < 0) {
        cout << "You are cashing out" << endl;
        return 0;    
        }
    
    else {
        cout << "You chose : " << x << endl;
    }    
    cout << "You should bet minimum $500 at a time." << endl;
    cout << "If you are corret, you can get double." << endl;
    cout << "How much do you want to bet?" << endl;
    cout << "Enter your money to bet : ";
    
    int y;

    cin >> y;

    while ( y > 500) {    }



    srand( time(NULL) );
    // Picks either 0 or 1 randomly with equal probablilty	
    int random = rand() % 2;
    cout << random;
 
    if (x == 1)


    return 0;
}