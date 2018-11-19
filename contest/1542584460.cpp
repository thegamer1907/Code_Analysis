//==================================================================//
//                                                                  //
//                                          :~~~~..                 //
//                         ...~.           I       `~.              //
//                       :I~~~` ;          I          '.            //
//                      :~    .:`~         ;   .        :           //
//                             ~~~        ;`    =        ;          //
//                             `=        `:      =~~~~~~:           //
//                             i.       `; `      :                 //
//                    :..   `.I:   .   ::  `i.    ;                 //
//                    = `..``  `..``i~: `:  ;`~~::`                 //
//               .~;;~..         `.``~=:;~~~.                       //
//             .i`~~                 ; .I=;.                        //
//            .: ~.   +8      iE    ~.`=:  :.                       //
//            =I.:   `EO      oE`   ; Ii.  `;                       //
//            OI~~        ``        ;:Ii+i=I;                       //
//            :o ;                  ; :IiiiO`                       //
//             ~;.:                `~~ ;=o+`                        //
//               ~:I;.          ```.:=:~;=.                         //
//                   .::::~~~~~::~~.     :+                         //
//                                     :i:                          //
//                                  ~==~                            //
//                               :==:                               //
//                           .I=I.                                  //
//                        ;==:                                      //
//                    .==;`                                         //
//                 ~==~                                             //
//               ;i:                                                //
//              o.                  `~;I;IIII:                      //
//             +`              ~;III:.       ;i                     //
//             .+;`     .:;III;~             ;I                     //
//               `:;;;;;~.                  :+                      //
//                                         iI                       //
//                                       I+`                        //
//                                     Ii.                          //
//                                ~~=i=`                            //
//                               =+++                               //
//                               I;::;                              //
//                              :i    ;                             //
//    by XPCHF                   `:~:`                              //
//                                                                  //
//==================================================================//

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <string>
#include <vector>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

#define EXP 1e-8
#define N   100007
#define M   1000007
#define mod 1000000007
#define INF 1e18
#define LL  long long

int a[1000];


int main()
{
    int t,n,m,h,x,y,r,z,s,w,i,j,k,l,ans,now,tmp,inf,cnt;
    scanf("%d%d",&n,&k);
    memset(a,0,sizeof(a));
    for(i=0;i<n;i++)
    {
        y=0;
        for(j=0;j<k;j++)
            scanf("%d",&x),y<<=1,y+=x;
        a[y]=1;
    }
    for(i=0;i<16;i++)
        for(j=0;j<16;j++)if(a[i]&&a[j]&&!(i&j)){puts("YES");return 0;}
    puts("NO");
    return 0;
}
