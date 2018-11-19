#include<bits/stdc++.h>

using namespace std;

int h,m,s,t1,t2;

int main()
{
    cin>>h>>m>>s>>t1>>t2;



     if (t1>t2) swap(t1,t2);

      int rig=0;
      int lef=0;
     if (h>=t1 && h<t2) lef++; else rig++;
     t1*=5;
     t2*=5;
     if (m>=t1 && m<t2) lef++; else rig++;

     if (s>t1 && s<t2) lef++; else rig++;

    // printf("%d %d\n",lef,rig);
        if (!lef || !rig) printf("YES\n"); else printf("NO\n");

     return 0;

}
