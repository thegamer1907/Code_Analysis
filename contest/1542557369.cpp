#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	int h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	vector <pair<double,int> > vals;
	vals.push_back(make_pair(h/12.0 + m/60.0/12.0 + s/60.0/60.0/12.0 , 0));
	vals.push_back(make_pair( m/60.0 + s/60.0/60.0 , 0));
	vals.push_back(make_pair(  s/60.0 , 0));
	vals.push_back(make_pair(t1/12.0 , 1));
	vals.push_back(make_pair(t2/12.0 , 1));
	sort(vals.begin(),vals.end());
	vals.push_back(vals[0]);
	vector<int> pos;
	for(int i=0;i<6;i++) if(vals[i].second) pos.push_back(i);
	if(pos[0] == pos[1] - 1 || pos[1] == pos[2] - 1)
			cout<<"YES";
	else
			cout<<"NO";
	return 0;
}