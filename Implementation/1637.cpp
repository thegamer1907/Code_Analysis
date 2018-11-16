#include <iostream>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int dem=1;
    for(int i=0; i < a.length(); i++)
    {	char d=a[i];
        if(a[i]==d)
        {
            dem=0;
            while(a[i]==d || i==a.length())
            {
                dem++;
                if(a[i+1]!=d)
                {
                    if(dem>=7)
                    {
                        cout<<"YES";
                        return 0;
                    }
                }
                i++;
            }
        }
    }
    cout<<"NO";
}