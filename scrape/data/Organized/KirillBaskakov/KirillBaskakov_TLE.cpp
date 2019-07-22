#include <bits/stdc++.h>

using namespace std;

int k;
int str(int n) {
 return n / k + (n % k == 0 ? 0 : 1);
}

int num[200005];
int main()  {
 int n,m,del = 0,ans = 0;
 //freopen("input.txt","r",stdin);
 cin >> n >> m >> k;

 for (int i = 0; i < m; i++) {
    cin >> num[i];
 }
 sort(num,num + m);

 int temp_k = 0,temp_str = -1;
 for (int i = 0; i < m; i++) {
   num[i] -= del;
    if (temp_str != str(num[i])) {
        ans++;
        del += temp_k;
        num[i]-=temp_k;
        temp_str = str(num[i]);
        temp_k = 1;
    }
    else {
        temp_k++;
    }
 }
 cout << ans;
 return 0;
}