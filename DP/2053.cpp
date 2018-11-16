

    #include <bits/stdc++.h>
    using namespace std;
    
    
    int main()
    {
      long int n,m;
      cin>>n>>m;
     long int a[n],l[n];
      for(int i=0;i<n;i++)
    cin>>a[i];
    set<long int>k;
    for(int i=n-1;i>=0;i--)
    {k.insert(a[i]);
    
    l[i]=k.size();
        
    }
    
    
for(int i=0;i<m;i++)
    {long int x;
        cin>>x;
    cout<<l[x-1]<<"\n";}
    
    
    return 0;} 