#include<iostream>
using namespace std;

int main()
{
    int n, k, model, counter=0;
    cin>>n>>k;
    int* arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    model=arr[k-1];
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            if(arr[i]>=model)
            {
                counter++;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
    cout<<counter<<"\n";
    return 0;
}
