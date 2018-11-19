//satyaki3794
#include <bits/stdc++.h>
#define ff first
#define ss second
#define pb push_back
#define MOD (1000000007LL)
#define LEFT(n) (2*(n))
#define RIGHT(n) (2*(n)+1)
 
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;
 
ll pwr(ll base, ll p, ll mod=MOD){
ll ans = 1;while(p){if(p&1)ans=(ans*base)%mod;base=(base*base)%mod;p/=2;}return ans;
}


ll gcd(ll a, ll b){
    if(b == 0)  return a;
    return gcd(b, a%b);
}


const int MAXLEN = 14;
int n;
bool present[202][MAXLEN+1][(1<<MAXLEN)+2];
string first15[10005], last15[100005];


int main(){

	cin>>n;
	for(int i=1;i<=n;i++){
		
		string str;
		cin>>str;

		int l = (int)str.length();

		first15[i] = "";
		for(int j=0;j<min(l, MAXLEN);j++)
			first15[i] += str[j];


		last15[i] = "";
		for(int j=max(0, l-MAXLEN);j<l;j++)
			last15[i] += str[j];

		for(int j=0;j<l;j++){
			int temp = 0;
			for(int k=j;k<min(l, j+MAXLEN);k++){
				temp = temp*2 + (str[k]-'0');
				present[i][k-j+1][temp] = 1;
	// if(i == 1)	cout<<"fuck "<<j<<" "<<k<<" "<<temp<<endl;
			}
		}
	}

	int m, idx = n;
	cin>>m;
	while(m--){

		idx++;
		int a, b;
		cin>>a>>b;

		for(int len=1;len<=MAXLEN;len++)
			for(int i=0;i<(1<<MAXLEN);i++){
				present[idx][len][i] = present[a][len][i] | present[b][len][i];
			}

		string str = last15[a] + first15[b];
		int l = (int)str.length();
		for(int j=0;j<l;j++){
			int temp = 0;
			for(int k=j;k<min(l, j+MAXLEN);k++){
				temp = temp*2 + (str[k]-'0');
				present[idx][k-j+1][temp] = 1;
			}
		}

		str = first15[a] + first15[b];
		l = (int)str.length();
		first15[idx] = "";
		for(int j=0;j<min(l, MAXLEN);j++)
			first15[idx] += str[j];


		str = last15[a] + last15[b];
		l = (int)str.length();
		last15[idx] = "";
		for(int j=max(0, l-MAXLEN);j<l;j++)
			last15[idx] += str[j];

		int ans = 0;
		for(int len=1;len<=MAXLEN;len++){
			bool ok = true;
			for(int i=0;i<(1<<len);i++)
				if(!present[idx][len][i]){
					ok = false;
					break;
				}
			if(!ok)	break;
			ans = len;
		}

		cout<<ans<<endl;
	}

// cout<<"first15: ";for(int i=1;i<=idx;i++)	cout<<first15[i]<<" ";cout<<endl;
// cout<<"last15: ";for(int i=1;i<=idx;i++)	cout<<last15[i]<<" ";cout<<endl;

// cout<<"\ncnt:\n";
// for(int i=1;i<=idx;i++){
// 	cout<<i<<endl;
// 	for(int len=1;len<=2;len++){
// 		cout<<"length "<<len<<endl;
// 		for(int j=0;j<(1<<len);j++)	cout<<present[i][len][j]<<" ";cout<<endl;
// 	}cout<<endl;
// }

	return 0;
}






