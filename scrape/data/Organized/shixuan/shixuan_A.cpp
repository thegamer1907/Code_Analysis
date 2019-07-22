#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;

long long n,m,k,p[100005],ans,now,s,kaishi,num,daan,ok,qq,ji,ming,zong;

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
		zong = 0;
		s = (p[ans] - kaishi)/k;
		if(s >= 1)
		kaishi += (s*k);
		num = 0;
		//cout<<kaishi<<" "<<ans<<endl;
	/*	for(i = kaishi;i<=kaishi+k-1;++i){
			if(ans >= m)
			break;
			if(i == p[ans]){
				//cout<<i<<endl;
				num += 1;
				++ans;
			}
			//cout<<i<<endl;
		}*/
		for(;;){
			if(p[ans] <= kaishi + k - 1&& ans < m){
				++zong;
			++num;
			++ans;}
			else
			break;
			//cout<<ans<<endl;
		}
		//cout<<num<<" "<<ans<<endl;
		++daan;
		if(ans >= m)
		break;
		ming = kaishi+k;
		while(num > 0){
			//cout<<ming<<" "<<num<<endl;
			qq = num;
			num = 0;
			ji = ans;
			for(;;){
				if(p[ans] <= ming + qq - 1&&ans < m){
					++ans;
					++num;
					++zong;
				}
				else 
				break;
			}
			if(ans != ji)
			++daan;
			ming += qq;
				if(ans >= m)
				break;
			//cout<<num<<endl;
			//cout<<daan<<" "<<num<<endl;
		}
		kaishi = kaishi+k+zong;
		//cout<<kaishi<<endl;
		//cout<<ans<<endl;
		//cout<<kaishi<<" "<<ans<<endl;
	}
	cout<<daan<<endl;
	return 0;
}