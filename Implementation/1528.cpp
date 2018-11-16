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

    string s;
    cin>>s;

    int c=1;
    for(int i=0;i<s.length()-1;i++)
    {
        if(s[i]==s[i+1])
            c++;
        else
            c= 1;
        if(c==7)
            break;
    }
    if(c==7)
        cout<<"YES";
    else
        cout<<"NO";
}
