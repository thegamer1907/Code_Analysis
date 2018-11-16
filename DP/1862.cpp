#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int x,x2;
    x = s.find("AB");
    if(x>=0)
    {
        x2 = s.find("BA");
        if(x2 >= 0)
        {
            if(abs(x2 - x) >= 2)
                cout<<"YES"<<endl;
            else
            {
                x2 = s.rfind("BA");
                if(abs(x2 - x) >= 2)
                    cout<<"YES"<<endl;
                else
                {
                    x = s.find("BA");
                    x2 = s.rfind("AB");
                    if(abs(x2 - x) >= 2)
                        cout<<"YES"<<endl;
                    else
                        cout<<"NO"<<endl;

                }

            }
        }
        else
            cout<<"NO"<<endl;

    }
    else
        cout<<"NO"<<endl;

}
