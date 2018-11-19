#include <iostream>

using namespace std;

int main()
{
    string a;
    cin>>a;
    int n,osh=1,l=0,p=0;
    cin>>n;
    string b[n];
    for (int i=0;i<n;i++)
    {

        cin>>b[i];
        if (b[i].compare(a)==0)
        {
            osh=0;
            break;
        }
         if (b[i][0]==a[1]) p++;
           if (b[i][1]==a[0]) l++;
    }
    if ((osh==0)||(((p>=1)&&(l>=1)))) cout<<"YES";
        else cout<<"NO";
    return 0;
}