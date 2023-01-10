/*
    ***Bismillahir Rahmanir Rahim***
    date---: "24-07-2022"
    time---: "15-45-38"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n, m, k;
    cin >> n >> m >> k;

    vector<ll> applicants(n);
    vector<ll> apartments(m);

    for(auto &x : applicants) cin>> x;
    for(auto &x : apartments) cin>> x;

    sort(applicants.begin(), applicants.end());
    sort(apartments.begin(), apartments.end());
    ll count = 0, i = 0, j = 0;

    while (i  < n && j < m)
    {

        if(apartments[j] >= (applicants[i] - k) && apartments[j] <= (applicants[i] + k))
        {
            count++;
            i++;
            j++;
        }
        else if(apartments[j] < applicants[i]) j++;
        else i++;
    }

    cout << count << endl;

    return 0;
 
}