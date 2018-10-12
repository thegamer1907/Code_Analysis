/* I exist*/
#include <bits/stdc++.h>
#define MOD 		1000000007
#define fo(i,a) 	for(long long int i=0;i<a;i++)
#define fo1(i,a) 	for(long long int i=1;i<a;i++)
#define fo2(i,a,b) 	for(long long int i=a;i<b;i++)
#define matrix(v,n)	std::vector<std::vector<int> > v(n,std::vector<int> (n));
#define vpi 		vector<pair<int,int> >
#define vi 			vector<int>
#define vl 			vector<ll>
#define all(v) 		v.begin(),v.end()
#define ll 			long long int
#define pb 			push_back
#define mp 			make_pair
#define fi 			first
#define se 			second
//debug
#define trace1(x)                cout << #x << ": " << x << endl;
#define trace2(x, y)             cout << #x << ": " << x << " | " << #y << ": " << y << endl;
#define trace3(x, y, z)          cout << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << endl;
#define trace4(a, b, c, d)       cout << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << endl;
#define trace5(a, b, c, d, e)    cout << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << endl;
#define trace6(a, b, c, d, e, f) cout << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << " | " << #f << ": " << f << endl;

using namespace std;


int main(){
	std::ios::sync_with_stdio(false);
	int n;
	cin>>n;
	vi v(n);
	fo(i,n)cin>>v[i];
	int i=0,j=n/2;
	sort(all(v));
	int al=0;
	vi a(n);
	while(j<n&&i<n/2){
		// trace4(v[i],i,j,v[j])
		if(v[i]*2<=v[j]){
			// a[j]=1;
			// trace2(i,j)
			i++;j++;
		}
		else{
			j++;
		}
	}
	// trace3(al,n,i)
	cout<<n-i;
	return 0;
}
    	