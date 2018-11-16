#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>b;i--)
typedef long long int lli;
typedef vector<int> vi;
typedef map<int,int> mii;
typedef pair<int,int> pii;

int main(){
	lli n;
	cin>>n;	
	lli t;
	cin>>t;
	int pos=1,flag=1;
	int a[n];
	rep(i,0,n-1){
		cin>>a[i];
		if(pos==i+1 && flag)
			pos=i+1+a[i];
		if(pos==t && flag){
			cout<<"YES";
			flag=0;
			// break;
		}
	}
	if(flag)
		cout<<"NO";
	return 0;
} 