#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector <int> first_vector;
    vector <int> second_vector; 

    int number, contador = 0;
    cin >> number;

    for(int i = 0; i < number; i++){
        int var; 
        cin >> var; 

        contador = 0; 
        first_vector.clear();
        second_vector.clear();

        for(int i = 0; i < var; i++){
            int student_grade;
            cin >> student_grade; 

            first_vector.push_back(student_grade);
            second_vector.push_back(student_grade);
        }

        sort(first_vector.begin(), first_vector.end(), greater<int>());

        for(int i = 0; i < var; i++){
            if(second_vector[i] == first_vector[i]){
                contador++;
            }
        }
        
        cout << contador << endl; 
    }

    return 0;
}