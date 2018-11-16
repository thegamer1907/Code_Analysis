#include<iostream>
using namespace std;
int main()
{

    string p;
    int counter=0,prev=0;
    cin>>p;
    for(int i=0;i<p.length();i++)
    {
        if(p.at(i)=='0')
        {
            if(prev==0)
                counter++;
            if(prev==1)
            {
                counter=1;
                prev=0;
            }

        }
        else
        {
            if(prev==1)
                counter++;
            if(prev==0)
            {
                counter=1;
                prev=1;
            }

        }
        if(counter>=7)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;

}
