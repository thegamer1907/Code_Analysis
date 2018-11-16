/*******************I solemnly swear that I am up to no good***********************/

#include<bits/stdc++.h>
using namespace std;
#define ll long long




int main(){

	string s;cin>>s;
	ll m;cin>>m;ll l,r,c=0;
	ll a[s.size()];
	for(ll i=0;i<s.size()-1;++i){

        if(s[i] == s[i+1]) a[i] = 1;
        else a[i] = 0;
	}
	a[s.size()-1] = 0;
	ll sum[s.size()];sum[0] = a[0];
	for(ll i=1;i<s.size();++i){
        sum[i] = sum[i-1] + a[i];
	}

	while(m--){

        cin>>l>>r;
        --l,--r;
        if(l == 0)
            cout<<sum[r-1]<<endl;
        else cout<<sum[r-1] - sum[l-1]<<endl;


	}



}


/**********************************Mischief Managed****************************/
