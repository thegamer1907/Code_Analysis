#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num, t;
    cin>>num>>t;
    string st;
    cin>> st;
    int j=0;
 while(j<t)
 {

  for(int i =0; i<num-1;i++)
    {
        if(st[i] == 'B')
        {
            if(st[i+1] == 'G')
            {
                swap(st[i],st[i+1]);

              i++;

            }

        }

    }

   j++;
 }

cout<<st<<endl;
}
