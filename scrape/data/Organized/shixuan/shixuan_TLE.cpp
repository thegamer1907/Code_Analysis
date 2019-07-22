#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;

long long n,m,k,p[100005],ans,now,s,kaishi,num,daan,ok,qq,ji;

int main(){
	cin>>n>>m>>k;
	for(int i = 0;i<m;++i){
		cin>>p[i];
	}
	ans = 0;
	kaishi = 1;
	int i;
	daan = 0;
	while(ans < m){
		s = (p[ans] - kaishi)/k;
		if(s >= 1)
		kaishi += (s*k);
		num = 0;
		//cout<<kaishi<<" "<<ans<<endl;
		for(i = kaishi;i<=kaishi+k-1;++i){
			if(ans >= m)
			break;
			if(i == p[ans]){
				//cout<<i<<endl;
				num += 1;
				++ans;
			}
			//cout<<i<<endl;
		}
		//cout<<num<<" "<<ans<<endl;
		++daan;
		if(ans >= m)
		break;
		while(num > 0){
			qq = num;
			num = 0;
			now = i;
			ji = ans;
			for(i;i<=now+qq-1;++i){
				//cout<<i<<endl;
				if(ans >= m)
				break;
				if(i == p[ans]){
					++num;
					++ans;
				}
			}
			if(ans != ji)
			++daan;
				if(ans >= m)
				break;
			//cout<<num<<endl;
			//cout<<i<<" "<<daan<<" "<<num<<endl;
		}
		kaishi = i;
		//cout<<ans<<endl;
		//cout<<kaishi<<" "<<ans<<endl;
	}
	cout<<daan<<endl;
	return 0;
}