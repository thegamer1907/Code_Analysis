#include<iostream>

using namespace std;

int main()
{

    int a[200];
    int n,k;
    int count=0;
    cin>>n;
    cin>>k;

    for(int i=0;i<n;i++)
        cin>>a[i];

    if(a[k-1]<1)
    {
        for(int i=0;i<k-1;i++)
        {
            if(a[i]>0)
            {
                count++;
            }
        }
        cout<<count<<endl;

        return 0;
    }

    for(int i=k;i<n;i++ )
        if(a[i]==a[k-1])
            count++;

    count+=k;

    cout<< count<<endl;
}
