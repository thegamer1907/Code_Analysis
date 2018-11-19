/*input
3 47 0 4 9
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int h,m,s,t1,t2,c1=0,c2=0,c3=0;
	cin>>h>>m>>s>>t1>>t2;
	t1%=12;t2%=12;h%=12;
	if(t1>t2)swap(t1,t2);
	if(5*t1<s && 5*t2>s)c1=1;
	m = (60*m+s)%3600;
	if(300*t1<m && 300*t2>m)c2=1;
	h = (3600*h+m)%(3600*12);
	if(3600*t1<h && 3600*t2>h)c3=1;
	if(c1==c2 && c2==c3){
		cout<<"YES"<<endl;
	}
	
	else cout<<"NO"<<endl;
	return 0;
}