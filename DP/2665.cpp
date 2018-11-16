/*
        " If it's not working, it's a pause and not a stop. "
        
        Code By:
            Abhinav
            CSE, NIT Patna
            2k15
        Masters_Abh on Hackerrank,Codeforces & SPOJ, mastersabh on Codechef
*/
#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define ulint unsigned long long int
#define lint long long int
#define mp make_pair
#define pb push_back
#define f(x) for(lint i=0;i<x;i++)
#define fj(x) for(lint j=0;j<x;j++)
#define mod 1000000007
#define F first
#define S second
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
lint f[15];

void fac(){
    f[0]=1;
    f[1]=1;
    for(lint i=2;i<12;i++){
        f[i]=f[i-1]*i;
    }
}


lint C(lint a,lint b){
    return f[a]/(f[b]*f[a-b]);
}


int main(){
    faster;
    string a,b;
    cin>>a>>b;
    lint pa=0,pb=0;
    fac();
    lint l=a.length();
    f(a.length()){
        if(a[i]=='+'){
            pa++;
        }
    }
    lint q=0;
    f(b.length()){
        if(b[i]=='+'){
            pb++;
        }
        if(b[i]=='?'){
            q++;
        }
    }
    
    if(q==0){
        if(pa==pb){
            cout<<fixed<<setprecision(12)<<1.0;
        }
        else{
            cout<<fixed<<setprecision(12)<<0.0;
        }
    }
    else{
        if(pa>pb){
            if(pb+q<pa){
                cout<<fixed<<setprecision(12)<<0.0;
                return 0;
            }
            lint need = pa-pb;
            cout<<fixed<<setprecision(12)<<C(q,need)*1.0/pow(2,q);
        }
        else if(pa==pb){
                cout<<fixed<<setprecision(12)<<1.0/pow(2,q);
        }
        else{
                cout<<fixed<<setprecision(12)<<0.0;
                return 0;
        }
    }
    
    return 0;
}

