#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int i, j = 0, k = 0;
    string s;
    getline(cin, s);

    for(i = 0; i < s.size(); i++)
    {
        if(s[i] == '1')
        {
            j++;
            k = 0;
            if(j == 7)
                break;
        }
        else
        {
            j = 0;
            k++;
            if(k == 7)
                break;
        }
    }
    if(j >= 7 || k >= 7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
