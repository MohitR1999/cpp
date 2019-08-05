#include <bits/stdc++.h>
using namespace std;

string resGenerator(string input, vector<string> inputCards) {
    for(int i = 0; i<5; i++) {
        if(inputCards[i].at(0) == input.at(0) || inputCards[i].at(1) == input.at(1)) {
            return "YES";
        }
    }
    return "NO";
}

int main() {
    string input, buff;
    vector<string> inputCards;
    cin>>input;
    for(int i = 0; i<5; i++) {
        cin>>buff;
        inputCards.push_back(buff);
    }
    string res = resGenerator(input, inputCards);
    cout<<res; 
    return 0;
}