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


int main()
{
    int t,n,m,h,x,y,r,z,s,w,i,j,k,l,ans,now,tmp,inf,cnt;
    scanf("%d%d%d%d%d",&h,&m,&s,&x,&y);
    h%=12;
    h*=5;
    h++;
    x%=12;x*=5;
    y%=12;y*=5;
    if(!(m%5))m++;
    if(!(s%5))s++;
    if(x==y){puts("YES");return 0;}
    if(x>y)x^=y,y^=x,x^=y;
    if(x<h&&x<m&&x<s&&h<y&&m<y&&s<y){puts("YES");return 0;}
    if((h<x||y<h)&&(m<x||y<m)&&(s<x||y<s)){puts("YES");return 0;}
    puts("NO");
    return 0;
}