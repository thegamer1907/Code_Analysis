#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <cmath>
#include <map>
#include <string>
#include <stdio.h>
#include <deque>
#include <fstream>
using namespace std;

int main(){
    int n,x=0,a,b,m=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        x-=a;
        x+=b;
        m=max(m,x);
    }
    cout<<m;
}
