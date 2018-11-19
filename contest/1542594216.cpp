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

char s[N][5];

int main()
{
    int t,n,m,r,z,w,i,j,k,l,ans,now,tmp,inf,cnt;
    char x,y;
    scanf("%c%c",&x,&y);
    scanf("%d",&n);
    k=l=0;
    for(i=0;i<n;i++)scanf(" %s",s[i]);
    for(i=0;i<n;i++)
    {
        if(s[i][0]==x&&s[i][1]==y){puts("YES");return 0;}
        if(s[i][0]==y)l=1;
        if(s[i][1]==x)k=1;
    }
    if(l==1&&k==1)puts("YES");else puts("NO");
    return 0;
}
