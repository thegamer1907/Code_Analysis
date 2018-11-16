#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
const int maxn=1e5+100;

int n,k;
int ge(int n)
{
    int res=0;
    while(n)
    {
        res+=5*n;
        n--;
    }
    return res;
}

int main()
{
    cin>>n>>k;
    for(int i=n;i>=0;i--)
    {
        int num=ge(i)+k;
        if(num<=240)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    return 0;
}
