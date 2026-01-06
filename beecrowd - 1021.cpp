#include <iostream>
using namespace std;

int main(){
    double number;
    cin >> number;

    number = (int) (number * 100 + 0.5);

    int notas_100 = 0, notas_50 = 0, notas_20 = 0, notas_10 = 0, notas_5 = 0, notas_2 = 0, moedas_1 = 0, moedas_50 = 0, moedas_25 = 0, moedas_10 = 0, moedas_05 = 0, moedas_01 = 0;

    while(number > 0){
        if(10000 <= number){
            number = number - 10000;
            notas_100++;
        } else if (5000 <= number){
            number = number - 5000;
            notas_50++;
        } else if (2000 <= number){
            number = number - 2000; 
            notas_20++;
        } else if (1000 <= number){
            number = number - 1000;
            notas_10++;
        } else if (500 <= number){
            number = number - 500;
            notas_5++;
        } else if (200 <= number){
            number = number - 200;
            notas_2++;
        } else if (100 <= number){
            number = number - 100;
            moedas_1++;
        } else if (50 <= number){
            number = number - 50;
            moedas_50++;
        } else if (25 <= number){
            number = number - 25;
            moedas_25++;
        } else if (10 <= number){
            number = number - 10;
            moedas_10++;
        } else if (5 <= number){
            number = number - 5;
            moedas_05++;
        } else if (1 <= number){
            number = number - 1;
            moedas_01++; 
        }
    }

    cout << "NOTAS:" << endl; 
    cout << notas_100 << " nota(s) de R$ 100.00" << endl;
    cout << notas_50 << " nota(s) de R$ 50.00" << endl;
    cout << notas_20 << " nota(s) de R$ 20.00" << endl;
    cout << notas_10 << " nota(s) de R$ 10.00" << endl;
    cout << notas_5 << " nota(s) de R$ 5.00" << endl;
    cout << notas_2 << " nota(s) de R$ 2.00" << endl;
    
    cout << "MOEDAS:" << endl; 
    cout << moedas_1 << " moeda(s) de R$ 1.00" << endl;
    cout << moedas_50 << " moeda(s) de R$ 0.50" << endl;
    cout << moedas_25 << " moeda(s) de R$ 0.25" << endl;
    cout << moedas_10 << " moeda(s) de R$ 0.10" << endl;
    cout << moedas_05 << " moeda(s) de R$ 0.05" << endl;
    cout << moedas_01 << " moeda(s) de R$ 0.01" << endl;

    return 0;
}