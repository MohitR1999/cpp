#include<bits/stdc++.h>
using namespace std;

int getWidth(int num, int height, vector<int> heights) {
    int width = 0;
    for(int i = 0; i<heights.size(); i++) {
        if(heights[i] <= height) {
            width += 1;
        }

        else
        {
            width += 2;
        }
    }
    return width;
}

int main() {
    int num, height, temp;
    vector<int> heights;
    cin>>num>>height;
    for(int i  = 0; i<num; i++) {
        cin>>temp;
        heights.push_back(temp);
    }

    int result = getWidth(num, height, heights);
    cout<<result;
    return 0;
}