#include <bits/stdc++.h>
using namespace std;

string resultGen(string games) {
    int anton = 0;
    int danik = 0;
    for(int i = 0; i<games.length(); i++) {
        if(games.at(i) == 'A') {
            anton++;
        }

        else
        {
            danik++;
        }
    }

    if(anton > danik) {
        return "Anton";
    }

    else if(anton < danik) {
        return "Danik";
    }

    else
    {
        return "Friendship";
    }
}

int main() {
    int n;
    string games;
    cin>>n;
    cin>>games;
    string result = resultGen(games);
    cout<<result;
    return 0;
}