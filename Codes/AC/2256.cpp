#include<bits/stdc++.h>
using namespace std;

int n;
bool prim[10000005];
vector<int> lip;
map<int,int> idx;
void sieve()
{
   int cnt = 0;
   prim[1]=1;
   for(int i=2;i*i<=10000000;i++)
   {
      if(prim[i]) continue;
      for(int j=i*i;j<=10000000;j+=i)
      {
         prim[j] = 1;
      }
      lip.push_back(i);
      cnt++;
      idx[i] = cnt;
   }
   for(int i=sqrt(10000000)+1;i<=10000000;i++)
   {
      if(!prim[i])
      {
         cnt++;
         idx[i] = cnt;
         lip.push_back(i);
         i++;
      }   
   }
   return;
}

int li[1000005];
int ps[800006];
int m;

int cari(int x) // <=x
{
   int l=0;
   int r = lip.size()-1;
   if(x>lip[r]) return r+1;
   if(x<2) return 0;
   int ans = 0;
   while(l<=r)
   {
      int mid = (l+r)/2;
      if(lip[mid]<=x)
      {
         ans = mid;
         l=mid+1;
      }
      else
      {
         r=mid-1;
      }
   }
   return ans+1;
}

int main()
{
   ps[0] = 0;
   sieve();
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
//      cout << ">>  " << i << endl;
      scanf("%d",&li[i]);
      int id = 0;
      while(prim[li[i]] && li[i]>1)
      {
         if(li[i]%lip[id] == 0)
         {
            ps[idx[lip[id]]]++;
//            cout << "ps ke " << idx[lip[id]] << " plus by one" << endl;
            while(li[i]%lip[id]==0) li[i]/=lip[id];
         }
//         cout << li[i] << endl;
         id++;
      }
//      cout << "out" << endl;
      if(li[i]>1)
      {
         ps[idx[li[i]]] ++;
      }
   }
//   cout << "done" << endl;
   for(int i=1;i<=700000;i++) ps[i] += ps[i-1];
   scanf("%d",&m);
   while(m--)
   {
      int l,r;
      scanf("%d%d",&l,&r);
      int il = cari(l-1);
      int ir = cari(r);
//      cout << ">>> " << il << " " << ir << endl;
//      cout << ps[ir] << " " << ps[il] << endl;
      printf("%d\n",ps[ir]-ps[il]);
   }
 	return 0;
}

