//ID:computerbox --> Hajiyev Huseyn
#include <bits/stdc++.h>
#define FAST_READ ios_base::sync_with_stdio(0);/*cin.tie(0); cout.tie(0);*/
#define in freopen("input.txt", "r", stdin);
#define out freopen("output.txt", "w", stdout);
#define ll long long
#define debt(x,y)cout<<"#x = "<<(x)<<" and "<<"#y = "<<(y)<<endl;
#define deb(x)cout<<"#x = "<<(x)<<endl;
#define COUT(n, a) cout<< fixed << setprecision(a) << n<<endl
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl "\n"
#define arr(a,n) for(ll i=1;i<=n;i++) cout<<a[i]<<" "; cout << "\n";
#define vecc(a,n) for(ll i=0;i<n;i++) cout<<a[i]<<" "; cout << "\n";
#define CURTIME() cerr << clock() * 1.0 / CLOCKS_PER_SEC << endl
#define DTIME(ccc) __begin = clock(); ccc; cerr<<"Time of work = "<<(clock()-__begin)/CLOCKS_PER_SEC<<endl;
#define MAXN 200010

using namespace std;

vector<string>passwords;
string password;
string word;
ll n;

int main(){
FAST_READ;
cin>>password;
cin>>n;
for(ll i=1;i<=n;i++)
{
	cin>>word;
	passwords.pb(word);
}


sort(all(passwords));


if(binary_search(all(passwords),password)){cout<<"YES"<<endl;return 0;}

for(ll i=0;i<n;i++)
{
	string parol=passwords[i];
	if(parol[1]==password[0])
	{
		for(ll j=0;j<n;j++)
		{
			string parolt=passwords[j];
			if(parolt[0]==password[1])
			{
             cout<<"YES"<<endl;
             return 0;
			}
		}
	}
}


cout<<"NO"<<endl;

return 0;
} 