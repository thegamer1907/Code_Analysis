
#include <iostream>
#include <algorithm>
#include <string.h>
#include <math.h>
#include <vector>
#include <unordered_map>

using namespace std;

#define pb push_back
#define mp make_pair
#define ll long long
#define ull unsigned ll
#define db double
#define INF 0x3f3f3f3f
#define MOD 1000000007
#define PII pair<int, int>

int k;

int f(int x) {
    int ret=0;
    while (x>0) {
        ret+=x%10;
        x/=10;
    }
    return ret;
}

int main()
{
    scanf("%d",&k);
    for (int i=19;;i++) {
        if (f(i)==10) k--;
        if (k==0) {
            printf("%d\n",i);
            return 0;
        }
    }
}
