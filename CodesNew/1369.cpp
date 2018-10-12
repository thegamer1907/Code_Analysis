#include<bits/stdc++.h>
using namespace std;
int shop[3],b[3],k[3];
long long mon;
bool check(long long bb)
{
    long long A=bb*b[0];
    long long B=bb*b[1];
    long long C=bb*b[2];
    A-=k[0];
    B-=k[1];
    C-=k[2];
    A=max(A,0LL);
    B=max(B,0LL);
    C=max(C,0LL);

    if (A*shop[0]+B*shop[1]+C*shop[2]<=mon)return 1;
    return 0;

}
int main ()
{
    string s;
    cin>>s;
    for(int i =0 ; i<s.size() ; i++)
    {
        if (s[i]=='B')b[0]++;
        if (s[i]=='S')b[1]++;
        if (s[i]=='C')b[2]++;
    }
    for(int i =0 ; i<3 ; i++)
        cin>>k[i];
    for(int i = 0 ; i<3 ; i++)
        cin>>shop[i];
        cin>>mon;
    long long lo=0 , hi=1e15 ,mid;
    while(lo<hi)
    {
        mid=lo+(hi-lo+1)/2;
        if(check(mid))lo=mid;
        else hi =mid-1;
    }
    cout<<lo;







    return 0;
}

