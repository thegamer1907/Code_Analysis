#include<bits/stdc++.h>
using namespace std;
int main()
{
	float h,m,s,t1,t2,kt=0;
	cin>>h>>m>>s>>t1>>t2;
	if (t1>t2) swap(t1,t2);
	m+=s/60;
	h+=m/60;
	h*=5;
	t1*=5;
	t2*=5;
	if (h<=t1) kt++;
	if (m<=t1) kt++;
	if (s<=t1) kt++;
	if (h>=t2) kt++;
	if (m>=t2) kt++;
	if (s>=t2) kt++;
	if ((h>=t1&&m>=t1&&s>=t1&&h<=t2&&m<=t2&&s<=t2)||kt==3)
	cout << "YES" <<endl;
	else
	cout << "NO" <<endl;
}