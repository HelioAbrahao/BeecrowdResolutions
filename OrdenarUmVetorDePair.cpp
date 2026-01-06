#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector < pair<int, string> > V;
    pair <int, string> tmp;

    for(int i = 0; i < 10; i++){
        cin >> tmp.first >> tmp.second;
        V.push_back(tmp);
    }
    return 0;
}