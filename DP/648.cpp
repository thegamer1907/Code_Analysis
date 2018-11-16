#include<bits/stdc++.h>
using namespace std;



int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>s;
    int l=s.size();
    vector<int>a(l);
    vector<int>b(l);
    
    int sum=0;
    for(int i=0;i<l;i++)
    {    if(i==l-1)
         {
          a[i]=0;
         }
        else if(s[i]==s[i+1])
        {
            a[i]=1;
        }
        else
        {
            a[i]=0;
        }
        sum+=a[i];
        b[i]=sum;
    }
  
//     for(int i=0;i<l;i++)
//     {
//         cout<<b[i]<<" ";
//     }cout<<endl;
//   
    int q,r;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int x,y;
        cin>>x>>y;
        int s1=x-1;
        int e=y-2;
        if(s1==0)
        {
           r=b[e]; 
        }
        else
        {
            r=b[e]-b[s1-1];
        }
        cout<<r<<endl;
    }
    
  return 0;
}