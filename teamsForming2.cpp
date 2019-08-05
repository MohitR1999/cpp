#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector< vector<int> > vii;
typedef vector<string> vs;
typedef unordered_map<int, int> uii;
typedef unordered_map<char, int> uci;
typedef unordered_map<string, int> usi;

int skillsDeterminer(vi skills) {
    sort(skills.begin(), skills.end());
    int res = 0;
    for(int i = 0; i < skills.size()-1; i++) {
        if(skills[i]!=-1 && skills[i+1]!=-1) {
        res += skills[i+1] - skills[i];
        skills[i] = skills[i+1] = -1;
        }
        else {
            continue;
        }
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //Insert your f**king code here
    int students;
    cin>>students;
    vi skills(students);
    for(int i = 0; i < students; i++) {
        cin>>skills[i];
    }
    int minSkills = skillsDeterminer(skills);
    cout<<minSkills;
    return 0;
}
