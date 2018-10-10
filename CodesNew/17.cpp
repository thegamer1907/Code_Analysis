#include<bits/stdc++.h>
using namespace std;

#define all(v)  ((v).begin()) , ((v).end())
#define sz(v)   ((int)((v).size()))
#define f       for(int i=0;i<sz(v);++i)

typedef vector<int> vi;
int main(){
	
	int n,l,x;
	double maxD=0;
	cin>>n>>l;
	vi v;
	for(int i=0;i<n;++i){
		cin>>x;
		v.push_back(x);		
	}
	
	sort(v.begin() , v.end());
	for(int i=1;i<n;++i){
		if(maxD < v[i]-v[i-1]) maxD=v[i]-v[i-1];
	}
	double a = maxD/2;
	double b = (double) v[0];
	double c = (double) (l-(v[n-1]));
	//double d = max(a , max(b,c));
	cout<<fixed<<setprecision(10)<<max(a , max(b,c));
	
	return 0;
}