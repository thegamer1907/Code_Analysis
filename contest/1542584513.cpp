#include <bits/stdc++.h>
using namespace std;

int main(){
	int h, m, s, t1, t2;
	cin>>h>>m>>s>>t1>>t2;
	double mi = m/5.0;
	double si = s/5.0;
	if(t1 == 12) t1 = 0;
	if(t2 == 12) t2 = 0;
	if(h == 12) h = 0;
	// cout<<h<<mi<<si<<endl;
	if(t1>t2) swap(t1, t2);
	if((h>=t1 and h<t2) or (si>=t1 and si<t2) or (mi>=t1 and mi<t2)){
		if((h>=t2 or h<t1) or (si>=t2 or si<t1) or (mi>=t2 or mi<t1)){
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;
	return 0;
}