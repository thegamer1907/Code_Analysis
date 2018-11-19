#include<bits/stdc++.h>
using namespace std;
int main()
{
    int check=0,mx,mn,l=0;
   double h,m,s;
   int t1,t2;
   cin >> h >> m >> s >> t1 >> t2;
    h+=0.001;
    s/=5;
    s+=0.001;
    m/=5;
    m+=0.001;
   mx=max(t1,t2);
   mn=min(t1,t2);
      if(h>=mn&&h<=mx)l++;
    if(s>=mn&&s<=mx)l++;
    if(m>=mn&&m<=mx)l++;
    if(l==0||l==3)
        cout << "yes";
        else
            cout << "no";
   return 0;
}
