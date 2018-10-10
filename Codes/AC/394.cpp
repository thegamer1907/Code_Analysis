#include <iostream>
#include<cstdio>
#include<algorithm>

using namespace std;
typedef long long ll;

const int maxn = 20000000;

int main() {
    int k;
    scanf("%d", &k);
    int cnt = 0;
    int i = 19;
    for (; i < maxn; i++) {
        int sum = 0;
        int t = i;
        while (t) {
            sum += t%10;
            t /= 10;
        }
        if (sum == 10) {
            cnt++;
        }
        if (cnt == k) {
            break;
        }
    }
    printf("%d", i);
    return 0;
}


	 		 	  	      	  	 		 	    			