#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a;
    cin >>a;
    int n ;
    cin >>n;
    string arr;
    int f1=0;
    int f2=0;
    for(int i=0;i<n;i++)
    {
        cin >> arr;
        if(arr == a)
        { f1=1;f2=1;break;
           }
        if(arr[1]==a[0])
            f1=1;
        if(arr[0]==a[1])
            f2=1;        
    }    
    if(f1 && f2)
        cout <<"YES"<<endl;
    else 
        cout <<"NO"<<endl;

}
