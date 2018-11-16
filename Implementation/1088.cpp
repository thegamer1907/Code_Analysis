
 #include <iostream>
using namespace std;
int main()
{
    int n,t;
    char a[50];
    cin>>n>>t;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]=='B'&&a[j+1]=='G') 
            {
                swap(a[j],a[j+1]);
                j++;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
}