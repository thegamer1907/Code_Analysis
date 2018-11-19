//gcc listsirkuler.c map.c player.c mesinkata.c mesinkar.c matriks.c pcolor.c point.c stackpoint.c queue.c unit.c main.c -o main
#include <bits/stdc++.h>
#define Semangat using
#define World namespace
#define Final std;
#define WF {ios_base::sync_with_stdio(0);cin.tie(0);}
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define ll long long
#define MOD 998244353

Semangat World Final

ll h,m,s,t1,t2,le,ri;

int main(){
	cin>>h>>m>>s>>t1>>t2;
	if(t1 > t2) swap(t1,t2);
	t1*=3600;
	t2*=3600;
	h=h*3600+m*60+s;
	m=(m*60+s)*12;
	s*=12*60;
	le=0;
	ri=0;
	
	if(t1<h && h<t2) le++;
	else ri++;
	
	if(t1<m && m<t2) le++;
	else ri++;
	
	if(t1<s && s<t2) le++;
	else ri++;
	// cout<<t1<<" "<<t2<<" "<<h<<" "<<m<<" "<<s<<"\n";
	if(le==0||ri==0)
		puts("YES");
	else
		puts("NO");
	
	return 0;
}