#include <iostream>

using namespace std;

int main()
{
    int z,y,s;
    char a,b,c;
    string word;
    cin>>y>>s;
    cin >> word;

    for(int i=0;i<s;i++){
        for(int x=0;word[x];x++){
            c=word[x];
            b=word[x+1];
            if(c=='B'&&b=='G'){
                word[x]='G';
                word[x+1]='B';
                x++;
            }
        }
    }
    cout << word;
    return 0;
}
