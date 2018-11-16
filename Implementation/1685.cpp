#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int a[110];
int y=0;
int main()
{
    string s;
    cin>>s;
    int i=0;
    while(i<s.size())
    {int r=0;
        for(int u=1;u<s.size();u++)
{
            if(s.substr(i,1)==s.substr(i+u,1))
            {
             r++;

            }
            else
                {
                    break;
                }
            }
            i=i+r+1;
        a[y++]=r+1;
    }
    sort(a,a+y);
    if(a[y-1]>=7)
    {
        cout<< "YES";
    }
    else
    {
        cout<< "NO";
    }

}
