#include<bits/stdc++.h>
using namespace std;
int n,m,s,t1,t2;
bool f1,f2;
signed main(){
	cin>>n>>m>>s>>t1>>t2;if (t1>t2)swap(t1,t2);t1*=5;t2*=5;
	if (n*5>=t1&&n*5<t2)f1=true;else f2=true;
	if (m>=t1&&m<t2)f1=true;else f2=true;
	if (s>=t1&&s<t2)f1=true;else f2=true;
	if (f1&&f2)cout<<"NO"<<endl;else cout<<"YES"<<endl;
}