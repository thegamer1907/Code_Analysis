#include <bits/stdc++.h>
using namespace std;
char s[110];
int na,nb,nc,a=0,b=0,c=0,pa,pb,pc;
long long r;
long long ans=0;

bool can(){
	return (na>=a&&nb>=b&&nc>=c);
}
void make(){
	na-=a,nb-=b,nc-=c;
}
int main() {
	scanf(" %s",&s);
	int n=strlen(s);
	cin>>na>>nb>>nc>>pa>>pb>>pc>>r;
	for (int i=0;i<n;i++){
		a+=(s[i]=='B');
		b+=(s[i]=='S');
		c+=(s[i]=='C');
	}
	while (can()){
		make();
		ans++;
	}
	while ((na>=a&&a!=0)||(nb>=b&&b!=0)||(nc>=c&&c!=0)){
		long long amount=0;
		if (na>=a){
			na-=a;
		}
		else {
			amount+=(a-na)*pa;
			na=0;
		}
		if (nb>=b){
			nb-=b;
		}
		else{
			amount+=(b-nb)*pb;
			nb=0;
		}
		if (nc>=c){
			nc-=c;
		}
		else{
			amount+=(c-nc)*pc;
			nc=0;
		}
		if (amount<=r){
			r-=amount;
			ans++;
		}
		else{
			cout<<ans;
			return 0;
		}
	}
	long long amount=0;
	if (na>0&&a>0||nb>0&&b>0||nc>0&&c>0){
		amount=max(0,(a-na))*pa+max(0,(b-nb))*pb+max(0,(c-nc))*pc;
		if (amount<=r){
			ans++;
			r-=amount;
		}
	}
	ans+=(r/(a*pa+b*pb+c*pc));
	cout<<ans;
	return 0;
}