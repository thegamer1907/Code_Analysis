#include<bits/stdc++.h>
using namespace std;
const int Maxn=1e6+100;
long long k,o[Maxn],sh,maj,z[Maxn];
string s;
int main(){
	cin>>k>>s;
	s+='1';
	for(int i=0;i<=(int)s.length();i++){
		if(s[i]=='1'){
			o[sh]=i;
			if(k==0 )
				maj+=(z[sh]*(z[sh]+1))/2;
			else if(sh>=k)
				maj+=(z[sh]+1)*(z[sh-k]+1);
			sh++;
		}
		else
			z[sh]++;
	}
	
	cout<<maj;

}
