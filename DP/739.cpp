#include"bits/stdc++.h"
using namespace std;
long long n,p,q,k,x;
string s;
int main()
{
    cin>>s;
    cin>>n;
    k=s.size();
    int b[k]={0};
    for(int i=1;i<k;i++){
        if(s[i]==s[i-1]){
            b[i]=x+1;
            x=b[i];
        }
        else
            b[i]=x;
    }
    for(int i=0;i<n;i++){
            cin>>q>>p;
        cout<<b[p-1]-b[q-1]<<"\n";
    }
    return 0;
}
