#include <bits/stdc++.h>
using namespace std;

int result(vector<vector<int>> matrix) {
    int x,y;
    for(int i = 0; i<5; i++) {
        for(int j = 0; j<5; j++){
            if(matrix[i][j] == 1){
                x = i;
                y = j;
                break;
            }
        }
    }

    int xres = abs(x - 2);
    int yres = abs(y - 2);
    //cout<<xres<<","<<yres;
    return xres + yres;
}

int main() {
    vector<vector<int>> matrix(5, vector<int>(5,0));
    for(int i = 0; i<5; i++) {
        for(int j=0; j<5; j++){
            cin>>matrix[i][j];
        }
    }

    cout<<result(matrix);
}