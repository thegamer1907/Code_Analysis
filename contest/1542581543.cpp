#include <bits/stdc++.h>
using namespace std;
#define lld long long int

int main()
{
	double h,m,s,t1,t2,t3,h1,m1,s1;
	cin >> h>>m>>s>>t1>>t2;
	if(h==12) h = 0;
	if(t1==12) t1 = 0;
	if(t2==12) t2 = 0;
	t1 =t1*30;
	t2 =t2*30;
	if(t1>t2){
		double k;
		k=t1;
		t1=t2;
		t2=k;
		
	}
		t3=360+t1;
		s1=s*6;
		m1= 6*m + s1/60;
		h1 = h*30 + m1/60;
		if(((t1<s1&&s1<t2)||(t1<m1&&m1<t2)||(t1<h1&&h1<t2))&&((((t2<s1&&s1<360)||(t2<m1&&m1<360)||(t2<h1&&h1<360)) ||((0<=s1&&s1<t1)||(0<=m1&&m1<t1)||(0<=h1&&h1<t1))))) cout << "NO";
		else cout << "YES";
	return 0;
}