#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a1,b1;
    cin>>n>>a1>>b1;
    a1--;
    b1--;
    vector<int>a(n);
    for(int i=0;i<n;i++)
        a[i]=i;
        int kol=1;
    while(a.size()!=2)
    {
        vector<int>b;
        for(int  i=0;i<a.size()/2;i++)
        {
            if((a[2*i]==a1&&a[2*i+1]==b1)||(a[2*i]==b1&&a[2*i+1]==a1))
            {
                cout<<kol;
                return 0;
            }
            if(a[2*i]==a1||a[2*i]==b1)
                b.push_back(a[2*i]);
            else b.push_back(a[2*i+1]);
        }
        a=b;
        kol++;
    }
    if((a[0]==a1&&a[1]==b1)||(a[0]==b1&&a[1]==a1))
        cout<<"Final!";
    else cout<<-1;

}
