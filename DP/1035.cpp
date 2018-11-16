#include<bits/stdc++.h>
//C:\Users\prana\Desktop\C++\CodeForcesQs
using namespace std;
#define llint \
long long int
#define lint \
long int
main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;cin>>n;
	int a[n];
	int m=-1;
	for (int i=0;i<n;i++)
        cin>>a[i];
    for (int i=0;i<n;i++)
    {
        for (int j=i;j<n;j++)
        {
            int counter=0;
            if (a[i]==1||a[j]==1)
                continue;
            for (int k=i;k<=j;k++)
            {
                if (a[k]==0)
                    counter++;
                else counter--;
            }
            if (counter>m)
                m=counter;
        }
    }
    int counter=0;
    for (int i=0;i<n;i++)
    {
        if (a[i]==1)
            counter++;
    }
    cout<<counter+m;
}
