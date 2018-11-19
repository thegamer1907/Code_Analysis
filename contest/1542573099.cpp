#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[10000];
    cin>>s;
    int n;
    cin>>n;
    string ss[10000];
    for(int i=0; i<n; i++)cin>>ss[i];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            string s1=ss[i]+ss[j];
            if (s1.find(s) != std::string::npos)
            {
                std::cout << "YES" << '\n';
                return 0;
            }
        }
    }
    cout<<"NO\n";
}
