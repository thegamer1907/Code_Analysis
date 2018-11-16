#include<iostream>
using namespace std;

int main()
{
    string line;
    int n,t;
    cin>>n>>t;

    cin>>line;
    while(t--)
    {

        for(string::iterator i=line.begin();i<line.end();i++)
        {
            char a=*i,b=*(i+1);
            if(a=='B' && b=='G')
            {
                char temp='B';
                *i='G';
                *(i+1)='B';
                i++;
            }
             a=*i;
             b=*(i+1);
        }
    }
    cout<<line<<endl;

    return 0;
}

