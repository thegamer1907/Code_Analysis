#include <vector>
#include <iostream>
#include <map>
#include <set>
#include <algorithm>
#include <stdio.h>
#include "math.h"
using namespace std;

int n;
long long s;
int a[100010];
long long v[100010];

int main() {
	
	cin>>n>>s;
	for (int i=0; i<n; i++) scanf("%d", a+i);
	
	int lo = 0;
	int hi = n;
	
	while (lo<hi) {
		
		int mi = (lo+hi+1)>>1;
		
		for (int i=0; i<n; i++) v[i] = a[i] + (long long)mi*(i+1);
		
		partial_sort(v, v+mi, v+n);
		
		long long c = 0;
		for (int i=0; i<mi; i++) c += v[i];
		
		if (c > s) {
			
			hi = mi-1;
		}
		else {
			lo = mi;
		}
	}
	
	for (int i=0; i<n; i++) v[i] = a[i] + (long long)lo*(i+1);
		
	partial_sort(v, v+lo, v+n);
	
	long long res = 0;
	for (int i=0; i<lo; i++) res += v[i];
	
	cout<<lo<<" "<<res<<endl;
		

    return 0;

}