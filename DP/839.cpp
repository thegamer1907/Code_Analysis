#include<bits/stdc++.h>
using namespace std;
//#define ll long long int
vector<int>v;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,d=0;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
        {
            d++;
        }
    }
    if(d==n)
    {
        cout<<d-1<<endl;
    }
    else if(arr[0]==0 && n==1)
    {
        cout<<"1"<<endl;
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                int cnt=0;
                /*if(arr[i]==1)
                {
                    cnt++;
                }
                if(arr[j]==1)
                {
                    cnt++;
                }*/
                //int y=1;
                for(int k=i; k<=j; k++)
                {
                    /* if(arr[i]==1 && y==1)
                     {
                         cnt++;
                         y=0;
                     }*/
                    if(arr[k]==0)
                    {
                        cnt++;
                    }
                    else if(arr[k]==1)
                    {
                        cnt--;
                    }
                }
                v.push_back(cnt);
            }
        }

        /*for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<endl;
        }*/
        sort(v.begin(),v.end());
        cout<<d+v[v.size()-1]<<endl;
    }

    return 0;
}



