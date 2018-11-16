//
//  TwoButtons.cpp
//  PrograComp
//
//  Created by Raul Ceron on 2018-09-27.
//  Copyright © 2018 Raul Ceron. All rights reserved.
//

#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int n, m;
    int red = 0, blue = 0;
    cin >> n >> m;
    
    while (m > n) {
        if (m % 2 == 0) {
            m /= 2;
            red++;
        } else {
            m++;
            blue++;
        }
    }
    if (m < n) {
        blue += abs(m - n);
    }
    cout << (red + blue) << endl;
    return 0;
}
