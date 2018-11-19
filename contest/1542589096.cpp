#include <bits/stdc++.h>
using namespace std;
double h, m, s, t1, t2;
int main(){
	cin>>h>>m>>s>>t1>>t2;
	h+=m/60+s/60/60;
	if(h>12)h-=12;
	m=(m+s/60)/60*12;
	s=s/60*12;
	bool ok=false;
	if(t1>t2){
		swap(t1, t2);
	}
	bool tag=true;
	if((h>=t1&&h<=t2)||(m>=t1&&m<=t2)||(s>=t1&&s<=t2))tag=false;
	if(tag)ok=true;
	tag=false;
	if((h>=t1&&h<=t2)&&(m>=t1&&m<=t2)&&(s>=t1&&s<=t2))tag=true;
	if(tag)ok=true;
	if(ok)printf("YES\n");
	else printf("NO\n");
}

