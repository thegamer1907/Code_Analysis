#include <iostream>
using namespace std;

int main()
{
    string s,temp;
    cin >> s;
    int n;
    cin >>n;
    bool firstLetter=false,secondLetter=false;
    for (int i=0;i<n;i++){
        cin >> temp ;
        if(!firstLetter || !secondLetter ){

            if(temp[1]==s[0]){
                firstLetter =true;
            }

            if(temp[0]==s[1]){
                secondLetter =true;
            }
            if(s==temp){
                secondLetter = firstLetter =true;
            }
        }
    }

    if(secondLetter && firstLetter )
        cout <<"YES"<<endl;
    else
        cout <<"NO"<<endl;

    return 0;
}
