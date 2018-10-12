#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define INF 1000000000
#define mod 1000000007
#define mp make_pair


int main(){
    int n; cin>>n;
    int k; cin>>k;
    int a[n],b=0,t=k+n-1;
    for(int i=0;i<n;i++){ 
        cin>>a[i];
        t+=a[i];
        if(b<a[i]) b=a[i];
    }
    t/=n;
    cout<<max(t,b)<<" "<<b+k<<endl;
	return 0;
}
