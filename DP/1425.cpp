#include <bits/stdc++.h>
using namespace std;

int a[110];

int main(){
    int n;
    cin>>n;
    int trenutna=0;
    int max=0;
    int br=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1) {trenutna--; br++;}
        else trenutna++;
        if(trenutna<=0)  trenutna=0;
        if(trenutna>max)  max=trenutna;
    }
    if(br==n) cout<<br-1;
    else cout<<br+max;
    
return 0;
}