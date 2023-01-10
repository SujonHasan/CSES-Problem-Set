/*
    ***Bismillahir Rahmanir Rahim***
    date---: "24-07-2022"
    time---: "15-35-05"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;
 
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n, input;
    cin >> n;


    set<int> s;

    while (n--)
    {
        cin >> input;
        s.insert(input);
    }
    
    cout << s.size();
 
    return 0;
 
}