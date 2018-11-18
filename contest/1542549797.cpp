#include<iostream>
#include<cstdio>
#include<cstring>
#include<sstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<climits>
#include<vector>
#include<stack>
#include<queue>
#include<map>
#include<set>


using namespace std;

#define pb push_back
#define sf scanf
#define pf printf
#define clr(x,y) memset((x),(y),sizeof((x)))
#define AND &&
#define OR ||
#define READ freopen("input.txt","r+",stdin)
#define WRITE freopen("output.txt","w+",stdout)


#define LL long long;
#define CH printf("Came Here!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n")
#define mx 3010


int main(){
    string sb[110],s;
    int n,k=0,i;
    cin>>s;
    scanf("%d",&n);
    int p = n;
    while( p-- ){
        cin>>sb[k++];
    }
    bool chk1 = false, chk2 = false;

    for( i = 0; i < n; i++){
        if(s[0] == sb[i][0]){
            if(s[1] == sb[i][1]){
                pf("YES");
                return 0;
            }
        }
    }
    for( i = 0; i < n; i++){
        if(s[0] == sb[i][1]){
            chk2 = true;
            break;
        }
    }
    if(chk2){
        for( i = 0; i < n; i++){
            if(s[1] == sb[i][0]){
                chk2 = true;
                pf("YES");
                return 0;

            }
        }
    }
    pf("NO");
    return 0;
}
