#include <bits/stdc++.h>
using namespace std;
#define fl(i,a,n) for (int i=a;i<n;i++)
#define rfl(i,a,n) for (int i=n-1;i>=a;i--)
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
typedef long long ll;
typedef pair<int,int> PII;
const ll mod=1000000007;
template <typename T> T gcd(T a, T b) { return b != 0 ? gcd(b, a % b) : a; }
/*std::cout << std::fixed;
std::cout << std::setprecision(2);*/
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    string s;
    cin >> s;
    int n;
    cin >> n;
    string t;
    int flag1=0,flag2=0;
    while(n--)
    {
    	cin >> t;
    	if(s==t){
    		flag1=1;
    		flag2=1;
    	}
        if(t[1]==s[0])
        {

        	flag1=1;
        }
        if(t[0]==s[1])
        {
        	flag2=1;
        }
    }
    if(flag1==1&&flag2==1)
    {
    	cout << "YES";
    }
    else
    {
    	cout << "NO";
    }
    return 0;
}
