#include<bits/stdc++.h>

using namespace std;

int main(int args, char** argv)
{
    int test,num,sum;
    int arr[] = {0,0,0};
    cin>>test;

    while(test--)
    {
        for(int i=0; i<3; i++)
        {
            cin>>num;
            arr[i] += num;;
        }
    }
    if(arr[0] == 0 && arr[1] == 0 && arr[2] ==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
