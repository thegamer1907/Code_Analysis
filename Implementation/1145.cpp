#include <iostream>
#include <string>

using namespace std;
int main()
{
    short n,t;
    cin >> n>>t;
    string str;
    cin >> str;
    t+=1;
    while(--t){
        for(int i =0;i < str.length()-1;++i){
            if(str[i]=='B' && str[i+1] =='G'){
                str[i]='G';
                str[i+1] = 'B';
                i++;
            }
        }
    }
    
    cout << str;
    return 0;
}
