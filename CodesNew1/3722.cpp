//
//  main.cpp
//  CF
//
//  Created by Hoang Hiep Ho on 9/28/18.
//  Copyright © 2018 Gamedex. All rights reserved.
//

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    
    int  n,m,m1,ma = 0;

    cin >> n >> m;
     int  a[n+10];
    m1=m;
    for (int i=0;i<n;i++) {
        cin >> a[i]; ma = max(ma,a[i]);
    }
  //  cout << "ma : "<< ma << endl;
    if (n==1) {
        cout << ma + m << ' ' << ma + m;
        return 0;
    }
    for (int i=0;i<n;i++){
        m -= ma - a[i];
        if (m<=0) break;
    }
    //cout << "m :" << m << endl;
    if (m<=0){
        cout << ma << ' ' << ma +m1;
    } else {
        int  remi = 0;
        if (m%n>0) remi=1;
        remi +=  ma + m/n ;
        //cout << remi << endl;
        cout << remi << ' ' << ma + m1;
    }
}
