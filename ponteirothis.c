#include <stdio.h>

class A{
    int x;

    public:
    int get_x(){
        return this->x;
    }
    void set_x(int x){
        this->x = x;
    }
    A* posicao(){
        x++;
        return this;
    }
};

int main(){
    A a;
    a.set_x(0);
    A *p = a.posicao() -> posicao() -> posicao();
    printf("%d\n", a.get_x());
    printf("%d\n", p->get_x());
}