#include <bits/stdc++.h>

using namespace std;

double err = pow(10,-10);


vector<string> split(string strToSplit, char delimeter){
    stringstream ss(strToSplit);
    string item;
    vector<string> splittedStrings;
    while (getline(ss, item, delimeter))
       splittedStrings.push_back(item);
    return splittedStrings;
}


int main(){

    string line;
    vector<string> line_splitted;

    while(getline(cin, line)){
        line_splitted = split(line, ' ');
        int n = stoi(line_splitted[0]);
        int l = stoi(line_splitted[1]);

        int lanterns[n];

        getline(cin, line);
        line_splitted = split(line, ' ');
        for(int i=0; i<n; i++)
            lanterns[i] = stoi(line_splitted[i]);

        // Ordenar arreglo
        sort(lanterns,lanterns+n);

        double max_dist = lanterns[0];
        for(int i=0; i<n-1; i++){
            if(lanterns[i+1]-lanterns[i]>2*max_dist)
                max_dist = (lanterns[i+1]-lanterns[i])/2.0;
        }

        if (l - lanterns[n-1]>max_dist)
            max_dist = l - lanterns[n-1];
        
        // Busqueda binaria
        double min = 0, max = l, d;
        while(max-min>err){
            d = (min + max)/2.0;
            
            if(d>max_dist)
                max = d - err;
            else
                min = d;

        }

        // Retornar respuesta
        printf("%.10lf\n", max);
    }
    return 0;
}
// 1538737365246
