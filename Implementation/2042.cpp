#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int s1 = 0;
    int s2 = 0;
    int s3 = 0;
    //int p = n*3;
    int t;
    for(int i=0; i<n; i++)
    {
        cin>>t;
        s1 += t;
        cin>>t;
        s2 += t;
        cin>>t;
        s3 += t;
    }

    if(s1!=0 || s2!=0 || s3!=0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;

}
