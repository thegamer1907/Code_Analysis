#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
    cin.tie(0);
   // freopen("kan.txt","r+",stdin);
   int n,ans;
   scanf("%d",&n);
   ans=n;
   int arr[n],f=0;
   for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    sort(arr,arr+n);
    int j=n/2;
  for(int i=0;i<n/2;i++)
  {



    while(1)
    {

        if(j<n&&2*arr[i]<=arr[j])
          {

              ans--;
              j++;
              break;

          }
          else
            j++;
          if(j>=n)
          break;

} if(j>=n)
          break;


      }

cout<<ans<<endl;

}
