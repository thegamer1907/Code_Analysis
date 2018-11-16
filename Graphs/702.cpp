#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
int t,n;
cin>>n>>t;
string x;
cin>>x;
int j=x.size();
while(t--){
for(int i=0;i<n;i++){
    if(x[i]=='B'&&x[i+1]=='G'){
        swap(x[i],x[i+1]);
        i++;

    }
}
}


cout<<x;
    return 0;
}