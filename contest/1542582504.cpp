#include <bits/stdc++.h>
using namespace std;

const int N = 100;

string s;
string ss[N+10];
int n;

int main()
{
   // freopen("E:\\rush.txt","r",stdin);
    cin >> s;
    cin >> n;
    for (int i = 1;i <= n;i++)
    {
        cin>>ss[i];
    }
    for (int i = 1;i <= n;i++)
    {
        if (ss[i]==s)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    for (int i = 1;i <= n;i++)
    {
        string temp = "";
        temp += ss[i][1];
        temp += ss[i][0];
        for (int j = 1;j <= n;j++)
        {
            temp[1] = ss[j][0];
            if (temp==s)
            {
                cout << "YES"<<endl;
                return 0;
            }
        }
    }
    cout << "NO"<<endl;
    return 0;
}
