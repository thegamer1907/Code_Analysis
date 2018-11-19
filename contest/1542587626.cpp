/// By kol9  <3 ///chut chut spisal u Tigrana//ne govorite emu

#include<bits/stdc++.h>

#define fi "a.in"
#define fo "a.out"

#define ll long long
#define ull unsigned long long
#define ld long double

#define forit(it, s) for(__typeof(s.begin()) it = s.begin(); it != s.end(); it ++)


#define pb push_back
#define all(v) v.begin(),v.end() 
#define alln(v,n) v+1,v+n+1
#define F first
#define S second
#define mp make_pair

#define LS v+v,tl,tm
#define RS v+v+1,tm+1,tr


#define bit(mask,i) (mask>>i&1)
#define change_bit(mask,i) (mask=(mask^(1<<i)))
                                



using namespace std;

const double pi = 2 * acos (0.0);
const double eps = 1e-7;
const int IINF = INT_MAX;     
const ll LINF = LLONG_MAX;
const int imod = 1e9 + 7;
const ll lmod = 1e18 + 7;
////////////////////////////////////////




  


string s[110];

int main()
{
	ios_base::sync_with_stdio (0);                                 
	cin.tie(0);
	#ifndef ONLINE_JUDGE
    freopen(fi, "r", stdin);
    freopen(fo, "w", stdout);
    #endif

    map <string,int> x;
    string n;
   
    cin >>n;
    x[n]=1;
    int m;
    cin >> m;
    int k= 0;
    for(int i= 1;  i <= m;i++)
    {
    	cin >> s[i];
    	x[s[i]]++;
    	if(s[i][0] == n[1] and k==0)k++;
    }
    if(x[n]>1){cout<<"YES";return 0;}
    if(k==0){cout<<"NO";return 0;}
    for(int i = 1;  i <= m;i++)
    {
    	if(s[i][1]==n[0]){cout<<"YES";return 0;}
    }

    cout<<"NO";



    

	return 0;
}








