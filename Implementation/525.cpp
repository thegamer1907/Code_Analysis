#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
        int i=0;
        int counter=0;
        while(arr[i]>=arr[k-1])
        {
            if(arr[i]==0);
            else
            {counter++;}
            i++;
            if(i>(n-1))
                break;
        }
        cout<<counter<<endl;
    return 0;
}
