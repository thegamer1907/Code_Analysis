#include<iostream>
#include<string.h>
using namespace std;

int main() 
{
    int n;
    bool flag = false;
    string pass, a[100];
    cin>>pass;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(a[i] == pass)
        {
            flag = true;
        }
    }
    
    if(flag == false)
    {
        for (int i = 0; i < n; i++)
        {
           for(int j = 0; j < n; j++)
           {
               if((a[i][0] == pass[1] && a[j][1] == pass[0]) || (a[i][1] == pass[0] && a[j][0] == pass[1]))
               {
                   flag = true;
                   break;
               }
           }
        }
    }
    
    if(flag) cout << "YES";
    else cout <<"NO";
    
}
