#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a , b;
    char c[10000];
    cin >> a >> b;
    for(int i = 0;i<a;i++)
    {
        cin >> c[i];
    }
    for(int i = 0;i<b;i++)
    {
        for(int j=0;j<a-1;j++)
        {
            if(c[j]=='B'&&c[j+1]=='G')
            {
                c[j]='G';
                c[j+1]='B';
                j++;
            }
        }
    }
    for(int i = 0;i<a;i++)
    {
        cout << c[i];
    }
}
