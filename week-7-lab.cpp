#include <iostream>
// Library needed to get a random seed
#include <time.h>

using namespace std;

int main() {
    // Gets a random seed for our rand() function
    
    int x, a;

    cout << "*********************************************" << endl;
    cout << "WELCOME! WELCOME! TO VISIT OUR ONLINE CASINO"  << endl;
    cout << "*********************************************" << endl;
    
    cout << "Do you want to play the game?"<< endl;
    cout << "If yes, put 1. If no, put 0." << endl;
    
    cin >> x;

  
    if ( x == 0 ) { 
        cout << "See you next time" << endl;
        return 0;
        }

    else {
        cout << "**** Let's start game! ****" << endl;  
    }

    cout << "You should bet minimum $500 at a time." << endl;
    cout << "If you are corret, you can get double." << endl;
    cout << "If not, you will loose money."          << endl;
    cout << "How much do you want to bet?"           << endl;
    cout << "Enter your money : "                    ;
    
    int y, z;

    cin >> y;

    while ( y < 500) {  

        cout << "Please, enter over $500, and try one more time." << endl;
        cout << "Enter your money : ";
        cin  >> y;
    }

    cout << "You bet $" << y << endl;
    cout << "Please, choose either Number 1 or 0"   << endl;
    cin  >> a;

    if (a < 0 ) {

        cout << "You are cashing out. Bye" << endl;
        return 0;
    } 
        else if ( a > 1) {

        cout << "You are cashing out. Bye" << endl;
        return 0;    
        }
    
    srand( time(NULL) );
    // Picks either 0 or 1 randomly with equal probablilty	
    int random = rand() % 2;
    cout << "Your number is " << a << "." << endl;
    cout << "Random number is " << random << "."<< endl;
 
    if (a == random) {
        cout << "Congraturations! You Win! " << 
                "You got $" << y*2 << "." << endl;
        cout << "Do you still have money to bet?" << endl;
        cout << "If yes, put 1. If no, put 0." << endl;
        int b;
        cin >> b;

        if ( b == 1) {
            return main();
        }
        
        else {
            cout << "See you next time" << endl;
            return 0;        
        }
    }

    else {
        cout << "Sorry. You lost $" << y << "." << endl;
        cout << "Do you still have money to bet?" << endl;
        cout << "If yes, put 1. If no, put 0." << endl;
        int x;
        cin >> x;

        if ( x == 1) {
            return main();
        }
        else {
            cout << "See you next time" << endl;
            return 0;        
        }
    }

    return 0;
 
}