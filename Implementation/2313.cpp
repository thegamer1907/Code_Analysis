#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define x first
#define y second
using namespace std;

bool compare(int a,int b)
{
    return a>b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;
    string str;
    cin>>str;

    int c =0;
    for(int i=1;i<str.length();i++)
    {
        if(str[i]==str[i-1])
            c++;
    }
    cout<<c;
}
