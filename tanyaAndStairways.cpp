#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vector<int>> vii;
typedef vector<string> vs;
typedef unordered_map<int, int> uii;
typedef unordered_map<char, int> uci;
typedef unordered_map<string, int> usi;

vi resultGen(vi spokenNums, int &stairs) {
    for(int i = 0; i < spokenNums.size(); i++) {
        if( spokenNums[i] == 1) {
            stairs++;
        }
    } 
    
    vi steps;

    spokenNums.insert(spokenNums.begin(), 0);
    spokenNums.push_back(1);
    for(int i = 0; i < spokenNums.size(); i++) {
        if(spokenNums[i]==1) {
            steps.push_back(spokenNums[i-1]);
        }
    }
    steps.erase(steps.begin());
    return steps;
}

int main() {
    int num;
    cin>>num;
    vi spoken(num);
    for(int i = 0; i < spoken.size(); i++) {
        cin>>spoken[i];
    }
    int stairs = 0;
    vi stepsInEach = resultGen(spoken, stairs);
    cout<<stairs<<endl;
    for(int i = 0; i < stepsInEach.size(); i++) {
        cout<<stepsInEach[i]<<" ";
    }
    return 0;
}
