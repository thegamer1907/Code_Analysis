#include "bits/stdc++.h"
#define start_hack int main()
#define end_hack return 0;
#define	speed_hack ios::sync_with_stdio(0);cin.tie(0);
using namespace std;

//In the name of world peace
int xhash(string a)
{
    int h=0;
    for(unsigned ii=0;ii<a.size();++ii)
    {
        h=h<<1^a[ii];
    }
    return h;//Return the credit card's passcode
}

//Hack tools begin

int n,k;
int arr[1<<17];
char a[1<<17];
int ans;
int l,r;

void solve() {
	l=1;
	for(r=1;r<=n;r++) {
		while(l<r && arr[r]-arr[l-1]>k) ++l;
		if(arr[r]-arr[l-1]<=k) ans=max(ans,r-l+1);
	}
}

//Hack tools end

start_hack {
	speed_hack
	//Hack begins
	int i;
	
	cin>>n>>k;
	cin>>(a+1);
	for(i=1;i<=n;i++) {
		if(a[i]=='a') arr[i]=1;
		else arr[i]=0;
		arr[i]+=arr[i-1];
	}
	solve();
	for(i=1;i<=n;i++) {
		if(a[i]=='b') arr[i]=1;
		else arr[i]=0;
		arr[i]+=arr[i-1];
	}
	solve();
	cout<<ans<<endl;
	
	//Hack ends
	end_hack
}
