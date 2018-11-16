#include <iostream>

using namespace std;

char reverse(char ch){
    return (ch=='0'?'1':'0');
}

int main()
{
    string s;
    int cnt=1;
    cin>>s;
    char ch='0';
    for(int i=0;i<s.size();i++){
        
        if(s[i]==ch){
            cnt++;
            if(cnt==7){
                cout<<"YES"<<endl;
                return 0;
            }
        }
        else{
            cnt=1;
            ch=reverse(ch);
        }
    }
    cout<<"NO";

    return 0;
}
