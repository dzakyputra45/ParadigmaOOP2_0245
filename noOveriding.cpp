#include <iostream>
using namespace std;

class baseClass final{
public:
    virtual void perkenalan() final {
         cout << "Hanya saya function dari base class";
    }
};

class derivedclass : public baseClass {
public:
    void perkenalan() {
        cout << "Hanya saya function dari Derived class";
    }
};

int main (){
    derivedclass a;
    a.perkenalan();

    return 0;
}