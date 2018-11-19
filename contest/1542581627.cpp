#include<bits/stdc++.h>
using namespace std;

int main()
{
    string A,B;
    int n;
    cin>>A>>n;
    for(int i=0;i<n;i++)
    {
        string C;
        cin>>C;
        B+=C;
    }
    //cout<<B<<endl;
    B+=B;
    //cout<<B;
    for(int i=0;i<B.size()-1;i++)
    {
        if(B[i]==A[0]&&B[i+1]==A[1])
        {
            cout<<"YES\n";
            return 0;
        }
        if(B[i]==A[0])
        {
            if(i%2!=0)
            {
                for(int j=0;j<B.size();j+=2)
                {
                    if(B[j]==A[1])
                    {
                        cout<<"YES\n";
                        return 0;
                    }
                }
            }
        }
    }
    cout<<"NO\n";
}
