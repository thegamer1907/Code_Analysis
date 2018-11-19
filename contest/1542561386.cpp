#include <bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3fLL

#define MAXN 100000

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef set<int> si;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef map<string,int> msi;
typedef map<int,int> mi;

bool check(int a,double b,int c){
	if(b <a)b+=12;
	if(c <a)c+=12;
	return !(a<=b && b<=c);
}

int main(){
	int h,m,s,t1,t2;
	scanf("%d %d %d %d %d",&h,&m,&s,&t1,&t2);
	double m1=m,s1=s,h1=h;
	m1+=s1/(double)60;
	h1+=m1/(double)60;
	s1= s1/(double)5;
	m1= m1/(double)5;
	//printf("%lf %lf %lf %d %d\n",h1,m1,s1,t1,t2 );
	if(t1 == t2){
		printf("YES\n");
		return 0;
	}
	if((check(t1,h1,t2) && check(t1,m1,t2) && check(t1,s1,t2) )||
		(check(t2,h1,t1) && check(t2,m1,t1) && check(t2,s1,t1) ))
		printf("YES\n");
	else printf("NO\n");
	return 0;
}