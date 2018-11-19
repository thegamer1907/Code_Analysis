//Vini Vidi Vici
#include <bits/stdc++.h>
using namespace std;


// Shortcuts for "common" data types in contests
typedef long long ll;
//typedef long l;


typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define fori(i,a,b) for(int (i)=(a); (i)<=(b); ++i)
#define ford(i,a,b) for(int (i)=(a); (i)>=(b); --i)
#define pb push_back
#define mp make_pair
#define eb emplace_back
#define fi first
#define se second


#define INF 1000000009 
#define NINF -1000000009
#define MOD 1000000007
#define MAX_N 200029

int main()
{
    //int i,j;
    
    ios_base::sync_with_stdio (false);

    string s;
    cin>>s;
    int n;
    string x;

    cin>>n;
    bool flag=0;
    set<char> start,e;
    fori(i,0,n-1)
    {

        cin>>x;
        if(x==s)
            flag=1;
        start.insert(x[0]);
        e.insert(x[1]);

    }

    if(!flag)
    {
        if(start.find(s[1])!=start.end() && e.find(s[0])!=e.end())
            flag=1;
    }

    if(flag)
        cout<<"YES\n";
    else
        cout<<"NO\n";

    return 0;
}