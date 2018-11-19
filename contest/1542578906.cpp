#include <iostream>

using namespace std;

int main()
{
    int x;
    string pass;
    cin >> pass;
    cin >>x;
    string word;
    bool lower = false;
    bool upper = false;
    bool done = false;

    for( int i=0 ; i<x ; i++){
    cin >> word;

    if(word == pass){
    done = true;

    }
    else if(word[0] == pass[1] && word[1] == pass[0]) {
    done = true;

    }
    else if(word[0] == pass[1]){
    lower = true;

    if(upper){
    done = true;

    }
    }
    else if(word[1] == pass[0]){
    upper = true;
    if(lower){

    done = true;
    }

    }


}

 if(done)
    cout <<"YES"<<endl;
    else
        cout <<"NO"<<endl;

    return 0;
}
