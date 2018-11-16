#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    char arr[n];
    char temp;
    for(int r=0;r<n;r++)
    {
        arr[r]=s.at(r);
    }
    int i=0;
    int j=0;
    while(i<t)
    {
        while(j<n)
        {
            if((arr[j]=='B')&&(arr[j+1]=='G'))
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                j+=2;
            }else{j++;};
        }
        i++;
        j=0;
    }
    for(int k=0;k<n;k++)
    {
        cout<<arr[k];
    }
    return 0;
}
