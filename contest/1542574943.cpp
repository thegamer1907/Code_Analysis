#include <bits/stdc++.h>
using namespace std;

// 1 Tick = 1 / 720 Small Block 

int arr[3];
int t1, t2;

inline void init() {
	for(int i = 0; i < 3; i++)
		scanf("%d", arr + i);
	scanf("%d%d", &t1, &t2);
	(arr[0] = arr[0] * 3600 + arr[1] * 60 + arr[2]) %= 43200;
	(arr[1] = arr[1] * 720 + arr[2] * 12) %= 43200; 
	arr[2] = arr[2] * 720;
	t1 *= 3600, t2 *= 3600;
}

inline int getPart(int t) {
	if(t >= arr[0] && t < arr[1])	return 1;
	if(t >= arr[1] && t < arr[2])	return 2;
	return 3;	
}

inline void solve() {
	sort(arr, arr + 3);
	puts((getPart(t1) == getPart(t2)) ? ("YES") : ("NO"));
}

int main() {
	init();
	solve();
	return 0;
}
 	  				    		 				 		  	   	 	