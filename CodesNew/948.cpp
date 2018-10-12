#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    while(scanf("%d %d",&n,&m) == 2)
    {
        getchar();
        vector <string> v1;
        vector <string> v2;
        int p=0,q=0;
        int flag=0;
        while(n--)
        {
            string s;
            getline(cin,s);
            v1.push_back(s);
            p++;
        }
        while(m--)
        {
            string s;
            getline(cin,s);
            if(std::find(v1.begin(), v1.end(), s) != v1.end())
            {
                flag++;
            }
            else
            {
                v2.push_back(s);
            }
            q++;
        }
        int sum1 = p - flag + flag%2;
        int sum2 = q - flag ;
        if(sum1 > sum2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
