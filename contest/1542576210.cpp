#include<iostream>
#include<string>
using namespace std;
int main()
{
    char pass[3];
    cin>>pass;
    int n;
    cin>>n;
    char word[n][3];
    int first=0,second=0;
    int i;
    for(i=0;i<n;i++)
    {
        cin>>word[i];
        if(word[i][0]==pass[0] && word[i][1]==pass[1])
        {
            cout<<"YES";
            return 0;
        }
    }
    for(i=0;i<n;i++)
    {
        if(word[i][1]==pass[0])
        {
            first=19;
            break;
        }
    }
    if(first==0)
    {
        cout<<"NO";
        return 0;
    }
    for(i=0;i<n;i++)
    {
        if(word[i][0]==pass[1])
        {
            second=19;
            break;
        }
    }
    if(first==19 && second==19)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
