#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std ;

#define speedup ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define ll long long int
#define endl "\n"
#define REP(i,n) for(int i=0;i<n;i++)


int main()
{
    speedup;
    int n,t;
    cin>>n>>t;

    vector<int> arr;

    for(int i=0;i<n-1;i++)
        {
            int tmp;
            cin>>tmp;
            arr.push_back(tmp);
        }
    cin.ignore();

    vector<int> path;
    path.push_back(1);
    for(int i=1;i<n;)
    {
        // tmp = i+arr[i];
        i +=arr[i-1];


    //    path.push_back(i);
        if(i==t)
            {
            cout<<"Yes"<<endl;
            return 0;
            }
    }

    cout<<"No"<<endl;

    // if(binary_search(path.begin(),path.end(),t))
    //     cout<<"Yes"<<endl;
    // else
    //     cout<<"No"<<endl;

    // for(int i=0;i<path.size();i++)
    //     cout<<path[i]<<" ";
}