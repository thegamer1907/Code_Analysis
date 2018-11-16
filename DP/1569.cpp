// -> limitless <- //
#include<bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define f(i, x, n) for (int i = x; i < (int)(n); ++i)
#define lp(i, n) for (int i = 0; i < (int)(n); ++i)
#define read(n) scanf ("%d", &n)
using namespace std;
typedef unsigned long long ll;
    const int N = 1e5 + 5;
    const int mod = 1e9 + 7;
    int n;
    int arr[101];

int main()
{
    read(n);
    int z = 0, o = 0;
    lp(i, n){scanf("%d", arr + i); if(arr[i] == 1)o++; else z++;}
    int mx = -1, ans = 0, sm = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            sm++;
            if(sm > mx){
                mx = sm;
            }
        }else if(sm){
        sm--;
        }
    }
    if(z == 0){
        printf("%d\n", o - 1);
        return 0;
        }
    printf("%d\n", mx + o);
	return 0;
}

