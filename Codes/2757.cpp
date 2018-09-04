#include <bits/stdc++.h>
using namespace std;

#define speed ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long int
#define pi pair<int,int>
#define pb push_back
#define fi first
#define se second
#define inf 8e18
#define mod 1000000009

string s;
int z[1000005];

void calcz(){
	int len = s.length();
	int l = 0, r = 0;
	for(int i = 1; i < len; i++){
		if(r < i){
			l = r = i;
			while(r < len && s[r-l] == s[r])	r++;
			z[i] = r-l; r--;
		}
		else{
			int k = i-l;
			if(z[k] < r-i+1)
				z[i] = z[k];
			else{
				l = i;
				while(r < len && s[r-l] == s[r])	r++;
				z[i] = r-l; r--;
			}
		}
	}
}

signed main(){
//	freopen("input.txt","r",stdin);
	speed;
	cin>>s;
	calcz();
	int m = 0, len = s.length();
	for(int i = 1; i < len; i++){
		if(m >= len-i && z[i] == len-i)
			return cout<<s.substr(i,len-i),0;
		m = max(z[i],m);
	}
	cout<<"Just a legend";
	return 0;	
} 