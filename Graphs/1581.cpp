#include<bits/stdc++.h>
#define pb push_back
#define pf push_front
#define ll long long
using namespace std;
ll int arr[10000000], n, a, b, c, d, m, k, ans, ans2;
string s, s1, s2, s3, s4, s5;
float  f, f1, f2, f3, f4;
char   ch, ch1, ch2, ch3, ch4;
vector < pair < int , int > > p, p1;
deque  < int  > dq , dq1, dq2;
int main()
{
    cin>>n>>m;
    for(int i=1; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=1; i<=n;)
    {
        i+=arr[i];
        if(i==m)
        {
            cout<<"YES";
            return 0;

        }
        if(i>m)
        {
            cout<<"NO";
            return 0;
        }
    }
}
