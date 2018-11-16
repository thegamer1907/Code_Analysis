#include<bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back
#define F first
#define S second
#define ll long long
#define ld long double

int main(){
//	freopen("input.txt" , "r" , stdin);
//	freopen("output.txt" , "w" , stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n , a , b;
	cin >> n >> a >>b;
	int x = 2 , m = 1;
	while (n != x) {
        x = x * 2;
        m++;
	}
	x = m;
	while (m > 1) {
        if (a <= n / 2 && b <= n / 2){
            m--;
            n = n / 2;
        }
        else if (a > n /  2 && b > n / 2 ) {
            m--;
            a -= n / 2;
            b -= n / 2;
            n = n / 2;
        }
        else if ((a <= n / 2 && b > n / 2)||(a > n/ 2 && b <= n / 2)){
            if (x == m) {
                cout <<"Final!";
                return 0;
            }
            else {
                cout <<m;
                return 0;
            }
        }
	}
	if (x == m) {
        cout << "Final!";
        return 0;
	}
	else {
        cout << m;
	}
    return 0;
 }

