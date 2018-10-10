# include <bits/stdc++.h>

# define pb push_back
# define sc second
# define fr first
# define mk make_pair

using namespace std;

int cnt = 0;
int n;

int sum (int x) {
        int res = 0;
        while (x > 0) {
                res += (x % 10);
                x /= 10;
        }
        return res;
}
main(){
        int i = 19;
        cin >> n;

        while (1) {
                if (sum(i) == 10)
                        cnt ++;
                if (cnt == n) {
                        cout << i;
                        return 0;
                }
                i += 9;
        }
}
