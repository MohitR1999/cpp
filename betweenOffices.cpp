#include <bits/stdc++.h>
using namespace std;

string result(string offices) {
    int seattleToFrancisco = 0;
    int franciscoToSeattle = 0;
    for(int i = 0; i<offices.length()-1; i++) {
        if(offices.at(i) == 'S' && offices.at(i+1) == 'F') {
            seattleToFrancisco++;
        }

        else if (offices.at(i) == 'F' && offices.at(i+1) == 'S')
        {
            franciscoToSeattle++;
        }

        else
        {
            continue;
        }
        
    }

    if(seattleToFrancisco > franciscoToSeattle) {
        return "YES";
    }

    else
    {
        return "NO";
    }
    
}

int main() {
    int num;
    cin>>num;
    string offices;
    cin>>offices;
    cout<<result(offices);
}