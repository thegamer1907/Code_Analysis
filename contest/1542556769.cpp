using namespace std;
#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAXN 104

string words[MAXN];

int main(){_
	string p, word;
	int n;
	bool temInicio = false, temFinal = false;
    bool contrario = false, igual = false;
    cin >> p >> n;

    while(n--){
        cin >> word;
        if(word[0] == p[1])
            temInicio = true;

        if(word[1] == p[0])
            temFinal = true;

        if(word == p)
            igual = true;

        if(word[0] == p[1] && word[1] == p[0])
            contrario = true;
    }

    if((temInicio && temFinal) || contrario || igual)
        cout << "YES";
    else cout << "NO";

    cout << endl;

	return 0;
}


// 1509242250911
