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

char chpass[3], ch[3];
int n;
bool first = false, second = false;

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

	cin >> chpass >> n;
	for(int i=0; i<n; i++)
    {
        cin >> ch;
        if(ch[0] == chpass[1])
            second = true;
        if(ch[1] == chpass[0])
            first = true;
        if(ch[0] == chpass[0] && ch[1] == chpass[1])
        {
            first = true;
            second = true;
        }
    }
    if(first == true && second == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
