#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string pass,a ;
    cin>>pass;
    int n,count = 0;
    vector<string>arr;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        arr.push_back(a) ;
    }
    for(int i=0;i<n;i++){
        if(pass == arr[i])
        {
            count =2 ;
            break;
        }
    }
    if(count == 0)
    {
        for(int i=0;i<n;i++)
        {
            if(pass[1]==arr[i][0])
            {
                count ++ ;
                break;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(pass[0]==arr[i][1])
               {count++;
               break;}
        }
    }
    if(count==2)
    {
        cout<<"YES";
    }
    else
        cout <<"NO";
    return 0;
}