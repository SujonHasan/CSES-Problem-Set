/*
    ***Bismillahir Rahmanir Rahim***
    date---: "02-10-2022"
    time---: "21-42-08"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


    int n;
    cin >> n;

    if(n == 2 || n == 3){

        cout << "NO SOLUTION" << endl;
        return 0;
    }

    for (int i = 2; i <= n; i++)
    {
        if(i % 2 == 0) cout << i << " ";
    }

    for (int i = 1; i <= n; i++)
    {
        if(i % 2 != 0) cout << i << " ";
    }

    cout << endl;

    return 0;
 
}