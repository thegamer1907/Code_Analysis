/**
 *    author:  Moamen
 *    created: 5.10.2017 - 9.45 AM
**/
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(v) ((v).begin()), ((v).end())
#define clr(v,d ) memset(v, d, sizeof(v))
typedef long long ll;
int h,m,s;
int t1,t2;
int g[100000];

void update(int x){
	if (x>=t1&&x<t2)
		g[1]=0;
	else
		g[0]=0;
}
int main()
{
   fast
  cin>>h>>m>>s;
	if (h==12)
		h=0;
	cin>>t1>>t2;
	if (t1>t2)
		swap(t1,t2);
	g[0]=g[1]=1;
	update(h);
	update(m/5);
	update(s/5);

	if (g[0]||g[1])
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
    return 0;
}
