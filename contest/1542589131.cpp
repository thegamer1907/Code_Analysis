#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define pb push_back
typedef long long ll;
#define vi vector<int>
#define pi pair<int,int> 
#define vpi vector<pair<int,int> > 
#define M 1000000007
#define INF 1000000009
int gcd(int a,int b) {
	if(a==0) return b;
	return gcd(b%a,a);
}
typedef vector< vector<int >  > matrix;
int main() {
        int n;
        string s;
        cin>>s;
        cin>>n; 
        int i;
        char a=s[0];
        char b=s[1];
        int f1=0,f2=0;
        int f3=0;
        for(i=0;i<n;i++) {
        	string r;
        	cin>>r;
        	if(f3) continue;
        	if(r[0]==a&&r[1]==b||(r[0]==b&&r[1]==a)) {f3=1;}
        	if(r[1]==a) {f1=1;} 
        	if(r[0]==b) {f2=1;}
        	if(f1&&r[0]==b) {f3=1;}
        	if(f2&&r[1]==a) {f3=1;}
        }
        if(f3)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl; 
	return 0;		
}