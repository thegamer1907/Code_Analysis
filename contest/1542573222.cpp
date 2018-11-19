#include <iostream>

using namespace std;

int main()
{

    string password,fakePass;
    int n;
    bool ispass=false;
    bool firstIsLast=false;
    bool LastIsFirst=false;

    cin>>password>>n;

    for(int i=0;i<n;i++){

        cin>>fakePass;

        if(fakePass==password) {
            ispass=true;
            continue;
        }else{
            if(fakePass[0]==password[1] && !firstIsLast){
                firstIsLast=true;
            }
            if(fakePass[1]==password[0] && !LastIsFirst ){
                LastIsFirst=true;
            }
        }
    }

    if(ispass ||(firstIsLast && LastIsFirst)){
        cout<<"YES";

    }
    else{
        cout<<"NO";
    }


    return 0;
}
