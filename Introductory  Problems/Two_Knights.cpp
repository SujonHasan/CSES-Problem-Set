/*
    ***Bismillahir Rahmanir Rahim***
    date---: "08-10-2022"
    time---: "21-16-19"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    ll n, i, combination, kinghtMove;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        combination = ((i * i) * ((i * i ) - 1)) / 2;
        kinghtMove = 4 * (i - 1) * (i - 2);

        cout << combination - kinghtMove << endl;
    }
     
    return 0;
 
}