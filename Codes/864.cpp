#include <iostream>
#include <stdio.h>
#include <cmath>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;
int func(unsigned long long n, unsigned long long m){
    if(n==1)
        return 1;
    unsigned long long l = pow(2, n) - 1;
    unsigned long long mid = (l+1)/2;
    if(m==mid)
        return n;
    else if(m > mid)
        return func(n-1, m-mid);
    else if(m < mid)
        return func(n-1, m);
}
int main(){
    unsigned long long n, m;
    cin>>n>>m;
    cout<<func(n, m);
    return 0;
}