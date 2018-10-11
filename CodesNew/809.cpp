#include<iostream>
using namespace std;
int main(void)
{
    int m,n;
    int count=0;
    cin>>m>>n;
    string a[m],b[n];
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<n;j++)
    {
        cin>>b[j];
    }
    if(m>n)  cout<<"YES"<<endl;
    else if(m<n)  cout<<"NO"<<endl;
    else {
            for(int j=0;j<n;j++)
            {
                for(int i=0;i<m;i++)
                {
                    if(b[j]==a[i])
                     count++;
                }
            }
    if(count%2==1&&((m-count)>=(n-count)))
       cout<<"YES"<<endl;
       else if(count%2==0&&((m-count)>(n-count)))
               cout<<"YES"<<endl;
               else cout<<"NO"<<endl;
        }
    return 0;
}
