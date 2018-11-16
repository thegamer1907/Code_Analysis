#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pi 3.1415926535897932384
using namespace std;
void fast(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
int main(){
	fast();
	int n;
	cin>>n;
	int s1 = 0, s2 = 0, s3 = 0;
	for(int i=0;i<n;++i){
		int x,y,z;
		cin>>x>>y>>z;
		s1+=x;
		s2+=y;
		s3+=z;
	}	
	if(s1 == 0 && s2 == 0 && s3 == 0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}