#include <bits/stdc++.h>

using namespace std;

int nB=0,nS=0,nC=0,hB,hS,hC,pB,pS,pC,i;
long long money,st=0,en=pow(10,13),mid,x,z=0;

bool found(){
    x=pB*max((mid*nB)-hB,z)+pC*max((mid*nC)-hC,z)+pS*max((mid*nS)-hS,z);
    //cout<<mid<<"   "<<x<<endl;
    return x<=money;
}

int main()
{
    string t;
    cin>>t>>hB>>hS>>hC>>pB>>pS>>pC>>money;
    for(i=0;i<t.length();i++){
        switch(t[i]){
            case 'B':nB++;break;
            case 'S':nS++;break;
            case 'C':nC++;
        }
    }
    while(st<en){
        mid=(en+st+1)/2;
        if(found())st=mid;
        else en=mid-1;
    }
    cout<<st;
    return 0;
}
