#include<bits/stdc++.h>
using namespace std;
double pi=acos(-1);
int main(){

	double h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	if(h==12)h=0;
	if(t1==12)t1=0;
	if(t2==12)t2=0;
	vector<pair<double,int> >vec;

	vec.push_back({s/60*2*pi,0});
	vec.push_back({m/60*2*pi+s/3600*2*pi,0});
	vec.push_back({h/12*2*pi+m/12/60*2*pi+s/12/60/60*2*pi,0});
	vec.push_back({t1/12*2*pi,1});
	vec.push_back({t2/12*2*pi,2});
	
	for(int i=0;i<5;i++)
		vec.push_back({vec[i].first+2*pi,vec[i].second});
	sort(vec.begin(),vec.end());
	for(int i=0;i+1<vec.size();i++){
		if(vec[i].second+vec[i+1].second==3){
			puts("YES");
			return 0;
		}
	}
	puts("NO");
	return 0;
}