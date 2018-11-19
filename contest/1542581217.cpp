#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

#define endl "\n"
#define y1 sdjkbnsdfdjkvn
#define pb push_back
#define pf push_front
#define ff first
#define ss second

const int INF=(unsigned int)(-1)/2;
const ll INFL=(unsigned ll)(-1)/2;
const ld pi=3.1415926535897932384626433832795;

const ll maxn = 1e5 + 100;
const ll maxk = 6;

ll n, k, index1 = -1, sub0011, sub0101, sub1001, sub0110, sub1010, sub1100;
int s[maxn][maxk] , rowsum[maxn]={};

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> n >> k;
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<k; j++)
        {
            cin >> s[i][j];
            rowsum[i] += s[i][j];
        }
        if(rowsum[i] == 0)
            return cout<<"YES", 0;
        if(rowsum[i] == 1)
        {
            for(ll j=0; j<k; j++)
                if(s[i][j] == 1)
                    index1 = j;
        }
    }
    if(index1 >= 0)
    {
        for(ll i=0; i<n; i++)
            if(s[i][index1] == 0)
                return cout << "YES", 0;
        return cout << "NO", 0;
    }
    if(k <= 3)
        return cout << "NO", 0;

    for(ll i=0; i<n; i++)
    {
        if(rowsum[i] == 2)
        {
            if(s[i][0]==0 && s[i][1]==0 && s[i][2]==1 && s[i][3]==1)
                sub0011++;
            if(s[i][0]==0 && s[i][1]==1 && s[i][2]==0 && s[i][3]==1)
                sub0101++;
            if(s[i][0]==1 && s[i][1]==0 && s[i][2]==0 && s[i][3]==1)
                sub1001++;
            if(s[i][0]==0 && s[i][1]==1 && s[i][2]==1 && s[i][3]==0)
                sub0110++;
            if(s[i][0]==1 && s[i][1]==0 && s[i][2]==1 && s[i][3]==0)
                sub1010++;
            if(s[i][0]==1 && s[i][1]==1 && s[i][2]==0 && s[i][3]==0)
                sub1100++;
        }
    }
    if(sub0011 > 0 && sub1100 > 0)
        return cout << "YES", 0;
    if(sub0101 > 0 && sub1010 > 0)
        return cout << "YES", 0;
    if(sub1001 > 0 && sub0110 > 0)
        return cout << "YES", 0;

    return cout << "NO", 0;
}

