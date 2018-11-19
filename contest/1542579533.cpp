#include <iostream>
using namespace std;
void reverseStr(string &str)
{
    int n = str.length();
 
    // Swap character starting from two
    // corners
    for (int i=0; i<n/2; i++)
       swap(str[i], str[n-i-1]);
}
int main() {
    string s;
    cin>>s;
    int n;
    cin>>n;
    bool firstCond=false,secondCond=false,final=false;
    while(n--)
    {
        string temp;
        cin>>temp;
        string temp2=temp;
        reverseStr(temp2);
        if(s == temp)
        {
            final=true;
            break;
        }
        
        else if(s == temp2)// strcmp(s,)
        {
            final=true;
            break;
        }
        else if(s[0] == temp[1])
        {
            //cout<<"fir";
            firstCond=true;
        }
        else if(s[1] == temp[0])
        {
            //cout<<"afir";
            secondCond=true;
        }
    }
    if(final || (firstCond && secondCond))
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
}
