#include<bits/stdc++.h>
#define por(i,a,b) for(i=a;i<b;i++)
#define ll long long
#define mo 1000000007
using namespace std;

int main()
{	ll n,m,x,i,j=1;
	cin>>n;
	vector<ll>t;
	por(i,1,n+1){
		cin>>x;
		por(j,0,x){
			t.push_back(i);
		}
	}
	
	cin>>m;
	por(i,0,m){
		cin>>x;
		cout<<t[x-1]<<endl;
	}



	return 0;
}