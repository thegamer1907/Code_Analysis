//
//  main.cpp
//  Problem Solver
//
//  Created by Majd Ajaj on 1/5/18.
//  Copyright © 2018 Majd Ajaj. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <set>
#include <map>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#import <cstring>
using namespace std;

int k;

bool check(int num){
    int sum = 0;
    while(num){
        sum += num%10;
        num/=10;
    }
    return sum == 10;
}

int main() {
    cin>>k;
    int acc = 0;
    int i = 0;
    while(1){
        acc += check(i);
        if (acc == k) return cout<<i,0;
        i++;
    }
}
