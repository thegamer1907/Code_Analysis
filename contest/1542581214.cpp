#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair

typedef long long int ll;
typedef vector< pair<int,int> > vii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<long long int> vll;
typedef pair<int,int> pii;

const ll INF= ll (1e18);
const int MOD= 1e9+7;

int main()
{
  ios_base::sync_with_stdio(0);
cin.tie(0);
			double hr,m,s,time,time1,t3,hr1,min1,seco;
	cin >> hr>>m>>s>>time>>time1;
	if(hr==12)
        hr = 0;
	if(time==12)
	time = 0;
	if(time1==12)
	time1 = 0;
	time =time*30;
	time1 =time1*30;
	if(time>time1)
	{
		double ans;
		ans=time;
		time=time1;
		time1=ans;

	}
		t3=360+time;
		seco=s*6;
		min1= 6*m + seco/60;
		hr1 = hr*30 + min1/60;
		if(((time<seco&&seco<time1)||(time<min1&&min1<time1)||(time<hr1&&hr1<time1))&&((((time1<seco&&seco<360)||(time1<min1&&min1<360)||(time1<hr1&&hr1<360)) ||((0<=seco&&seco<time)||(0<=min1&&min1<time)||(0<=hr1&&hr1<time)))))
            cout << "NO";
		else
		cout << "YES";
    return 0;

}
