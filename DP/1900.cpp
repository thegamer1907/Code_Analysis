    #include <bits/stdc++.h>
    using namespace std;
    const int inf=1e5+9;
    int par[inf],par1[inf];
    int main(){
        int n;
        string a;
        cin>>a;
        n=a.size();
        a=" "+a;
        for(int i=1;i<=n;i++)
            par[i]=par[i-1]+(a[i]=='A' && a[i-1]=='B'),par1[i]=par1[i-1]+(a[i-1]=='A' && a[i]=='B');
        par[n+1]=par[n];
        par1[n+1]=par1[n];

        for(int i=2;i<=n;i++)
            if(a[i]=='A' && a[i-1]=='B' && par1[n]-par1[i+1]>0)
                cout<<"YES",exit(0);
            else if(a[i]=='B' && a[i-1]=='A' && par[n]-par[i+1]>0)
                cout<<"YES",exit(0);

        cout<<"NO";

    }
