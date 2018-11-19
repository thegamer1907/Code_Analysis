#include <bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for(int i=a;i<=b;i++)
#define MP make_pair
#define PB push_back

int main()
{
    string s;
    cin>>s;
    int n;
    cin>>n;
    int a=0;
    int b=0;
    int bor=0;
    REP(i,1,n){
        string s1;
        cin>>s1;
        if(s1==s) bor++;
        if(s1[1]==s[0]) a++;
        if(s1[0]==s[1]) b++;
    }

    if((a>0 && b>0)||(bor>0)) cout<<"YES"; else cout<<"NO";
    return 0;
}
