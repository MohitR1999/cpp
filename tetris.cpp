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
typedef set< string > ss;
typedef set< int > si;
typedef set< char > sc;

wstring tetromino[7];
int nFieldWidth = 12;
int nFieldHeight = 18;
unsigned char* pField = nullptr;

int rotate(int px, int py, int r) {
    switch (r%4)
    {
    case 0: return py*4 + px;
    case 1: return 12 + py - (px*4);
    case 2: return 15 - (py*4) - px;
    case 3: return 3 - py + (px * 4);
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //Insert your f**king code here
    tetromino[0].append(L"..X...X...X...X."); // Tetronimos 4x4
	tetromino[1].append(L"..X..XX...X.....");
	tetromino[2].append(L".....XX..XX.....");
	tetromino[3].append(L"..X..XX..X......");
	tetromino[4].append(L".X...XX...X.....");
	tetromino[5].append(L".X...X...XX.....");
	tetromino[6].append(L"..X...X..XX.....");

    pField = new unsigned char[nFieldWidth*nFieldHeight]; // Create play field buffer
	for (int x = 0; x < nFieldWidth; x++) // Board Boundary
		for (int y = 0; y < nFieldHeight; y++)
			pField[y*nFieldWidth + x] = (x == 0 || x == nFieldWidth - 1 || y == nFieldHeight - 1) ? 9 : 0;

    
    return 0;
}
