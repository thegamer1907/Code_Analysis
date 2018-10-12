//Abdulfattah//
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

//8 2 5 7 6 9 8 4 2
ll bigmod(int b,int p , int m)
{
    if(p==0)
        return 1;
    if(p%2==0)
    {
        ll temp = bigmod(b,p/2,m);
        return (temp*temp)%m;
    }
    return (bigmod(b,p-1,m)*(b%m))%m;
}

int main()
{
    while(1)
    {
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        int i=(n/2)-1,j=n-1,count=0;
        while(i>=0)
        {
            if((v[i]*2)<=v[j])
            {
                v[i]=-1;
                v[j]=-1;
                j--;
                i--;
                count++;
            }
            else if(v[i]==-1&&v[j]==-1)
            {
                i--;
                j--;
            }
            else if(v[j]==-1)
            {
                j--;
            }
            else
                i--;
        }

        for(int i=0;i<v.size();i++)
        {
            if(v[i]!=-1)
                count++;
        }
//        if(count==51||count==250001)
//            cout<<count-1<<endl;
//        else
        cout<<count<<endl;
        return 0;
    }

//while(1)
//{
//    int n;
//    cin>>n;
//    vector<int>v;
//    for(int i=0;i<n;i++)
//    {
//        int x;
//        cin>>x;
//        v.push_back(x);
//    }
//    sort(v.begin(),v.end());
//
//
////    int upper = upper_bound(v.begin(),v.end(),3) - v.begin();
////    int lower = lower_bound(v.begin(),v.end(),3) - v.begin();
////    cout<<upper<<" "<<lower<<endl;
//
//    int count=0;
//    for(int i=v.size()-1;i>=0;i--)
//    {
//        int upper = upper_bound(v.begin(),v.end(),v[i]/2) - v.begin();
//        int lower = lower_bound(v.begin(),v.end(),v[i]/2) - v.begin();
//        if(lower!=0&&lower!=n)
//        {
//                count++;
//                v[i]=-1;
//                v[lower]=-1;
//
//        }
//    }
//    for(int i=0;i<v.size();i++)
//     if(v[i]!=-1)
//       count++;
//    cout<<count<<endl;
}
