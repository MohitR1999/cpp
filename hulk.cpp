#include <bits/stdc++.h>
using namespace std;

string feelings(int n) {
    int flag = 1;
    string love = "I love ";
    string hate = "I hate ";
    string it = "it";
    string that = "that ";
    string temp = "";
    for(int i = 0; i<n; i++) {
        if(flag == 1) {
            temp = temp + hate + that;
            flag = flag * (-1);
        }
        else
        {
            temp = temp + love + that;
            flag = flag * (-1);
        }
    }
    temp.erase(temp.end() - 5, temp.end());
    temp += it;
    return temp;
}
int main() {
    int n;
    cin>>n;
    string result = feelings(n);
    cout<<result;
    return 0;
}