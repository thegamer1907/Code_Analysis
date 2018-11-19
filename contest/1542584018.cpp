#include <iostream>

using namespace std;

int main()
{
    string s[101];
    string pass;
    int n;

    cin >> pass;
    cin >> n;


    bool flag1=false , flag2= false;

    for(int i=0;i<n;i++)
    {
        cin >> s[i];

    }

    for(int j=0;j<n;j++)
    {
        if( pass[1] ==  s[j][0] )
        {
            flag1 = true;
        }

        if(pass[0] == s[j][1])
            flag2 = true;

        if(pass==s[j])
        {
            flag1 = true;
            flag2 = true;
        }
    }


    if(flag2 && flag1)
        cout <<"YES";
    else
        cout << "NO";


    return 0;
}