#include <iostream>
#include <algorithm>
#include <string.h>
#include <map>
#include <unordered_map>
#include <vector>
#include <stack>
#include <queue>
#include <cmath>
#include <stdlib.h>

#define MAX int(2e5)+1

using namespace std;

int main() {
    int a[MAX];
    int n, e=0, m=1e9+7;
    cin>>n;
    for (int i=1; i<=n; i++)
        cin>>a[i], m=min(m, a[i]), a[i]-=i-1;
    
    int goal=m>n?m/n*n:0;
    for(int k=0;k<2&&!e;k++)
        for (int i=1; i<=n; i++)
            if (a[i]<=goal) {
                e=i;
                break;
            } else
                a[i]-=n;

    cout<<e<<endl;
    return 0;
}

