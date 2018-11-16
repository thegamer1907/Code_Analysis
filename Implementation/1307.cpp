/*BISMILLAHI TAWAKKALTU ALALLAH*/
/*There is no god without ALLAH
and Hazrat Muhammad Sallallahu Alihi Oasallam is The Messenger of ALLAH*/

#include <bits/stdc++.h>
using namespace std;

#define Y() printf("YES\n")
#define N() printf("NO\n")
#define lli long long int
#define ull unsigned long long int
#define dou double
#define rt return 0;

int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);

    lli b,c,d,e,g,h,l,m,n,o,p,q,r,t,u,w,x,y,z;
    lli i,j,ct=0,f=0,k=0,max=0;
    lli A,B,C,D,E,F,G,H,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z;
    char ch,ch1,ch2;

    dou d1,d2,d3;
    string s,s1;

    cin>>n>>m>>s;
    int a[100000];

    vector<int> v,v1;
    vector<int>::iterator I;

    while(1){
        if(ct==m)
        break;
        for(i=0;i<n-1;i++){
            if(s[i]=='B'&&s[i+1]=='G'){
                ch=s[i];
                s[i]=s[i+1];
                s[i+1]=ch;
                i++;
            }
        }
        ct++;
    }

    cout<<s;
    rt;
}



