

#include<iostream>
#include<utility>
#include<algorithm>
#include<vector>
using namespace std;
	long long n,m,a,ans;
	vector<pair<long long, bool> >s,f;
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		s.push_back(make_pair(a,0));
	}
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>a;
		f.push_back(make_pair(a,0));
	}
	sort(s.begin(),s.end());
	sort(f.begin(),f.end());
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(abs(s[i].first-f[j].first)<=1&&s[i].second==0&&f[j].second==0){
				ans++;
				s[i].second=1;
				f[j].second=1;
				break;
			}
		}
	}
	cout<<ans;
}