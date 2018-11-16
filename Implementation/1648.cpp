#include <iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int n=s.length(),dem=1;
    if(n<7) cout<<"NO";
    else
    {
        for(int i=1;i<n;i++)
        {
            if(s[i]==s[i-1]) dem++;
            else dem=1;
            if(dem>=7)
            {
                cout<<"YES";
                return 0;
            }
        }
        cout<<"NO";
    }
}
