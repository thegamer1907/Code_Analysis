#include<bits/stdc++.h>
using namespace std;

int n,m;

bool check(int x)
{
    int ans=0;
    while(x)
    {
        ans+=x%10;
        x/=10;
    }
    return ans==10;
}

int main()
{
    int n;
    cin>>n;
    int i=18;
    int num=0;
    while(num<n)
    {
        i++;
        num+=check(i);
    }
    cout<<i<<endl;
    return 0;
}
