#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    Counter(int count) {
        this->count = count; // 'this' é necessário para diferenciar entre o parâmetro e o membro da classe
    }

    void increment() {
        this->count++;
    }

    void display() {
        cout << "Count: " << this->count << endl;
    }
};

int main() {
    Counter counter(5);
    counter.increment();
    counter.display(); // Output: Count: 6
    return 0;
}
