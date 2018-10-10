#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pr 131

string str;
int l;
ll pre[1000001], mul[1000001];

bool check(int indx){
	int l1 = indx+1;
	ll val = pre[indx]*mul[l-1];
	for(int i=1; i<l-l1; i++){
		ll val1 = pre[i+l1-1]-pre[i-1];
		val1*=mul[l-1 - i];
		if(val1==val){
			return true;
		}
	}
	return false;
}

int main(void){
	cin>>str;
	l = str.length();
	mul[0] = 1;
	pre[0] =  str[0] - 'a' + 1;
	ll val = pr;
	for(int i=1; i<l; i++){
		pre[i] = val*(str[i]-'a'+1) + pre[i-1];
		mul[i] = val;
		val *= pr;
	}
	vector<int> tracks;
	for(int i=0; i<l-1; i++){
		ll val1 = pre[i]*mul[l-1];
		ll val2 = pre[l-1]-pre[l-i-2];
		val2*= mul[i];
		if(val1 == val2){
			tracks.push_back(i);
		}
	}
	if(tracks.size()==0){
		cout<<"Just a legend\n";
		return 0;
	}
	int l1 = 0, r1 = tracks.size()-1;
	while(l1<r1){
		int mid = l1 + (r1-l1+1)/2;
		if(check(tracks[mid])){
			l1 = mid;
		}else{
			r1 = mid-1;
		}
	}
	if(check(tracks[l1])){
		string tmp = str.substr(0, tracks[l1]+1);
		cout<<tmp<<endl;
	}else{
		cout<<"Just a legend\n";
	}
}