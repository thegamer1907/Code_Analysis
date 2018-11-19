/************************************************************
*    In the name of God, the Merciful, the Compassionate   *                                                 *
************************************************************/
#include <bits/stdc++.h>
using namespace std;
// to reverse integer
int Reverse(int val)
{
    int rev=0,rem;
    while(val!=0)

    {
        rem=val%10;
        rev=rev*10+rem;
        val/=10;
    }
    return rev;
}
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}
bool prime (int x)
{
    int counter=0;
    for(int i=1; i<=x; i++)if(x%i==0)counter++;
    if(counter>2)return 0;
    else return 1;
}
//printf("%.10f\n",o);

int dx[4]= {-1,0,0,1};
int dy[4]= {0,-1,1,0};
char grid[101][101];
int seen[101][101];

/*bool valid (int i,int j)
{

    return i>=0&&j>=0&&i<n&&j<n;
}*/
//  static ll S=0,I=0;
/*ll binary_to_decimal(ll x)
{
  ll h ,q;
  h=x%10;x=x/10;
  q=h*pow(2,I);
  S+=q;I++;
  if(x!=0) binary_to_decimal(x);
  return S;
}*/
bool hu(int h,int u,int p)
{
    return h>=u&&h<=p;
}
template <typename T>
string to_str(T num)
{
    stringstream stream;
    stream << num;
    return stream.str();
}

int to_int(string str)
{
    int val;
    stringstream stream;
    stream << str;
    stream >> val;
    return val;
}
int bin_dec(string s)
{
    int sum1=0;
    reverse(s.begin(),s.end());
    for(int i=0;i<s.size();i++)
    {
        int o=s[i]-'0';
        sum1+=o*pow(2,i);
    }
    return sum1;
}
//printf("%.20f\n",mini);
#define ll long long
#define ull      unsigned long long
#define pll             pair<ll,ll>
#define pb push_back
#define mp make_pair
#define frp(i,n,v) for(int i=n;i<v;i++)
#define frm(i,n,v) for(int i=n;i>=v;i--)
#define LB(v1,o1) lower_bound (v1.begin(),v1.end(),o1)-v1.begin()
#define UB(v2,o2) upper_bound (v2.begin(),v2.end(),o2)-v2.begin()
//#define fi(v,h)    find(v.begin(),v.end(),h)-v.bedin()
const double pi = 3.1415926535897;
 int value,lok,n;
 ll keys[100001];
  ll flags[100001];
  int cnt=0;

int main()
{

    ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	string s1,s2,s3;
	bool b=0,b2=0,b1=0;
	cin>>s1>>n;
	while(n--)
    {
        cin>>s2;
        if(s2[0]==s1[1]&&s2[1]==s1[0])b1=1;
        if(s1==s2)b1=1;
        if(s2[1]==s1[0]&&b==0)
        {
            b=1;
            continue;
        }
        if(s2[0]==s1[1])b2=1;
    }
    if(b&&b2)cout<<"YES";
    else if (b1)cout<<"YES";
    else cout<<"NO";
}
