#pragma GCC optimize(2)
#include <bits/stdc++.h>
#pragma GCC diagnostic error "-std=gnu++11"
#define aut(x,a) __typeof(a) x=(a)
#define gets(s) ( (scanf("%[^\n]",(s))>0 && getchar()) \
    or (~getchar() && !((*(s)=0))) )
#define sort(args...) make_heap(args), sort_heap(args)
#define getmin(x,y) ({__typeof(x) __y=(y); (__y < x)?(x = __y, 1):0;})
#define getmax(x,y) ({__typeof(x) __y=(y); (x < __y)?(x = __y, 1):0;})
const char newl='\n';
typedef long long ll;
typedef unsigned uint;
typedef unsigned long long ull;
//#undef DEBUG
#ifdef DEBUG
# pragma GCC optimize(0)
#endif //DEBUG
using namespace std;
namespace nYAn{

/*****************************************************************************/

char target[5];
char a[100][5], s[5];
int n;

void main(){
    scanf("%s%d",target,&n);
    for(int i=1; i<=n; ++i){
        scanf("%s",a[i]);
        if(strcmp(a[i],target)==0){
            puts("YES");return;
        }
    }
    for(int i=1; i<=n; ++i){
        s[0]=a[i][1]; s[2]='\0';
        for(int j=1; j<=n; ++j){
            s[1]=a[j][0];
            if(strcmp(s,target)==0){
                puts("YES");return;
            }
        }
    }
    puts("NO");return;
}
/*****************************************************************************/

}
int main(){
#ifdef USEFILE
    freopen("input.txt","r",stdin);
    //freopen("log.txt","w",stderr);
    //freopen("output.txt","w",stdout);
#endif //USEFILE
    nYAn::main();
    return 0;
}
