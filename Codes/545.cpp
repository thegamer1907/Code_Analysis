#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>
#include<climits>
using namespace std;
typedef long long int lli;
typedef vector<int> vi;
typedef vector<long long int> vlli;
typedef pair<int,int> pii;
typedef pair<long long int,long long int> plli;
typedef vector< vi > vvi ;
typedef vector< vlli > vvlli  ;
#define fi(i,a,b) for(int i=a;i<=b;i++)
#define flli(i,a,b) for(long long int i=a;i<=b;i++)
#define bi(i,a,b) for(int i=a;i>=b;i--)
#define blli(i,a,b) for(long long int i=a;i>=b;i--)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define all(x) x.begin(),x.end()
#define sz(x) x.size()
#define pi 2*acos(0.0)
#define pb push_back
#define tr(v,it) for(typeof(v.begin()) it=v.begin();it!=v.end();it++)
#define present(v,num) (v.find(num)!=v.end())
#define cpresent(v,num) (find(v.begin(),v.end(),num)!=v.end())
#define pq priority_queue
#define mp make_pair
const int inf=INT_MAX;
const lli INF =LLONG_MAX;
const lli mod = 1e9+7;
int no(lli temp)
{
	int sum=0;
	while(temp!=0)
	{
		sum=sum+temp%10;
		temp=temp/10;
	}
	return sum;
}
int main() {
	// your code goes here
	 #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
	fast;
	int k;cin>>k;
	int count=0;
	lli current=19;
	while(count<k)
	{
		if(no(current)==10)
		{
			count++;
		}
		current++;
	}
	cout<<current-1;
	return 0;
}