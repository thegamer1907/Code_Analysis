/**
 * Codeforces
 * Problem#868A
 * Accepted
 * Time: 31ms
 * Memory: 0k
 */
#include <bits/stdc++.h>
using namespace std;
typedef bool boolean;

char ss[5], buf[5];
int n; 
boolean front = false, rear = false;

inline void work() {
	scanf("%s%d", ss, &n);
	for(int i = 1; i <= n; i++) {
		scanf("%s", buf);
		if(ss[0] == buf[0] && ss[1] == buf[1]) {
			puts("YES");
			return;
		}
		if(ss[0] == buf[1])
			rear = true;
		if(ss[1] == buf[0])
			front = true;
		if(rear && front) {
			puts("YES");
			return;
		}
	}
	puts("NO");
}

int main() {
	work();
	return 0;
}
 				 	 	 	   		 		 			   					