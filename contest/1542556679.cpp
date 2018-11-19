#include <bits/stdc++.h>
using namespace std;
#define LL long long
LL i,j,k,h,n,mb,q,ric,m[7],fix[22],ans[22];
int main(){std::ios::sync_with_stdio(false);
 cin>>n>>k; 
 mb=pow(2,k-1);
 for(i=1;i<=n;i++)
  {
   h=mb;
   ric=0;
   for(j=1;j<=k;j++)
    cin>>m[j],ric+=m[j]*h,h/=2;
   if(!fix[ric]) 
   q++,fix[ric]=1,ans[q]=ric;  
  }
 for(i=1;i<=q;i++)
  for(j=1;j<=q;j++)
   if((ans[i]&ans[j])==0)
    {
	 cout<<"YES"<<endl; 
	 return 0; 
	 }
 cout<<"NO"<<endl;  
}
/*
made by

       *             *   **********       * * * * * * *      *   *                      *** * * * ** * * * ***        **       **********          *       *
      * *           *        *            *            *     *  *                       **        **        **      **  *          *              * *     * *
     *   *         *         *            *                  * *                        **        **        **     **    *         *             *  *    *   *
    *     *       *          *            *                  **                                   **              **               *            *   *   *     *
   *       *     *           *            *                  * *                                  **                **             *           *    * *        *
  *         *   *            *            *                  *  *                                 **                 **            *          *     **          *
 *           * *             *            *            *     *   *                                **             *   **            *         *                   *
*             *          **********       * * * * * * *      *     *                              **               **          **********   *                     *    A

*/
