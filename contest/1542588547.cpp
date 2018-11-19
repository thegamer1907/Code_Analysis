#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define f first
#define s second
#define pii pair<int,int>
#define vii vector<pair<int,int> >n
#define si stack<int>
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);

    string st,x;
    cin>>st;
    int fl1 = 0,fl2 = 0,fl3 = 0,fl4 = 0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        if(st[0]==x[0] && st[1]==x[1]) fl1 = 1;
        if(st[0]==x[1]) fl2 = 1;
        if(st[1]==x[0]) fl3 = 1;
    }
    if(fl1 || (fl2 && fl3))
        cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}