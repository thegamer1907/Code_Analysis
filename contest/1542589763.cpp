#include <cstdio>
#include <cstring>
#include <iostream>
#include <cstdlib>
#include <queue>
#include <stack>
#include <map>
#include <cmath>
#include <algorithm>
#include <set>
#include <vector>
//#define max(a,b) ((a) > (b) ? (a) : (b))
//#define min(a,b) ((a) < (b) ? (a) : (b))
#define loop(i,a) for(int i = 0;i < a;i++)
#define lpp(i,a) for(int i = 1;i <= a;i++)
#define mem(a,b) memset(a,b,sizeof(a))
#define ll __int64
//#define ll long long
#define eps 1e-8
#define zero(x) (((x)>0?(x):-(x))<eps)
int epsjudge(double a){
  if (zero(a))
    return 0;
  return a > 0 ? 1 : -1;
}
int gcd(int a, int b){ return a == 0 ? b : gcd(b % a, a); }
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("datain.txt","r",stdin);
    freopen("dataout.txt","w",stdout);
#endif
    char a , b;
    while(cin >> a >> b){
        int ans1 = a - 'a';
        int ans2 = b - 'a';
        int n,flag = 0, s1[150] = {0}, s2[150]= {0};
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> a >> b;
            s1[i] = a - 'a';
            s2[i] = b - 'a';
        }
        for(int i=0;i<n;i++){
            if(s1[i]==ans1&&s2[i]==ans2) flag = 1;
        }
        for(int i=0;i<n;i++){
            if(s2[i]==ans1){
                for(int j=0;j<n;j++){
                    if(s1[j]==ans2) flag = 1;
                }
            }
        }
        if(flag) cout << "yes" << endl;
        else cout << "no" << endl;
    }

#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
#endif
return 0;
}
