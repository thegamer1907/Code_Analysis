#include <bits/stdc++.h>
#include <string>

using namespace std;

ifstream g("data.in");
ofstream f("data.out");

int main()
{
    int i,j,k,a=1,b=1;
    string test;
    cin>>test;
    k=test.length();
    for(i=0;i<k;i++)
    {
        if(a>=7 || b>=7)
            break;
        if(test[i]==test[i+1])
        {
            if(test[i]=='0')
                a++;
            else
                b++;
        }
        if(test[i]!=test[i+1])
        {
            a=1;
            b=1;
        }

    }
    if(i==k)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;

    return 0;
}
