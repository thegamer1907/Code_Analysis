#include <iostream>
using namespace std;


int main()
{
    int n, m, i, j, max1=-9999999, temp;

    cin>>n>>m;

    int a[n];
    int d = m;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]>max1) max1= a[i];
    }

    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]<a[j]) {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;

            }
        }

    }
    for(i=n-1; i>=0; i--)
    {
        m = m - (max1-a[i]);
        //cout<<a[i]<<" "<<m<<endl;
    }
    //cout<<"first&last: "<<" "<<a[n-1]<<endl;
    //cout<<"maximum:    "<<max1<<endl;
    if(m>0 && (m%n !=0)) m = (m/n)+1;
    else if (m>0 && (m%n ==0)) m = (m/n)+0;


    //cout<<"new people: "<<m<<endl;

    if(m > 0) cout<<m+max1<<" "<<max1+d<<endl;
    else if(m<=0) cout<<max1<<" "<<max1+d<<endl;


    return 0;
}
