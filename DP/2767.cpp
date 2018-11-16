#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define mt make_tuple
#define f first
#define s second

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef tuple<int, int, int> tiii;
typedef pair<double,double> pdd;
const ll mod = 998244353ll;

char str[100];
int N;
int maxDig = 0;

int main(){
    scanf("%s", str);
    N = strlen(str);
    for(int i = 0; i < N; i++){
        maxDig = max(maxDig, str[i] - '0');
    }
    printf("%d\n", maxDig);
    for(int i = 1; i <= maxDig; i++){
        bool hasFirst = false;
        for(int j = 0; j < N; j++){
            if(str[j] - '0' >= i){
                printf("1");
                hasFirst = true;
            }
            else if(hasFirst){
                printf("0");
            }
        }
        printf(" ");
    }
    printf("\n");
    return 0;
}
