#include<iostream>
#include<cmath>
#include<algorithm>
#include<iomanip>
#include<string>
#include<vector>
#include<cstdio>
#include<cstring>
#include<map>
#include<set>
#include<fstream>
#include<sstream>
#include<queue>
#include<iterator>
#include<stack>

using namespace std;

typedef long long ll;
typedef short int si;
typedef pair<int,int> pii;
typedef pair<ll,int> pli;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<pli> vpli;

#define st first
#define nd second
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define REV(a) reverse(a.begin(),a.end())
#define SORT(a) sort(a.begin(),a.end())
#define inf (int)1e9
#define linf (ll)1e18

float h,m,s,t1,t2;

int main() {
		ios::sync_with_stdio(false);
		cin>>h>>m>>s>>t1>>t2;
		h*=5;
		while(h>=60)h-=60;
		t1*=5;
		while(t1>=60)t1-=60;
		t2*=5;
		while(t2>=60)t2-=60;
		if(s>0){
				m+=0.5;
		}
		if(m>0){
				h+=0.5;
		}
		while(h>=60)h-=60;
		while(m>=60)m-=60;
		while(s>=60)s-=60;
		int a=0,b=0;
		if(t1>t2)swap(t1,t2);
		if(h!=t1&&h!=t2){
				if(h>=t1&&h<=t2)a++; else b++;
		}
		h=m;
		if(h!=t1&&h!=t2){
				if(h>=t1&&h<=t2)a++; else b++;
		}
		h=s;
		if(h!=t1&&h!=t2){
				if(h>=t1&&h<=t2)a++; else b++;
		}
		if(a==0||b==0)cout<<"YES\n";
		else cout<<"NO\n";



		return 0;
}