#include <bits/stdc++.h>

using namespace std;
typedef signed long long ll;
const int MX = 105;

int one[MX], zero[MX], Arr[MX];

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	//ios_base::sync_with_stdio(0);
    //cin.tie(0);
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
    	scanf("%d", &Arr[i]);
    	if(Arr[i]) one[i] = 1;
    	else zero[i] = 1;

    	if(i){
    		one[i] += one[i - 1];
    		zero[i] += zero[i - 1];
    	}
    }

    int mx = 0;
    for(int i = 0; i < n; i++){
    	for(int j = i; j < n; j++){
    		int sum = one[n - 1] - one[j];
    		if(i) sum += one[i - 1];

    		sum += zero[j];
    		if(i) sum -= zero[i - 1];
    		mx = max(sum, mx);
    	}
    }

    printf("%d\n", mx);

	return 0;
}
