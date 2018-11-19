#include <iostream>
#include <string>
using namespace std;

int main() {
    char a, b;
    string s, w;
    int c, flaga = 0, flagb = 0;

    cin >> s;
    a = s[0];
    b = s[1];

    cin >> c;
    for (int i = 0; i < c; i++) {
        cin >> w;
        if (w[0] == a && w[1] == b) {
                flaga = 1;
                flagb = 1;
        }
        else {
            if (w[0] == b) {
                flagb = 1;
            }
                if (w[1] == a) {
                flaga = 1;
            }
        }
    }
    if (flaga == 1 && flagb == 1) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}

 	  						 		 					 		  	 	  	