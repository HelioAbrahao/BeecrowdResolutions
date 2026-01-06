#include <iostream>
using namespace std;

class Point{
    int x, y;
    
    public:
        Point(int x, int y){
            this->x = x;
            this->y = y;
        }

        bool isEqual(Point other){
            return(this->x == other.x && this->y == other.y);
        } /* O this->x é basicamente o x do p1. Mas por quê? 
             O this->y é basicamente o y do p1. Mas por quê?
            Porque na funcão principal o p1 é utilizado como objeto
no método comparativo. Então, representando isso:
             p1.isEqual(p2). Como p1 é utilizado antes do método o 
this vai apontar pra ele. E sendo assim o p1 vai ser comparado com 
p2 e não o p2 vai ser comparado com p1 (SIM, podem ter a mesma saída,
mas primariamete falando são coisas diferentes).
             p1.isEqual(p3). Aqio funciona da mesma forma do exemplo
anterior. A única diferenca é que o p1 é comparado com o p3. Aqui o 
this também vai apontar para o x e o y do p1, uma vez que o p1 está
antes do método. 
          */
};

int main(){
    Point p1(1, 2);
    Point p2(1, 2);
    Point p3(3, 4);

    cout << boolalpha;
    cout << "p1 == p2: " << p1.isEqual(p2) << endl;
    cout << "p1 == p3: " << p1.isEqual(p3) << endl;

    return 0;
}

/*
Saída: 
p1 == p2: true
p1 == p3: false
*/
