#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, t;
    while(cin >> n >>t)
    {
        string s;
        cin >> s;
        int flag=1;
        for(int j=0; j<t; j++)
        {
            flag = 1;
            for(int i=0; i<n-1; i++)
            {
                if(s[i]=='B' && s[i+1]=='G' && flag)
                {
                    swap(s[i], s[i+1]);
                    flag = 0;
                }
                else flag = 1;
            }
        }
        cout << s << endl;
    }
    return 0;
}
