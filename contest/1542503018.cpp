#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n, f1=0, f2=0;
    string s1, test;

    cin>>s1>>n;
    while(n--)
    {
        cin>>test;
        for(int i=0; i<2; i++)
        {
            if(test[1] == s1[0])f1=1;
            if(test[0] == s1[1])f2=1;
            if(test == s1)
            f1 = f2 = 1;
        }
    }
    if(f1 && f2 )
    puts("YES");
    else 
    puts("NO");


}