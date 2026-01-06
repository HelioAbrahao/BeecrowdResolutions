#include <iostream>
using namespace std;

int main(){
    float pedro, paulo;
    cin >> pedro >> paulo;

    if(pedro < paulo || pedro == paulo){
        cout << "Pedro" << endl;
    }else{
        cout << "Paulo" << endl;
    }

    return 0;
}