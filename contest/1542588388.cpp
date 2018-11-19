#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;
typedef vector<int>   vi;
typedef vector<long long> vll;
typedef vector<pair<int,int> > vii;
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pq priority_queue
#define sf1(x) scanf("%d",&x)
#define sf2(x,y) scanf("%d %d",&x,&y)
#define sf3(x,y,z) scanf("%d %d %d",&x,&y,&z)
int inf = (1e9) + 7;

int main(){

	double total = 12*60*60.0;
	int hh,mm,ss;
	sf3(hh,mm,ss);
	int source, target;
	sf2(source,target);

	double angle_s = ss/60.0;
	double angle_min = (mm*60 + ss)/(60*60.0);
	double angle_h = ((hh % 12) *60*60  + mm*60 + ss)/(total);

	double ang1 = source/12.0;
	double ang2 = target/12.0;


	vector<pair<double,int> > v;
	v.pb(mp(angle_s,0));
	v.pb(mp(angle_min,1));
	v.pb(mp(angle_h,2));
	v.pb(mp(ang1,3));
	v.pb(mp(ang2,4));

	sort(v.begin(),v.end());

	int pos1;
	int pos2;
	for (int i = 0; i < v.size(); ++i)
	{
		if(v[i].ss == 3)
			pos1 = i;
		if(v[i].ss == 4)
			pos2 = i;
	}

	if(pos1 == 4 and pos2 == 0 or pos1 == 0 and pos2 == 4 or abs(pos1-pos2) == 1)
		printf("YES\n");
	else
		printf("NO\n");




}