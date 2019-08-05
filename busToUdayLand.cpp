#include <bits/stdc++.h>
using namespace std;

vector<string> arrange(vector<string> seats, string &result) {
    vector<string> finalSeats = seats;

    for(int i = 0; i<finalSeats.size(); i++) {
        string row = finalSeats.at(i);
        for(int j = 0; j < row.length()-1; j++) {
            if(row[j] == 'O' && row[j+1] == 'O') {
                result = "YES";
                row[j] = row[j+1] = '+';
                finalSeats.at(i) = row;
                return finalSeats;
            }
        }
    }
    return finalSeats;
}

int main() {
    int num;
    cin>>num;
    vector<string> seats;
    string row, result = "NO";
    for(int i = 0; i<num; i++) {
        cin>>row;
        seats.push_back(row);
    }
    vector<string> finalSeats = arrange(seats, result);
    if(result == "YES") {
        cout<<result<<endl;
        for(int i = 0; i<finalSeats.size(); i++) {
            cout<<finalSeats[i]<<endl;
        }
    }

    else
    {
        cout<<result;
    }
    
    return 0;
}