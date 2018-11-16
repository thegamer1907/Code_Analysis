#include <iostream>
#include<stdio.h>
#include <string>
#include <bits/stdc++.h>

using namespace std;
const int ABC = 1e6 + 5 ;
//char word[ ABC ];
int main()
{
    string word ;

    cin >> word ;
//    int length = strlen(word);
   int x1 = word.find("AB");
   int x2 = word.find("BA" , x1+2 );
   int y1 = word.find("BA");
   int y2 = word.find("AB" , y1+2 );

   if((x1!=-1 && x2!=-1) || (y1!=-1 && y2!=-1)){
   puts("YES") ;
   }
   else
puts("NO") ;


}