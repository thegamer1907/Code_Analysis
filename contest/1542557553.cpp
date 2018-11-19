#include <iostream>

using namespace std;

int main()
{
    string pass;
    int n;
    cin>>pass>>n;
    string* newpass=new string[n];
    for(int i=0;i<n;i++)
    {
        cin>>newpass[i];
    }
    int arr[2]={0,0};
    for(int i=0;i<n;i++)
    {
        if(pass[0]==newpass[i][1])
            arr[0]=1;
        if(pass[1]==newpass[i][0])
            arr[1]=1;
        if(pass[0]==newpass[i][0]&&pass[1]==newpass[i][1])
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<(arr[0]+arr[1]==2?"YES":"NO");
    return 0;
}
