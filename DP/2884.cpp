//#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>
#include <vector>
#include <limits.h>
#include <string.h>
#include <utility>
#include <set>
#include <iostream>
#include <map>
#include <bitset>
#include <queue>
#define pb push_back
#define ll long long
#define X first
#define Y second
#define maxn 1005
#define mod 999999937
using namespace std;

typedef pair<ll,ll> P;

int n;
int a[maxn],b[maxn];

int k;
int main(){
	scanf("%d%d",&n,&k);
	int zero=0;
	int pivot;
	for(int i=0;i<n;i++) {
		scanf("%d",&a[i]);
		if(a[i]==0){
			zero++;
			pivot=i;
		}
	}
	for(int i=0;i<zero;i++){
		scanf("%d",&b[i]);
	}
	if(zero>1) {
		printf("Yes");
		return 0;
	}
	if(zero==1){
		a[pivot]=b[0];
	}
	int yes=0;
	for(int i=0;i<n-1;i++){
		if(a[i]>a[i+1]) yes=1;
	}
	if(yes) printf("Yes");
	else printf("No");
	
	
	return 0;
}