#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[100];
    int t = 0, one = -1, two = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] == 1){
        	two = max(two-1,-1);
            t++;
        }
        else{
	if(a[i] == 0){
	    two = max(two+1,1);
	}
        }
        one = max(one,two);
    }
    cout << one + t;
    return 0;
}