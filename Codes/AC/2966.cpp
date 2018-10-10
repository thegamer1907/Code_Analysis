#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n = s.size();
    int Z[n];
    int L, R;
    L=R=0;
    for(int i=1; i<n; ++i)
    {
        if(i>R)
        {
            L=R=i;
            while(R<n && s[R-L]==s[R]) R++;
            Z[i] = R-L;
            --R;
        }
        else
        {
            int k = i-L;
            if(Z[k] < R-i+1) Z[i] = Z[k];
            else
            {
                L=i;
                while(R<n && s[R-L]==s[R]) R++;
                Z[i] = R-L;
                --R;
            }
        }
    }
    int maxz = 0;
    int res = 0;
    for(int i=1; i<n; ++i)
    {
        if(Z[i]==n-i && maxz>=n-i)
        {
            res = n-i;
            break;
        }
        maxz = max(maxz, Z[i]);
    }
    if(res==0)
        cout<<"Just a legend"<<endl;
    else
        cout<<s.substr(0, res)<<endl;
    return 0;
}
