#include <bits/stdc++.h>
#define sz(x) ((int)(x).size())
using namespace std;
int main()
{
    string n;
    cin >> n;
    int a=0;
    char l=n[0];
    for(int i = 0;i<n.size();i++)
    {
        if(n[i]==l){
            a++;
        }
        else
        {
            a = 1;
            l = n[i];
        }
        if(a==7)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
