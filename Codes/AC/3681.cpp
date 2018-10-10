#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a[3] = {0, 0, 0};
ll n[3], p[3];
ll r;
bool check1(ll tmp[]){
	for(int i=0; i<3; i++){
		if(tmp[i]<a[i]){
			return false;
		}
	}
	return true;
}
bool check(ll val){
	//cout<<val<<endl;
	ll tmp[3];
	for(int i=0; i<3; i++){
		tmp[i]=n[i];
	}
	int count = 0;
	while(check1(tmp)){
		for(int i=0; i<3; i++){
			tmp[i]-=a[i];
		}
		count++;
	}
	if(count>=val){
		return true;
	}
	val-=count;
	ll c[3];
	ll sum = 0;
	for(int i=0; i<3; i++){
		c[i] = (val*a[i]-tmp[i])*p[i];
		sum+=max((ll)0, c[i]);
	}
//	cout<<sum<<" "<<val<<endl;
	return sum<=r;
}

int main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    cin>>str;
    int l = str.length();
    for(int i=0; i<l; i++){
    	if(str[i]=='B'){
    		a[0]++;
		}else if(str[i]=='S'){
			a[1]++;
		}else{
			a[2]++;
		}
	}
	for(int i=0; i<3; i++){
		cin>>n[i];
	}
	for(int i=0; i<3; i++){
		cin>>p[i];
	}
	cin>>r;
	ll l1 = 0, r1 = 2e12;
	while(l1<r1){
		ll mid = (r1-l1+1)/2+l1;
		if(check(mid)){
			l1 = mid;
		}else{
			r1 = mid-1;
		}
	}
	cout<<l1<<endl;
}