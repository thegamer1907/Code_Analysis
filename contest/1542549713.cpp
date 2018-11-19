#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int h,m,s,ini,nex;
	cin>>h>>m>>s>>ini>>nex;
	h=(h*(30))%360;
	m=(m*6);
	s=(s*6);
	ini=(ini*30)%360;
	nex=(nex*30);
	int sum=ini+nex;
	ini=ini>nex ? nex:ini;
	nex=sum-ini;
	//cout<<h<<" "<<m<<" "<<s<<" "<<ini<<" "<<nex<<endl;
	if(((h<nex && h>=ini) && (m<nex && m>=ini) && (s<=nex && s>=ini)) || ((h>=nex || h<ini) && (m>=nex || m<ini) && (s>=nex || s<=ini) ))
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}