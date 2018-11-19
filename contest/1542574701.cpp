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

char s[207][107];
int a[207],f[207][80007];


int main()
{
    int t,n,m,h,x,y,r,z,w,i,j,k,l,ans,now,tmp,inf,cnt;
    scanf("%d",&n);
    memset(f,0,sizeof(f));
    for(i=1;i<=n;i++)scanf(" %s",s[i]),a[i]=strlen(s[i]);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<a[i];j++)
        {
            x=0;
            for(k=j;k<a[i]&&k-j<15;k++)x<<=1,x+=s[i][k]-'0',f[i][x|(1<<(k-j+1))]=1;
        }
    }
    scanf("%d",&m);
    for(i=n+1;i<=n+m;i++)
    {
        scanf("%d%d",&y,&z);
        a[i]=min(a[y],14)+min(a[z],14);
        x=0;
        for(j=min(a[y],14);j>0;j--)s[i][x++]=s[y][a[y]-j];
        for(j=0;j<min(a[z],14);j++)s[i][x++]=s[z][j];
        for(j=0;j<65536;j++)f[i][j]=f[y][j]|f[z][j];
        //for(j=0;j<64;j++)printf("%d",f[i][j]);puts("");
        for(j=0;j<a[i];j++)
        {
            x=0;
            for(k=j;k<a[i]&&k-j<15;k++)x<<=1,x+=s[i][k]-'0',f[i][x|(1<<(k-j+1))]=1;
        }
        for(k=1;k<16;k++)
        {
            r=0;
            for(j=1<<k;j<1<<(k+1);j++)if(!f[i][j]){r=1;break;}
            if(r==1)break;
        }

        printf("%d\n",k-1);
        x=0;
        //puts(s[i]);

        for(j=0;j<min(a[y],14);j++)s[i][x++]=s[y][j];
        if(a[y]>14){a[i]+=14;for(j=min(a[y],14);j>0;j--)s[i][x++]=s[y][a[y]-j];}
        if(a[z]>14){a[i]+=14;for(j=0;j<min(a[z],14);j++)s[i][x++]=s[z][j];}
        for(j=min(a[z],14);j>0;j--)s[i][x++]=s[z][a[z]-j];
        //for(j=0;j<64;j++)printf("%d",f[i][j]);puts("");
        //puts(s[i]);
        //puts("");
        //puts(s[i]);
    }
    return 0;
}