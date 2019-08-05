#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector< vector<int> > vii;
typedef vector<string> vs;
typedef unordered_map<int, int> uii;
typedef unordered_map<char, int> uci;
typedef unordered_map<string, int> usi;

int skillsDeterminer(vi skills) {
    vector < pair<int, int> > studentTeams;    
    for(int i = 0; i < skills.size(); i++) {
        int currentPerson = skills[i];
        int diff = 10000;
        int secondPerson = 0;
        for(int j = 0; j < skills.size(); j++) {
            if(j!=i && skills[j]!=-1 && skills[i]!= -1) {
                int newDiff = abs(skills[i]-skills[j]);
                if(newDiff < diff) {
                    diff = newDiff;
                    secondPerson = j;
                }
            }    
        }
        studentTeams.push_back(make_pair(currentPerson,skills[secondPerson]));
        skills[i] = -1;
        skills[secondPerson] = -1;
    }
    
    for(int i = 0; i < studentTeams.size(); i++) {
        cout<<studentTeams[i].first<<" : "<<studentTeams[i].second<<endl;
    }
    
    int minQues = 0;
    for(int i = 0; i < studentTeams.size(); i++) {
        if(studentTeams[i].first == -1 && studentTeams[i].second == -1) {
            continue;
        }
        else {
            int diff = abs(studentTeams[i].first - studentTeams[i].second);
            minQues += diff;
        }
    }
    return minQues;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
