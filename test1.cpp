#include <iostream>
// Library needed to get a random seed
#include <time.h>

using namespace std;

int main() {
    // Gets a random seed for our rand() function
    
    int x;

    cout << "*********************************************" << endl;
    cout << "WELCOME! WELCOME! TO VISIT OUR ONLINE CASINO"  << endl;
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

    cout << "You should bet minimum $500 at a time." << endl;
    cout << "If you are corret, you can get double." << endl;
    cout << "If not, you will loose money."          << endl;
    cout << "How much do you want to bet?"           << endl;
    cout << "Enter your money to bet : "                    ;
    
    int y;

    cin >> y;

    while ( y > 500) {    }


   
    cout << "Please, choose 1 or 0"   << endl;
    cin  >> x;

    if ( x > 1 ) { 
        cout << "It is wrony way. Please, choose 1 or 0" << endl;
    }    
        else if ( x < 0) {
        cout << "It is wrony way. Please, choose 1 or 0" << endl;
        return 0;    
        }
    
    else {
        cout << "You chose : " <<  x  << endl;
    }    

    srand( time(NULL) );
    // Picks either 0 or 1 randomly with equal probablilty	
    int random = rand() % 2;
    cout << "Your number is " << x << "." << 
            "Random number is " << random << ".";
 
    if (x == random) {
        cout << "Congraturations! You Win!" << endl;
        return 0;
    }
    else {
        
    }

    return 0;
}