#include <iostream>

using namespace std;

int main()
{
    int n,t,i,j;
    cin >> n;
    char a[n],temp;
    cin >> t;
    cin >> a;
    for (i=1;i<=t;i++)
    {
        for(j=0;j<n-1;j++)
        {
              if (a[j]=='B'&& a[j+1]=='G')
                {
                   temp = a[j];
                   a[j] = a[j+1];
                   a[j+1] = temp;
                   j++;
                }

        }
    }
    cout << a;
    return 0;
}

