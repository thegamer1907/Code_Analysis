#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string pass ;
    cin>>pass;
    int n,mark=-1;
    cin>>n;
    string str1[n];
    string str2;
    for(int i=0;i<n;i++)
    {
        cin>>str1[i];
    }

    for(int j=0;j<n;j++)
    {

        for(int k=0;k<n;k++)
        {
            str2=str1[j];
            str2.append(str1[k]);

            if(str2.find(pass)!=string::npos)
            {
                cout<<"YES";
                mark++;
                break;
            }
            str2.clear();

        }
        if(mark==0)
        {
            break;
        }
    }

    if(mark)
    {
        cout<<"NO";
    }

    return 0;
}
