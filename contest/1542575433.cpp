#include<bits/stdc++.h>

using namespace std;
const int maxi=3e5+6;
#define pb push_back
string s,w;
int t,n,k;
int a[maxi][5];
int cnt[17];
vector<int> v[maxi];
int main()
{
    cin>>n>>k;


   for (int i=1;i<=n;i++){
    for (int j=1;j<=k;j++)
     
         scanf("%d",&a[i][j]);
           int x=a[i][1]+a[i][2]*2+a[i][3]*4+a[i][4]*8;
           cnt[x]++;
     }

   if (cnt[0]) {printf("YES\n"); return 0;}
   if (n==1) {printf("NO\n"); return 0;}


   for (int i=1;i<=16;i++)
    if (cnt[i]){
        cnt[i]--;
    for (int j=1;j<=16;j++)
    if (cnt[j])
    {
        int moze=0;
        for (int l=0;l<=3;l++)
             if (((1<<l) & i) && ((1<<l) & j))
               moze++;

                if (!moze)
             {
                 printf("YES\n");
                 return 0;
             }
    }
    cnt[i]++;
   }

   if(n<4)
   {
       printf("NO\n");
       return 0;
   }

   for (int i=1;i<=15;i++)
    for (int j=1;j<=15;j++)
        for (int l=1;l<=15;l++)
        for (int o=1;o<=15;o++)
    {
        cnt[i]--;
        cnt[j]--;
        cnt[l]--;
        cnt[o]--;

        if (cnt[i]>=0 && cnt[o]>=0 && cnt[j]>=0 && cnt[l]>=0)
        {
             int moze=0;

             for (int p=0;p<=3;p++)
             {
                 int c=0;
                 c+=(i&(1<<p))/(1<<p);
                 c+=(j&(1<<p))/(1<<p);
                 c+=(l&(1<<p))/(1<<p);
                 c+=(o&(1<<p))/(1<<p);
                 if (c>=3) moze++;
             }

             if (!moze)
             {
                 printf("YES\n");
                 return 0;
             }
        }

        cnt[i]++;
        cnt[j]++;
        cnt[l]++;
        cnt[o]++;
    }

 if (n<6){
  printf("NO\n");
  return 0;
 }


   for (int w=1;w<=15;w++)
    for (int u=1;u<=15;u++)
   for (int i=1;i<=15;i++)
    for (int j=1;j<=15;j++)
        for (int l=1;l<=15;l++)
        for (int o=1;o<=15;o++)
    {
        cnt[i]--;
        cnt[j]--;
        cnt[l]--;
        cnt[o]--;
        cnt[u]--;
        cnt[w]--;
        if (cnt[i]>=0 && cnt[o]>=0 && cnt[j]>=0 && cnt[l]>=0 && cnt[u]>=0 && cnt[w]>=0)
        {
             int moze=0;

             for (int p=0;p<=3;p++)
             {
                 int c=0;
                 c+=(i&(1<<p))/(1<<p);
                 c+=(j&(1<<p))/(1<<p);
                 c+=(l&(1<<p))/(1<<p);
                 c+=(o&(1<<p))/(1<<p);
                 c+=(u&(1<<p))/(1<<p);
                 c+=(w&(1<<p))/(1<<p);

                 if (c>=4) moze++;
             }

             if (!moze)
             {
                 printf("YES\n");
                 return 0;
             }
        }

        cnt[i]++;
        cnt[j]++;
        cnt[l]++;
        cnt[o]++;
        cnt[w]++;
        cnt[u]++;
    }

  printf("NO\n");

    return 0;
}