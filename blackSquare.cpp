#include<bits/stdc++.h>
using namespace std;

int calFinder(vector<int> calories, string squares) {
    unordered_map <int, int> calTable;
    for(int  i = 0; i<calories.size(); i++) {
        calTable[i+1] = calories[i];
    }
    int sum = 0;
    for(int i = 0; i<squares.length(); i++) {
        sum += calTable[squares[i] - '0'];
    }
    return sum;
}

int main() {
    vector<int> calories(4);
    for(int i = 0; i<calories.size(); i++) {
        cin>>calories[i];
    }
    string squares;
    cin>>squares;
    int res = calFinder(calories, squares);
    cout<<res;
    return 0;
}