#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;


    while(cin>>n)
    {

        int a[100001];
        int Min=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(i>=a[i])
            {
                a[i]=i;
            }else
            {
                a[i]=ceil((a[i]-i)*1.0/n)*n+i;
            }

            if(a[Min]>a[i])
            {
                Min=i;
            }

        }
        cout<<Min+1<<endl;
    }



    return 0;
}
