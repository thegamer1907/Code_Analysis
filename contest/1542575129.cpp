#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;

int main()
{

    string a;
    int n;
    string b[101];
    cin >> a;
    int check=0;
    string temp;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> b[i];
        //cout << b[i] << endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
    {
        temp=b[i]+b[j];
        //cout << a[1] << " " <<  temp[j] << " " << a[1] << " " << temp[j+1] << endl;
        if(temp.find(a)<10&&temp.find(a)>=0)
        {
            check=1;
        }
    }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
    {
        temp=b[j]+b[i];
        //cout << temp << endl;
        //cout << a[0] << " " <<  temp[j] << " " << a[0] << " " << temp[j+1] << endl;
      //  cout << temp << endl;
       if(temp.find(a)<10&&temp.find(a)>=0)
        {
            check=1;
        }
    }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
    {
        temp=b[i]+b[i];
        //cout << temp << endl;
        //cout << a[0] << " " <<  temp[j] << " " << a[0] << " " << temp[j+1] << endl;
       if(temp.find(a)<10&&temp.find(a)>=0)
        {
            check=1;
        }
    }
    }


    if(check==1)
        cout << "YES";
    else cout << "NO";

return 0;

}