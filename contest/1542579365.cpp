#include<bits/stdc++.h>

#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define fi first
#define se second
#define sz size
#define pb push_back
#define mp make_pair
#define bg begin
#define nd end
using namespace std;

#define int long long

const int maxn = 100003;
const int maxk = 1003;

int tmp[5];
int n,k;
map<int,int> hs;

int convert(){
	int ret = 0;
	for(int i=0;i<k;i++){
		ret+=(1<<i)*tmp[i];
	}
	return ret;
}

bool diff(int a,int b,int k){

	for(int i=0;i<k;i++){
		if(((1<<i)&a)&&((1<<i)&b)){
			return 0;
		}
	}
	return 1;
}

vector<int> pos;

int32_t main(){

	#ifndef ONLINE_JUDGE
	freopen("input.in","r",stdin);
	#endif

	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> n >> k;
	bool found = false;
	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++){
			cin >> tmp[j];
		}
		int num = convert();
		if(hs.find(num)==hs.end()){
			hs[num] = 1;
			pos.pb(num);
		}
	}
	bool cool = false;
	if(hs.find(0)!=hs.end()){
		cool = true;
	}
	else{
		for(int i=0;i<pos.size()-1;i++){
			for(int j=i+1;j<pos.size();j++){
				if(diff(pos[i],pos[j],k)){
					cool = true;
				}
			}
		}
	}
	if(cool){
		cout << "YES" << '\n';
	}
	else{
		cout << "NO" << '\n';
	}




	return 0;
}