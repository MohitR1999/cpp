#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<string> vs;
typedef unordered_map<int, int> uii;
typedef unordered_map<char, int> uci;
typedef unordered_map<string, int> usi;

int main() {
    vi zerosAndOnes = {0,0,0,0,1,1,1,1,1};
    int l = 0, h = zerosAndOnes.size()-1;
    int mid = 0;
    while(l!=h){
        /* code */
     mid = (l+h)/2;
     if(zerosAndOnes[mid]==1) {
         h = mid - 1;
     }
     else
     {
        l = mid + 1;
     }
    } 
    
    cout<<l;
    return 0;
}
