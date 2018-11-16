#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <set>
#include <map>
#include <queue>
#include <stdio.h>
#include <stack>
#include <string>
using namespace std;

int main(){
    //ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt","w", stdout);
    int a, b, n;
    cin>>n>>a>>b;
    a--;
    b--;
    if (a>b)
        swap(a,b);
    int c = 0;
    while (!(a+1==b && a%2==0)){
        a/=2;
        b/=2;
        c++;
    }
    int p = 1, cp = 0;
    while (p!=n){
        p*=2;
        cp++;
    }
    int ans = cp - c;
    if (ans == 1)
        cout<<"Final!";
    else
        cout<<c + 1;
}
