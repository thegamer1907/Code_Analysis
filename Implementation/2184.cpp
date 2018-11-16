#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
	
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
    freopen("output1.txt","w",stdout);
    #endif
    
    ll n,x,y,z;
    ll sx,sy,sz;
    sx=0;
    sy=0;
    sz=0;
    cin >> n;
    while(n--)
    {
    	cin >> x;
    	sx+=x;
    	cin >> y;
    	sy+=y;
    	cin >> z;
    	sz+=z;
    }
    if(sx==0 && sy==0 && sz==0)
    	cout << "YES" << "\n";
    else
    	cout << "NO" << "\n";
	return 0;
}