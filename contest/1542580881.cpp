/* In The Name Of God */
#include <bits/stdc++.h>

# define xx first
# define yy second
# define pb push_back
# define pp pop_back
# define eps 1e-9
# define err(x) cerr << #x << " ::   " << x << endl;

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vint;
int a,b,c,t1,t2;
int main(){
	ios_base::sync_with_stdio (0);
	int t[5];
	for(int i=0 ; i<5 ; i++)
		cin>>t[i];
	t1 = t[3]*60*60;
	t2 = t[4]*60*60;
	c = 12*60*t[2];
	b = 12*60*t[1] + t[2];
	a = 60*60*t[0] + 60*t[1] + t[2];
	t1 %= 12*60*60;
	t2 %= 12*60*60;
	a %= 12*60*60;
	b %= 12*60*60;
	c %= 12*60*60;
	// cout<<a<<' '<<b<<' '<<c<<' '<<t1<<' '<<t2<<endl;
	if(t1 > t2)
		swap(t1,t2);
	bool mark =false,flag = false;
	for(int i=t1 ; i!=t2 ; i++)
		mark |= (i==a || i==b || i==c);
	for(int i=t2 ; i!=t1 ; i = (i+1)%(12*60*60))
		flag |= (i==a || i==b || i==c);
	if(flag && mark)
		cout<<"NO\n";
	else
		cout<<"YES\n";
	return 0;
}

