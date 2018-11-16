#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, a, c1=0, c2=0, cmax=-1, ans;
    cin >> n;
    while(n--){
        cin >> a;
        if(a==1){
            c1++;
            if(c2>0){
                c2--;
            }
        }
        if(a==0){
            c2++;
            if(c2>cmax)
                cmax=c2;
        }
    }
    ans=c1+cmax;
    cout <<ans << endl;

    return 0;
}
