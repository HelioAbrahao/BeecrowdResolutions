#include <bits/stdc++.h>
using namespace std;

struct p{
 int id;
 int gold;
 int silver;
 int cooper;
};

bool func(p a, p b){
    if(a.gold != b.gold) return a.gold > b.gold;
    if(a.silver != b.silver) return a.silver > b.silver;
    if(a.cooper != b.cooper) return a.cooper > b.cooper;
    return a.id < b.id;
}

int main(){
    int a, b;
    cin >> a;
    p country[a];
    for(int i = 0; i < a; i++){
        country[i].id = i+1;
        country[i].gold = 0;
        country[i].silver = 0;
        country[i].cooper = 0;
    }
    cin >> b;
    for(int i = 0; i < b; i++){
        int g, s, c;
        cin >> g >> s >> c;
        country[g-1].gold++;
        country[s-1].silver++;
        country[c-1].cooper++;
    }
    
    sort(country, country + a, func);
    for (int i = 0; i < a; i++){
        cout << country[i].id << " ";
    }
    return 0;
}