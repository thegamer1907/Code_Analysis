#include <iostream>
#include <algorithm>
#include <time.h>
#include <stack>
#include <string>
#include <cstring>
#include <cassert>
#include <cstdio>
#include <cmath>
#include <vector>
#include <queue>
#include <map>
#include <set>

using namespace std;

const int N = 100005;
const int inf = 1000 * 1000 * 100;
const int mod = 1000 * 1000 * 1000 + 7;

int n , k;
int mas[20];

int main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        int x = 0;
        for(int i=0;i<k;i++){
            int a;
            scanf("%d",&a);
            x += (1 << i) * a;
        }
        mas[x]++;
    }
    if(mas[0] > 0){
        cout<<"YES"<<endl;
        return 0;
    }
    for(int i=1;i<16;i++){
        for(int j=1;j<16;j++){
            if(i == j)continue;
            if(mas[i] > 0 && mas[j] > 0 && (i & j) == 0){
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
