#include<bits/stdc++.h>
    using namespace std;
    typedef long long LL;
    const int N = 1e5 + 10;
    int a[N];
    int b[N];
    LL sum;
    int n;
    int main() {
    	scanf("%d", &n);
    	sum = 0;
    	int cnt = 0;
    	for (int i = 1; i <= n; i++) {
    		scanf("%d", &a[i]);
    		sum = sum + a[i];
    	}
    	sort(a + 1, a + n + 1);
    	int flag = 0;
    	int maxx = 0;
    	int z = 0;
    	int ff=0;
    	a[0]=-1;
    	for (int i = 1; i <= n; i++) {
    		if (a[i] == a[i - 1])
    			cnt++;
    		else if(a[i]-a[i-1]==1){
                    if(cnt>=2)maxx=3;
                    else{
                        for(int j=i+1;j<=n;j++){
                            if(a[j]==a[i]){
                                    maxx=3;
                                    break;
                            }
                        }

                    }
                    cnt = 1;
    		}
    		else cnt=1;
    		if (cnt == 2)flag++;
    		if (a[i] == 0)z++;
    		maxx = max(maxx, cnt);
    		if(maxx>=3)break;
    	}
    	if (maxx >= 3) {
    		printf("cslnb\n");
    	}
    	else if (z >= 2) {
    		printf("cslnb\n");
    	}
    	else if (flag > 1) {
    		printf("cslnb\n");
    	}
    	else if (sum == 0) {
    		printf("cslnb\n");
    	}
    	else if (sum == 1 && n > 1) {
    		printf("cslnb\n");
    	}
    	else if (sum == 2 && n == 3) {
    		printf("cslnb\n");
    	}
    	else {
    		int t = (n - 1)*n / 2;
    		if ((sum - t) % 2)printf("sjfnb\n");
    		else printf("cslnb\n");
    	}
    	return 0;
    }