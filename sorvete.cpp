#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<int, int>> intervalos;

    int p, s, u, v;
    cin >> p >> s;

    for(int i = 0; i < s; i++){
        cin >> u >> v;
        intervalos.push_back(make_pair(u, v));
    }

    sort(intervalos.begin(), intervalos.end());

    vector <pair<int,int>> merged_intervalos;

    if(!intervalos.empty()){
        int start = intervalos[0].first;
        int end = intervalos[0].second;

        for(int i = 1; i < intervalos.size(); i++){
            if(intervalos[i].first <= end){
                end = max(end, intervalos[i].second);
            }else{
                merged_intervalos.push_back(make_pair(start, end));
                start = intervalos[i].first;
                end = intervalos[i].second;
            }
        }
        merged_intervalos.push_back(make_pair(start, end));
    }

    for(int i = 0; i < merged_intervalos.size(); i++){
        cout << merged_intervalos[i].first << " " << merged_intervalos[i].second << endl;
    }
    cout << endl;
    
    return 0;
}
