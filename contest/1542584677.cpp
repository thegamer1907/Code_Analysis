#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

typedef long long int llint;
typedef pair < int,int> pii;

const int N = 1e5 + 500;
const int INF = 0x3f3f3f3f;
const int MOD = 1e9 + 7;
const int K = 5;

vector < int > v;
int n,k,x,y,sol = 0;

int main(){
    scanf("%d%d",&n,&k);
    for(int i = 0;i<n;i++){
        y = 0;
        for(int j = 0;j<k;j++){
            scanf("%d",&x);
            y += (1 << j) * x;
        }
        v.push_back(y);
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    for(int i = 0;i<v.size();i++){
        for(int j = 0;j<v.size();j++){
            if(!(v[i] & v[j])) sol = 1;
        }
    }
    if(sol){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}
