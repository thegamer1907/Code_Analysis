#include<bits/stdc++.h>
#include <assert.h>
using namespace std;
#define rep(a,b,c) for(int a=b;a<=c;a++)
#define ll long long 
#define sum(a,b) a=a+b
#define mem(a, b) memset(a, (b), sizeof(a))
#define ctz(x) __builtin_ctz(x)
#define clz(x) __builtin_clz(x)
#define popcount(x) __builtin_popcount(x)
#define parity(x) __builtin_parity(x)

//=======binarysearch===========
int bs(vector<int>&a,int que){
 auto it=lower_bound(a.begin(),a.end(),que);
 if(*it==que){
    return it-a.begin();
 }
 return -1;
}
//========binarysearch=========

const int N_ = 30500;

int N, T, A[N_];



int main(){
  scanf("%d%d", &N, &T);
    for(int i = 1; i < N; i++) {
        scanf("%d", &A[i]);
    }
    A[N] = 1;
    for(int cur = 1; cur <= N; cur += A[cur]) {
        if(cur == T) return 0 & puts("YES");
    }
    
    puts("NO");
    return 0;

}