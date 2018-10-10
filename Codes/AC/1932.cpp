//=============================================
// Author   :   NAVPUN31
// Name     :   Naveen Punjabi
//=============================================

#include <bits/stdc++.h>
using namespace std;
#define ll          long long
#define ld          long double
#define pll         pair<ll ,ll>
#define vll         vector<ll>
#define hell        1000000007
#define INF         INT_MAX
#define MINF        INT_MIN
#define rep(i,a,b)  for(ll int i=a;i<b;i++)
#define repd(i,a,b) for(ll int i=a;i>=b;i--)
#define pb          push_back
#define bs          binary_search
#define mp          make_pair
#define all(x)		x.begin(),x.end()
#define out(x)      cout << setprecision(30) << x << " ";
#define outln(x)    cout << setprecision(30) << x << endl;
#define ret(x)      cout << setprecision(30) << x << endl; return;
#define mset(x)     memset(x, 0, sizeof(x));
#define ios         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define print(x)    rep(i,0,sizeof(x)/sizeof(x[0])){out(x[i])} outln("");
#define printv(x)   rep(i,0,(int)x.size()){out(x[i])} outln("");
#define INT_SIZE 32

ll n,m,k;
string str;


ll nums[200005];
map<ll, vector<int> > indices;

void run(){
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		cin >> nums[i];

//		if(indices[nums[i]].size()==0 && i==-1){
//			vector<int> in;
//			in.pb(i);
//			indices[nums[i]] = in;
//		}
//		else{
			indices[nums[i]].pb(i);
//		}
	}

	ll count = 0;
	for(int i = 1; i < n-1; i++){
		if(nums[i]%k != 0){
			continue;
		}

		if(indices[nums[i]/k].size()==0 || indices[nums[i]*k].size()==0){
			continue;
		}

		ll c1 = lower_bound(indices[nums[i]/k].begin(),indices[nums[i]/k].end(),i) - indices[nums[i]/k].begin();
		ll c2 = upper_bound(indices[nums[i]*k].begin(),indices[nums[i]*k].end(),i) - indices[nums[i]*k].begin();
		c2 = (ll)indices[nums[i]*k].size() - c2;

		count += c1*c2;
	}

	outln(count);
}


int main(){
    ios;
    int tests = 1;
//    cin >> tests;

    for(int i = 1; i <= tests; i++){
        run();
    }
    // string line;
    // while(getline(cin,line)){
    //    if(line.empty())
    //        break;
    //    run(line);
    // }
    return 0;
}
