#include <bits/stdc++.h>
using namespace std;

const int N=100005;
int v[N], pd[N];

int main(){
int n, m;scanf("%d%d",&n,&m);

for(int i=1;i<=n;i++){scanf("%d",&v[i]);}

set<int> st;
st.insert(v[n]);
pd[n]=1;
for(int i=n-1;i>0;i--)
    {
       if(!st.count(v[i])){
        pd[i]=1+pd[i+1];
        st.insert(v[i]);
        }else pd[i]=pd[i+1];
    }
    
   for(int i=0;i<m;i++)
    {
      int a;scanf("%d",&a);
      printf("%d\n", pd[a]);
    }

}