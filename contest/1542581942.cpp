#include<bits/stdc++.h>
using namespace std;
int main(){
	double h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	if(h==12)h=0;
	if(t1==12)t1=0;
	if(t2==12)t2=0;
	double hr,mr,sr,t1r,t2r;
	hr=(h*30.0+0.5*m+(1.0/120.0)*s);
	t1r=(t1*30);
	t2r=(t2*30);
	mr=(m*6.0+0.1*s);
	sr=(s*6.0);
	//cout<<hr<<" "<<mr<<" "<<sr<<" "<<t1r<<" "<<t2r<<endl;
	vector<double> v;
	v.push_back(hr);
	v.push_back(sr);
	v.push_back(t1r);
	v.push_back(t2r);
	v.push_back(mr);
	sort(v.begin(),v.end());
	for(int i=0;i<v.size()-1;i++){
		if(v[i]==t1r&&v[i+1]==t2r){
			printf("YES\n");
			return 0;
		}
		if(v[i]==t2r&&v[i+1]==t1r){
			printf("YES\n");
			return 0;
		}
	}//return 0;
	if(v[0]==t1r&&v[4]==t2r){printf("YES\n");return 0;}
	if(v[4]==t1r&&v[0]==t2r){printf("YES\n");return 0;}
	printf("NO\n");

	return 0;
}