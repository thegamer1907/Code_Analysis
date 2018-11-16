/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int min = a[m-1];
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i] >= min && a[i]>0)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}