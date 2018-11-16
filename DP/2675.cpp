#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int d=0;
int final_right(int fp,string s2,int pos,int i)
{
    if(i==s2.length())
    {
        d+=1;
        if(pos==fp)
            return 1;
        return 0;
    }
    
    if(s2[i]=='+')
        return final_right(fp,s2,pos+1,i+1);
    if(s2[i]=='-')
        return final_right(fp,s2,pos-1,i+1);
    return final_right(fp,s2,pos-1,i+1)+final_right(fp,s2,pos+1,i+1);
}


int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int fp=0,n;
    for(auto i: s1)
        if(i=='+')
            fp+=1;
        else
            fp-=1;
    n=final_right(fp,s2,0,0);
    
    cout<<setprecision(11)<<fixed<<(long double)n/d;
    return 0;
}