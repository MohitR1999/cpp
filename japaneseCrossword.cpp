#include<bits/stdc++.h>
using namespace std;
template<class T>
void display(vector<T> v) {
    for(int i = 0; i < v.size(); i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

vector<int> resultGen(string crossword, int &noOfGroups) {
    vector <string> groups;
    string group;
    stringstream ss;
    for(int i = 0; i < crossword.size(); i++) {
        if(crossword[i] == 'W') {
            crossword[i] = ' ';
        }
    }
    ss << crossword;
    while (ss >> group) {
        groups.push_back(group);
    }
    //display(groups);
    noOfGroups = groups.size();
    vector<int> noOfelements;
    for(int i = 0; i < groups.size(); i++) {
        noOfelements.push_back(groups[i].length());
    }
    return noOfelements;
}

int main() {
    int num;
    cin>>num;
    string crossword;
    cin>>crossword;
    int noOfGroups = 0;
    resultGen(crossword, noOfGroups);
    vector<int> groupElements = resultGen(crossword, noOfGroups);
    cout<<noOfGroups<<endl;
    for(int i = 0; i < groupElements.size(); i++) {
        cout<<groupElements[i]<<" ";
    }    
    return 0;
}
