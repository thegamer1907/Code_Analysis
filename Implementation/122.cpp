#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;
typedef long long ll;ll a,b;
ll t=1;
vector<ll>get(vector<ll>v){
	vector<ll>ans;
	for(int i=0;i<v.size();i+=2)
	{
		if(v[i+1]==a||v[i+1]==b){
			if(v[i]==b||v[i]==a)
			{
				cout<<t;
				exit(0);
			}
			ans.push_back(v[i+1]);
		}
		else
			ans.push_back(v[i]);
	}
	return ans;
}
int main(){
	ll n;
	cin>>n;
	vector<ll>s(n);
	s[0]=1;
	for(int i=1;i<n;i++)
		s[i]=i+1;
	
	cin>>a>>b;
	for(int i=1;i<n;i++){
		if(s.size()==2)
		{
			cout<<"Final!";
			return 0;
		}
		s=get(s);
		t++;
	}
	return 0;
}
