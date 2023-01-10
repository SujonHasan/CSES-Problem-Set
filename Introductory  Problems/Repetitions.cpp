/*
    ***Bismillahir Rahmanir Rahim***
    date---: "02-10-2022"
    time---: "19-23-55"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    string s;
    cin >> s;

    int mx = 1;
    int count = 1;

    for (int i = 1; i < s.size(); i++)
    {
        if(s[i] == s[i-1]){
            count++;
        }
        else{
            count = 1;
        }

        if(count > mx ) mx = count;
    }

    cout << mx << endl;
 
    return 0;
 
}