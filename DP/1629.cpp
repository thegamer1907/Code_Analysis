#include <bits/stdc++.h>
using namespace std;

int main(){
    string input;
    while(cin >> input){

        int len = input.length();
        bool check1 = false, check2 = false;
        string curr_state;

        ///Check 1
        curr_state = "q0";
        for(int i = 0; i < len; i++){
            //cout << curr_state << " -> ";
            if(curr_state == "q0"){
                if(input[i] == 'A') curr_state = "q1";
            }
            else if(curr_state == "q1"){
                if(input[i] == 'B') curr_state = "q2";
                else if(input[i] == 'A'){}
                else curr_state = "q0";
            }
            else if(curr_state == "q2"){
                if(input[i] == 'B') curr_state = "q3";
            }
            else if(curr_state == "q3"){
                if(input[i] == 'A') curr_state = "q4";
                else if(input[i] == 'B') {}
                else curr_state = "q2";
            }
            //cout << curr_state << endl;
        }
        if(curr_state == "q4") check1 = true;

        ///Check2

        curr_state = "qi";
        for(int i = 0; i < len; i++){
            //cout << curr_state << " -> ";
            if(curr_state == "qi"){
                if(input[i] == 'B') curr_state = "qa";
            }
            else if(curr_state == "qa"){
                if(input[i] == 'A') curr_state = "qb";
                else if(input[i] == 'B'){}
                else curr_state = "qi";
            }
            else if(curr_state == "qb"){
                if(input[i] == 'A') curr_state = "qc";
            }
            else if(curr_state == "qc"){
                if(input[i] == 'B') curr_state = "qd";
                else if(input[i] == 'A') {}
                else curr_state = "qb";
            }
            //cout << curr_state << endl;
        }
        if(curr_state == "qd") check2 = true;
        if(check1 || check2) printf("YES\n");
        else printf("NO\n");
    }
}
