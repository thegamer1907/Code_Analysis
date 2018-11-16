#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y, counter=0 ;
    cin >> x >> y ;
    char arr[x] ;
    for(int i=0 ; i<x ; i++)
    {
        cin >> arr[i];
    }
    for (int i=0 ; i<y ; i++)
    {
        for(int j=0 ; j<x ; j++)
        {
            if(j>0)
            {
                if(arr[j]=='G' && arr[j-1]=='B')
                {
                    arr[j]='B' ;
                    arr[j-1]='G' ;
                    j++;
                }
            }
        }
    }
    for(int i=0 ; i<x ; i++)
    {
        cout << arr[i];
    }
    return 0;
}