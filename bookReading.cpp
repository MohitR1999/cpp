#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector< vector<int> > vii;
typedef vector<string> vs;
typedef unordered_map<int, int> uii;
typedef unordered_map<char, int> uci;
typedef unordered_map<string, int> usi;
typedef vector< pair<int, int> > vpii;
typedef vector< pair<string, string> > vpss;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //Insert your f**king code here
    int chapters;
    cin>>chapters;
    vi singleBook(3);
    vii bookDetails;
    int completed = 0;
    int firstPage, lastPage;
    while(chapters--) {
        // cin>>firstPage>>lastPage;
        // cout<<"firstpage: "<<firstPage<<" lastpage: "<<lastPage<<endl;
        // singleBook.push_back(firstPage);
        // singleBook.push_back(lastPage);
        // singleBook.push_back(completed);
        cin>>singleBook[0]>>singleBook[1];
        //cout<<"singlebook[0]: "<<singleBook[0]<<" singlebook[1]: "<<singleBook[1]<<" singlebook[2]: "<<singleBook[2]<<endl;
        bookDetails.push_back(singleBook);
    }
    int k, count = 0;
    cin>>k;

    // for(int i = 0; i < bookDetails.size(); i++) {
    //     cout<<bookDetails[i][0]<<" "<<bookDetails[i][1]<<" "<<bookDetails[i][2]<<endl;
    // }

    for(int i = 0; i < bookDetails.size(); i++) {
        if(k > bookDetails[i][1]) {
            bookDetails[i][2] = 1;
            ++count;
        }
    }

    // for(int i = 0; i < bookDetails.size(); i++) {
    //     cout<<bookDetails[i][0]<<" "<<bookDetails[i][1]<<" "<<bookDetails[i][2]<<endl;
    // }
    // cout<<"count"<<count<<endl;
    cout<<bookDetails.size()-count;
    return 0;
}
