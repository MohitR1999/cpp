#include <bits/stdc++.h>
using namespace std;

vector<int> solution(int num) {
    vector<int> finalArray;
    if(num%2 == 0) {
        while(num!=0){
            num-=2;
            finalArray.push_back(2);
        }
        return finalArray;
    }
    else {
        int no_of_2s = (num/2)-1;
        while(no_of_2s!=0){
            finalArray.push_back(2);
            no_of_2s--;
        }
        finalArray.push_back(3);
        return finalArray;
    }
}

int main() {
    int num;
    cin>>num;
    vector<int> result = solution(num);
    cout<<result.size()<<endl;
    for(int i = 0; i<result.size(); i++) {
        cout<<result[i]<<" ";
    }
    return 0;
}