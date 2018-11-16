//
//  main.cpp
//  520B
//
//  Created by Pablo César Ruíz Hernández on 9/27/18.
//  Copyright © 2018 Pablo César Ruíz Hernández. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int a, b;
    int cuenta = 0;
    cin>>a>>b;
    
    if(a==b){
        cout<<0;
        return 0;
    }
    
    if(a>b){
        //restar;
        cout<<a-b;
        return 0;
    }

    //casos a cuidar 1 y 2
    while(b>a){
        if(b%2==0){
            b/=2;
            cuenta++;
        }else{
            b++;
            cuenta++;
        }
    }

    cout<<((b-a)>0?(b-a):(a-b))+cuenta;
    return 0;
    }

