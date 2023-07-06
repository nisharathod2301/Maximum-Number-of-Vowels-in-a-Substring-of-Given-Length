// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    // std::cout << "Hello world!";
    string s = "weallloveyou";
    int k = 7; 
    // cout<<s.length();
    int r = k;
    int count = 0;
    int nor = 0;
    int j = 0;
    while(j<s.size()-r+1){
    for(int i = j; i < k; i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' 
        || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            nor++;
        }
    }
    
    if(nor>=count) count = nor;
    nor = 0;
    j++;
    k++;
}
    cout<<count;
    return 0;
}
