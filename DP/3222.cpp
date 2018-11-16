#include <bits/stdc++.h>

using namespace std;

int a[200];

int main()
{
   int n,b;scanf("%d%d", &n, &b);
   for(int i = 0; i<n; ++i)scanf("%d", &a[i]);
   int cp = 0, ci = 0,ans = 0;
   priority_queue<int> pq;
   for(int i = 0; i<n-1; ++i)
   {
      if(a[i]&1)++ci;
      else ++cp;
      if(cp==ci)
          pq.push(-abs(a[i]-a[i+1]));
   }
   while(!pq.empty()){
	int x = pq.top();pq.pop();
	if(-x<=b)b+=x,ans++;
   }
   printf("%d\n", ans);

   return 0;
}