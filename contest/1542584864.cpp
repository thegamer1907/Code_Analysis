#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5+10;

int h,m,s,t1,t2;
double a[3];
bool judge()
{
    int s1 = 0,s2 = 0;
    for(int i=0; i<3; i++)
    {
        if(t1>a[i])s1++;
        if(t2>a[i])s2++;
    }
    if(s1==s2)return true;
    if(s1>s2)swap(s1,s2);
    if(s1==0&&s2==3)
        return true;
    return false;
}

int main()
{
    while(cin>>a[0]>>a[1]>>a[2]>>t1>>t2)
    {
        a[1] = a[1]*12.0/60.0;
        a[0] = int(a[0])%12+a[1]/60.0;
        a[2] = a[2]*12.0/60.0;
        sort(a,a+3);
        cout<<(judge()?"YES":"NO")<<endl;
    }
    return 0;
}


