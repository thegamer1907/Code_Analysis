#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int time,num;

    cin>>num>>time;
    cin>>str;

    while(time--)
    {
        for(int i=0; i<num; i++)
        {
            if(str[i] == 'B' && str[i+1] == 'G')
            {
                char temp = str[i];
                str[i] = str[i+1];
                str[i+1] = temp;
                i++;
            }
        }
    }
    cout<<str;

    return 0;
}
