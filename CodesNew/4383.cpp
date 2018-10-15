#include<bits/stdc++.h>

using namespace std;


int main()
{
    /*int n;
    int x;
    cin>>n>>x;
    int zero[6]={0,1,2,2,1,0};
    int one[6]={1,0,0,1,2,2};
    int two[6]={2,2,1,0,0,2};
    int a = n%6;
    int b = n%6;

    if(zero[a]==x)cout<<"0";
    else if (one[b]==x)cout<<"1";
    else cout<<"2";*/
    /*int n;
    cin>>n;
    string a,b,c,d;
    cin>>a;
    cin>>b;

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    //cout<<a<<" "<<b;
    c=a;
    d=b;
    int ans1=0;
    for (int i=0;i<n;i++)
    {
        //int cur = b[i];
        if (a[i]<=b[i]){
        b[i]='$';
        continue;
        }
        else{int flag=1;
             for (int j=0;j<n;j++)
             {
                if (b[j]>=a[i]){
                    b[j]='$';
                    flag=0;
                    break;
                }
             }
             if (flag)
             {ans1++;
              b[i]='$';
             }
        }
    }
    cout<<ans1<<"\n";
    int ans=0;
    for (int i=0;i<n;i++)
    {
        if(c[i]<d[i])
        {
            ans++;
            d[i]='$';
            continue;
        }
        else{int flag=1;
            for (int j=0;j<n;j++)
            {
                if (c[i]<d[j])
                {
                    ans++;
                    flag=0;
                    d[j]='$';
                    break;
                }
            }
            if (flag)
            {   if (d[i]=='$')
                {
                   for (int j=0;j<n;j++)
                    {
                       if (d[j]!='$')
                        {
                            d[j]='$';
                            break;
                        }
                    }
                }
                else
                d[i]='$';
            }
        }

    }
    cout<<ans;*/

    /*int n,m;
    cin>>n>>m;
    int arr[n][m];
    for (int i=0;i<n;i++)
        for (int j=0;j<m;j++)
            cin>>arr[i][j];*/

    int n;
    cin>>n;
    vector<string> arr(n),brr(n);
    for (int i=0;i<n;i++)
        cin>>arr[i];

    for (int i=n-2;i>=0;i--)
    {   int j,k;
        for (j=1,k=1;j<arr[i].length()&&k<arr[i+1].length();j++,k++)
        {   if (arr[i+1][k]=='$')
            {    arr[i][j]='$';
                 j=arr[i].length();
                 break;
            }
            if (arr[i][j]>arr[i+1][k])
            {
                arr[i][j]='$';
            }
            else if (arr[i][j]<arr[i+1][k])
            {   j=arr[i].length();
                break;
            }

        }
        if (j!=arr[i].length()){
            arr[i][j]='$';
        }

    }

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<arr[i].length()&&arr[i][j]!='$';j++)
            cout<<arr[i][j];
        cout<<"\n";
    }





}
