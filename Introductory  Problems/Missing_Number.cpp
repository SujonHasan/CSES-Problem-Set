/*
    ***Bismillahir Rahmanir Rahim***
    date---: "02-10-2022"
    time---: "19-03-26"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n;
    cin >> n;
    vector<int> v(n-1);

    for (int i = 0; i < n - 1; i++)
    {
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());

    int missing = n;
    int check = 1;

    for (int i = 0; i < n - 1; i++)
    {
        if(v[i] != check){
            missing = check;
            break;
        }
        else check++;
    }
    
    cout << missing << endl;

 
    return 0;
 
}