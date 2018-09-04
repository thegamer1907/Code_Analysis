#include<iostream>
#include<algorithm>
#include<cstdio>
#include<string.h>
#include<climits>
#include<vector>
#include<stack>
#include<set>
#include<queue>
#include<map>
#include<math.h>
using namespace std;
#define FOR(i,a,b) for(i=a;i<=b;i++)
#define sint(i) scanf("%d",&i)
#define ss(s) scanf("%s",s)
#define pii pair<int,int>
#define mp(i,j) make_pair(i,j)
#define ll long long
#define MAX 1000000000
#define MOD 1000000007
#define vi vector<int>
#define vvi vector < vi >
#define pb(i) push_back(i);
#define tr(v,it) for(it=v.begin();it!=v.end();it++)
#define DEBUG 0
ll p = 31;
vector<ll> inv_p_powers;
ll power(ll a, ll b ){
	if (b==0)
		return 1;
	ll temp = power(a,b/2);
	temp=temp*temp%MOD;
	if (b%2 == 1){
		temp=temp*a%MOD;
	}
	return temp;
}
ll find_hash(vector<ll> &prefix_hash, int i, int j) {
	if(i==0)
		return prefix_hash[j];
	ll sub_s_hash = (prefix_hash[j]-prefix_hash[i-1]+MOD)%MOD;
	sub_s_hash = sub_s_hash * inv_p_powers[i]%MOD;
	return sub_s_hash;
}
bool check(string t, int l, vector<ll> &prefix_hash) {
	int start = 1;
	int end = start + l-1;
	int maxi = prefix_hash.size()-1;

	while(1) {
		if(end>=maxi)
			break;
		ll sub_s_hash = find_hash(prefix_hash,start,end);
		if(sub_s_hash == prefix_hash[l-1])
			return true;
		start++;
		end =start + l-1;
	}
	return false;
}
int main(){
	int i;
	ll p_pow = 1;
	FOR(i,1,1000010) {
		inv_p_powers.pb(power(p_pow,MOD-2));
		p_pow = p_pow *p%MOD;
	}
	string t;
	cin>>t;
	int len = t.length();
	vector<ll> prefix_hash;
	vector<ll> suffix_hash;
	ll hash = 0;
	p_pow = 1;
	FOR(i,0,len-1) {
		hash = (hash + p_pow*((ll)(t[i]-'a'+1)))%MOD;
		prefix_hash.pb(hash);
		p_pow = p_pow*p%MOD;
	}
	FOR(i,0,len-1) {
		suffix_hash.pb(find_hash(prefix_hash,len-1-i,len-1));
	}
	vi ans_len;
	FOR(i,0,len-1) {
		if(prefix_hash[i] == suffix_hash[i]) {
			ans_len.pb(i+1);
		}
	}
	int high = ans_len.size()-1;
	int low = 0;
	while(low<high) {
		int mid = (low+high+1)/2;
		if(check(t,ans_len[mid],prefix_hash)) {
			low = mid;
		} else {
			high = mid-1;
		}
	}
	if(check(t,ans_len[low],prefix_hash)) {
		cout<<t.substr(0,ans_len[low]);
	}
	else
		cout<<"Just a legend";
	return 0;
}