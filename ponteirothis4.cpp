#include <iostream>
using namespace std;

class Printer{
public:
    void print(const string text){
        cout << text << endl;
    }
};

class Document{
    string content;

    public:
        Document(string content){
            this->content = content;
        }

        void printDocument(Printer printer){
            printer.print(this->content);
        }
};

int main(){
    Printer printer;
    Document doc("Hello, world!");
    doc.printDocument(printer);
    return 0;
}