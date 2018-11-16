#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
#endif // ONLINE_JUDGE
    int n, a[3000], mx = 0;

    cin >> n;
    for(int i =1 ;i <= n;i++)
        scanf("%d", &a[i]);

    for(int i = 1;i <= n;i++){
        int t = i, c = 0;
        while(a[t] != -1)
            t = a[t], c++;
        mx = max(mx, c);
    }

    cout << mx + 1 << endl;
	return 0;
}
