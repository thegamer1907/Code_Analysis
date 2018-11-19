#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define sz(x) (int)s.size()
using namespace std;
typedef long long ll ;
string aa[1000] ;
int main()
{
//    #ifndef ONLINE_JUDGE
//        freopen("in.txt","r",stdin);
//    #endif
    string str ;
    while(cin>>str){
        int n ;
        cin>> n;
        for(int i= 0 ;i<n ;i++){
            cin>>aa[i];
        }
        int flag1 = 0 , flag2 = 0 ,flag3 = 0 ,flag4 = 0;
        for(int i = 0;i<n;i++){
            if(aa[i][0] == str[1]){
                flag1=1 ;
            }
            if(aa[i][1] == str[0]){
                flag2=1 ;
            }
            if(aa[i] == str){
                flag1 = flag2 = 1 ;
            }
        }
        if(flag1+flag2==2){
            printf("YES\n") ;
        }
        else{
            printf("NO\n") ;
        }
    }
    return 0;
}
