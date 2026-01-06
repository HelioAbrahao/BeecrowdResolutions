// #include <iostream>
// #include <map>
// using namespace std;

// int main(){
//     map <int, bool> album; 
//     int numero_figurinhas, figurinhas_compradas, contador = 0;
//     cin >> numero_figurinhas;
//     cin >> figurinhas_compradas; 

//     for(int i = 0; i < figurinhas_compradas; i++){
//         album[i]; 
//         album.at(i) = false; 
//     }

//     for(int i = 0; i < figurinhas_compradas; i++){
//         int number;
//         cin >> number; 

//         album[number]; 
//         album.at(number) = true; 
//     }

//     for(auto it = album.begin(); it != album.end(); it++){
//         if(it->second == true){
//             contador++; 
//         }
//     }

//     cout << numero_figurinhas - contador << endl; 

//     return 0; 
// }

#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> album;
    int numero_figurinhas, figurinhas_compradas;

    cin >> numero_figurinhas >> figurinhas_compradas;

    for(int i = 0; i < figurinhas_compradas; i++){
        int number;
        cin >> number;

        album.insert(number);
    }

    cout << numero_figurinhas - album.size() << endl;


    return 0; 
}