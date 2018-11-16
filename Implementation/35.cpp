#include<bits/stdc++.h>
#define opt1 ios_base::sync_with_stdio(false);
#define opt2	cin.tie(NULL);
#define opt3	cout.tie(NULL);
using namespace std;
main()
{
    opt1;opt2;opt3;
    int n,a,b,i;
    cin>>n>>a>>b;
    vector<int> v(n);
    for(i=0;i<n;i++)
        v[i]=i+1;
    int c=1,z=0;
    while(1)
    {
        vector<int> tmp;
        if(v.size()==2)
            break;
        for(i=0;i<v.size();i+=2)
        {
            if((v[i]==a && v[i+1]==b) || (v[i]==b && v[i+1]==a))
            {
                z=c;
                break;
            }
            if(v[i]==a || v[i+1]==a)
                tmp.push_back(a);
            else if(v[i]==b || v[i+1]==b)
                tmp.push_back(b);
            else
                tmp.push_back(v[i]);
        }
        if(z>=1)
            break;
        v.clear();
        v=tmp;
        c++;
    }
    if(z>0)
        cout<<z;
    else
        cout<<"Final!";
    return 0;
}
