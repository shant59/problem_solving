#include<bits/stdc++.h>
using namespace std;
int main()
{
    ofstream txt("sample.txt");
    cout<<"Enter your name";
    string name;
    cin>>name;
    txt<<"My name is"+name;
    return 0;
}