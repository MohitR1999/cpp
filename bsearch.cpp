#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector< vector<int> > vii;
typedef vector<string> vs;
typedef unordered_map<int, int> uii;
typedef unordered_map<char, int> uci;
typedef unordered_map<string, int> usi;

bool contains(float key, vi numbers) {
    int low = 0, high = numbers.size()-1;
    while (low!= high)
    {
        int mid = (low+high)/2;
        if(key == numbers[mid]) {
            return true;
        }
        else if (key > numbers[mid])
        {
            low = mid+1;
        }
        else
        {
            high = mid;
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vi nums = {1,2,3,4,5,6};
    cout<<contains(8,nums);
    return 0;
}
