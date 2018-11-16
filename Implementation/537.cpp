#include <iostream>

using namespace std;

int main()
{
    int m,k,arr[60]={0},cnt=0;
    cin>>m>>k;
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
        if(i<=k-1)
        {
            if(arr[i]>0)
                cnt++;
            else break;
        }
        else if(i>k-1)
        {
            if(arr[i]==arr[k-1])
                cnt++;
            else break;
        }
    }
    cout<<cnt<<endl;
    return 0;
}