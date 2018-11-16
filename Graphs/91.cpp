#include <iostream>

using namespace std;

int main()
{
    int x,y;
    char temp;
    string s;
    cin>>x>>y;
    cin>>s;
    for(int i=0;i<y;i++)
       for(int j=0;j<x;){
         if(s[j]=='B'&&s[j+1]=='G'){
            temp=s[j];
            s[j]=s[j+1];
            s[j+1]=temp;
            j+=2;}
            else
                j++;
       }
       cout<<s<<endl;

    return 0;
}
