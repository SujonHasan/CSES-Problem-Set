/*
    ***Bismillahir Rahmanir Rahim***
    date---: "02-10-2022"
    time---: "18-50-42"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    ll n;

    cin >> n;

    while (n != 1)
    {
        cout  << n << " ";
        if(n % 2 == 0) n /= 2;
        else n = (n * 3) + 1;
    }

    cout << n << endl;
 
    return 0;
 
}