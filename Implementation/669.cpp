#include<stdio.h>

int main() {
	int n = 0, k = 0, count = 0;
	int scores[100] = {0};
	
	scanf("%i %i", &n, &k);
	
	for (int i=0; i<n; i++) {
	    scanf("%i", &scores[i]);
	}
	
	for (int i=0; i<n; i++) {
	    if (scores[i] > 0) {
	        if (i == 0) {
	            count += 1;
	        } else {
	            if (scores[i-1] > scores[i]) {
	                if (count < k) {
	                    count += 1;
	                } else {
	                    break;
	                }
	            } else {
	                count += 1;
	            }
	        }
	    } else {
	        break;
	    }
	}
	
	printf("%i", count);
	
	return 0;
}