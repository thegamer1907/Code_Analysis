/*
Beneath this mask there is more than flesh.
Beneath this mask there is an IDEA.
Mr. Creedy, and ideas are bulletproof.
-V for Vendetta
*/
 

#include <bits/stdc++.h>
//#include "stdc++.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <fstream>
#include <ctime>
#include <stdio.h>
#include <ctype.h>
#include <string>
#include <algorithm>
using namespace std ;
 
#define LL long long
#define si(X) scanf("%d",&X)
#define si2(X,Y) scanf("%d %d",&X,&Y) 
#define sl(X) scanf("%lld",&X)
#define sl2(X,Y) scanf("%lld %lld",&X,&Y)
#define pi(X) printf("%d ",X)
#define pl(X) printf("%lld ",X)
#define pin(X) printf("%d\n",X)
#define pln(X) printf("%lld\n",X) 
#define pb push_back
#define mp make_pair 
#define rep(i,n) for(int i = 0 ; i < n ; i++)
#define repL(i,a,b) for(int i = a ; i <= b ; i++)
#define repR(i,a,b) for(int i = a ; i >= b ; i--)
#define fast_output ios_base::sync_with_stdio(0); cin.tie(0)
#define ff first 
#define ss second 
#define debug(x) cerr << #x << " = " << x << endl
#define flush fflush(stdout)  
#define mms(x) memset(x,0,sizeof(x))

int main(){
	int n, m ;
	si2(n,m) ;
	vector<int> a(n) ;
	int maxn = 0 ;
	int counter = 0 ;
	int ans1, ans2 ;
	rep(i,n){
		si(a[i]) ;
		maxn = max(a[i], maxn) ;
		counter += a[i] ;
	}
	int mean = counter+m ;
	if(mean%n == 0) mean = mean/n ;
	else mean = mean/n+1 ;
	if(mean > maxn) ans1 = mean ;
	else ans1 = maxn ;
	ans2 = maxn+m ;
	pi(ans1) ; pin(ans2) ;
	return 0 ;
}