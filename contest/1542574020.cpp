#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

typedef vector<int> vi;
typedef vector<vi> vvi;

typedef vector<bool> vb;
typedef vector<vb> vvb;

typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;

#define pb push_back
#define mp make_pair
#define fi first
#define se second

// ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll 

int main(){
	std::ios_base::sync_with_stdio(false);

	int h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;

	if(h == 12) h = 0;
	if(t1 == 12) t1 = 0;
	if(t2 == 12) t2 = 0;

	int p[3];
	
	p[0] = 3600*s;
	p[1] = m*3600 + s*60;
	p[2] = 5*h*3600 + m*60 + s;

	sort(p, p+3);


	t1 *= 5*3600;
	t2 *= 5*3600;

	if(t1 > t2) t1 = t1 + t2 - (t2 = t1);

	if(t1 <= p[0] && t2 <= p[0]) cout<<"YES"<<endl;
	else if(t1 >= p[0] && t1 <= p[1] && t2 >= p[0] && t2 <= p[1]) cout<<"YES"<<endl;
	else if(t1 >= p[1] && t1 <= p[2] && t2 >= p[1] && t2 <= p[2]) cout<<"YES"<<endl;
	else if(t1 >= p[2] && t2 >= p[2]) cout<<"YES"<<endl;
	else if(t1 <= p[0] && t2 >= p[2]) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}