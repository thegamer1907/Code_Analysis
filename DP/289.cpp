#include<bits/stdc++.h>
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define pb push_back
using namespace std;
int main(){
	int n,m;
	cin >> n;
	int a[n];
	rep(i,0,n){
		cin >> a[i];
	}
	cin >> m;
	int b[m];
	rep(i,0,m){
		cin >> b[i];
	}
	int a1[n],b1[m];
	rep(i,0,n)
		a1[i]=0;
	rep(i,0,m)
		b1[i]=0;
	sort(a,a+n);
	sort(b,b+m);
	int c=0;
	rep(i,0,n){
		rep(j,0,m){
			if(abs(a[i]-b[j])<=1 && a1[i]!=1 && b1[j]!=1){
				a1[i]=1;
				b1[j]=1;
				c++;
				break;
			}
		}
	}
	cout << c;
	
}





