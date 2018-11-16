#include <bits/stdc++.h>
using namespace std;
int n,t;
int v[30010];
void citire(){
    cin>>n>>t;
    v[1]=1;
    for(int i=1,x;i<n;i++){
        cin>>x;
        if(v[i])
        v[i+x]++;
    }
}
int main()
{
    citire();
    if(v[t])cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
