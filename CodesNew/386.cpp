#include<bits/stdc++.h>
#include<stdio.h>
#define ll long long
#define pb push_back
using namespace std;
int binarySearch(int a[],int n, ll x){
    if(x < a[1]) return 0;
    if(x >= a[n]) return n;
    int i=1, j=n, mid=0;
    while(j-i>1){
        mid = (i+j)/2;
        if(a[mid]>x) j=mid;
        else i=mid;
    }
    return (a[j]>x ? i:j);
}
ll combination(int c, int i){
    if(i==0) return 1;
    else if(i==1) return c;
    else return ((c-i+1)*combination(c,i-1))/i;
}


int main(){
    int n,x;
	ll t;
	vector<int> v;
	cin >> n >> t;
	for(int i=0; i<n; i++){
	    cin >> x;
	    v.pb(x);
	}
	ll sum=0;
	int a=0, b=0, m=0;
	for(int i=0; i<n; i++){
	    sum += v[i];
	    b++;
	    while(sum > t){
	        sum -= v[a];
	        a++;
	    }
	    m = max(m, b-a);
	}
	cout << m;
}