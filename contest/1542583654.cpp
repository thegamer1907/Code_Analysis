#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    vector<string>v;
    string a ;
    cin>>a>>n;

    for(int i=0; i<n; i++)
    {
        string c;
        cin>>c;
        v.push_back(c);

    }
    for(int i=0; i<n; i++)
        for(int j=i; j<n; j++)
        {
            string c;
            c+=v[i];
            c+=v[j];
            c+=v[i];
            c+=v[j];
            if(c.find(a)!=-1)
            {
                cout<<"YES"<<endl;
                return 0;
            }

        }


    cout<<"NO"<<endl;
    return 0;


}
