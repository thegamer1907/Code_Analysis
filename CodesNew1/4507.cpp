#include "bits/stdc++.h"
using namespace std;
int main() {
        int n;
        cin>>n;
        vector<int> a;
        for(int i = 0; i < n; i++){
                int tem;
                cin>>tem;
                a.push_back(tem);
        }
        sort(a.begin(), a.end());
             int  pp = n / 2 - 1;
	     int index = pp + 1;
        int ans = 0, tem;
        for(int i = 0 ; i <= pp; i++){
		while(index < n) {
			if(a[index] >= 2 * a[i]){
				ans++;
				index++;
				break;
			}
			index++;
		}
        }
        cout<<n - ans<<endl;
}
