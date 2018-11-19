///age yekam bekeshi beham is no problem ._.
#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+7;
set<int>s;

int32_t main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,k;cin>>n>>k;
	for(int i=0;i<n;i++){
		vector<int>tmp;
		int sum=0;
		for(int j=0,a;j<k;j++){
			cin>>a;
			if(a)sum+=1<<j;
			else tmp.push_back(j);
		}
		if(sum==0)return cout<<"YES",0;
		for(int msk=0;msk<(1<<tmp.size());msk++){
			int temp=0;
			for(int l=0;l<tmp.size();l++)
				if(msk&(1<<l))temp+=(1<<tmp[l]);
			if(s.find(temp)!=s.end())return cout<<"YES",0;
		}
		s.insert(sum);
	}
	cout<<"NO";
}

