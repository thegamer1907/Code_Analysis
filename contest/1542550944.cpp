#include<bits/stdc++.h>
using namespace std;
int main()
{
    string pass,temp,bark[110];
    cin >> pass;
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> bark[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            temp = bark[i]+bark[j];
            //cout << temp << " " << pass << endl;
            if(temp.find(pass) < temp.size())
            {
                cout << "YES\n";
                return 0;
            }
        }
    }
    cout << "NO\n";
}
