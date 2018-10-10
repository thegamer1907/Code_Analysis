#include<bits/stdc++.h>
#define N 200005
#define MP make_pair
#define MB push_back
#define F first
#define S second
#define LL long long
#define mod 1000000007
using namespace std;
LL n, m, i, j, k, l, r, t, a[N], ans;
map<LL,LL>mp1, mp2;
int main(){
    cin>>n>>k;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]%(k*k)==0)ans+=mp2[a[i]/k];
        if(a[i]%k==0)mp2[a[i]]+=mp1[a[i]/k];
        mp1[a[i]]++;
    }
    cout<<ans<<endl;
    return 0;
}
//      IIIIIIIII      OOOOO             A          NN        N    EEEEEEEEEE       
//          I         O     O           A A         N N       N    E                   
//          I        O       O         A   A        N  N      N    E                   
//          I        O       O        A     A       N   N     N    E                   
//          I        O       O       AAAAAAAAA      N    N    N    EEEEEEEE            
//          I        O       O      A         A     N     N   N    E                   
//          I        O       O     A           A    N      N  N    E                   
//          I         O     O     A             A   N       N N    E                  
//      IIIIIIIII      OOOOO     A               A  N        NN    EEEEEEEEEE ___ KAPANADZE 