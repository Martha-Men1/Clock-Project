#include <iostream>
#include <unistd.h>  
using namespace std;

// clock.cpp
// Purpose: Simulates a digital clock.
//          User enters the starting hour, minute, and second.
//          The program then displays and updates the time every second.
// Inputs: User-provided hour (0-23), minute (0-59), and second (0-59).
// Outputs: Continuously updated time displayed on the screen.

int main() {
    int h, m, s, a, err;
    err = 0;
    a = 0;

    while (err == 0) {
        cout << "Enter Hour: " << endl;
        cin >> h;
        cout << "Enter Minute: " << endl;
        cin >> m;
        cout << "Enter Seconds: " << endl;
        cin >> s;
        if (h < 24 && m < 60 && s < 60) {
            err++;
        } else {
            
            cout << "\033[2J\033[1;1H";
        }
    }

    while (a == 0) {
        
        cout << "\033[2J\033[1;1H";
        cout << h << ":" << m << ":" << s << endl;

        sleep(1);  

        s++;

        if (s > 59) {
            s = 0;
            m++;
        }

        if (m > 59) {
            m = 0;
            h++;
        }

        if (h > 23) {  
            h = 0;
        }
    }

    return 0;
}
