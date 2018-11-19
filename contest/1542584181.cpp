#include<bits/stdc++.h>
using namespace std;
int main()
{
    string pass,total[101],s;
    int n;
    cin>>pass>>n;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>total[i];
    }
    for(int i = 0 ; i < n ; i++)
    {
        s = total[i];
        for(int j = 0 ; j < n ; j++)
        {
            //if(i == j)continue;
            s += total[j];
            s += s;
            size_t found = s.find(pass);
            if(found != string::npos)
            {
                cout<<"YES\n";
                return 0;
            }
            else{
                s = total[i];
            }
        }
    }
    cout<<"NO\n";

}
