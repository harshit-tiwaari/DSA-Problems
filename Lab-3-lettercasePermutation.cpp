#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void printPermutation(vector <char> str, int pos)
{
   
    if(pos == str.size())
    {
        for(auto i : str)
        cout<<i;
        
        cout<<endl;
        return;
    }
  
    if (str[pos] >= '0' && str[pos] <= '9') 
    {
        printPermutation(str, pos + 1);
        return;
    }
    

    
    str[pos] = tolower(str[pos]);
    printPermutation(str, pos + 1);
    
    str[pos] = toupper(str[pos]);
    printPermutation(str, pos + 1);
}
int main()
{
    string input = "a1b2c3";
   
    vector <char> str(input.begin(),input.end());
    
    printPermutation(str,0);
    return 0;
}
