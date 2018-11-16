#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
#include<vector>
#include<algorithm>
#include<math.h>
#include<stack>
#define lli long long int
#define db double
#define str string
#define ch char
#define pb push_back
#define FOR(a,n) for(i=0;i<n;i++){	cin>>a[i];}
using namespace std;

lli choose(lli n , lli m){   // (n c k)
	lli ans=0;
	lli num=1;
	lli den=1;
	for(lli i=0;i<m;i++){
		num*=(n-i);
		num=num/(i+1);
	}
	return num;
}
bool isPrime(int n)
        {

            if (n <= 1)  return false;
            if (n <= 3)  return true;

            if (n%2 == 0 || n%3 == 0)
                return false;

            for (int i=5; i*i<=n; i=i+6)
            {
                if (n%i == 0 || n%(i+2) == 0)
                   return false;
            }

            return true;
        }

lli gcd (lli a , lli b){
	if(a == 0){
		return b;
	} else {
		return gcd(b%a,a);
	}
}
int main() {
	lli i,j,k,n,m,l,t,sum=0,low=1,up=0;
	cin >> n;
	vector<lli>a(n);
	cin >> k;
	FOR(a,n);
	sort(a.begin(),a.end());
	t=n-1;
	while(low!=k){
        low++;
        t--;
	}
	sum = a[t];
	for(i=0;i<n;i++){
        if(a[i]>=sum && a[i]!=0){
            up++;
        }
	}
	cout << up << endl;
	return 0;
}
