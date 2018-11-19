#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,arr;
    cin >> str;
    int n,f,a,b;
    cin >> n,f=0,a=0,b=0;
    while(n--)
    {
        cin >> arr;
        if(arr[0]==str[0] && arr[1]==str[1])
            f=1;
        if(arr[1]==str[0])
            a=1;
        if(arr[0]==str[1])
            b=1;
    }
    if(f || (a&b))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

}
