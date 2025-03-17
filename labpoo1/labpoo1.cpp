#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "s-a creat un obiect de tip A" << "\n";
    }
    virtual ~A() {
        cout << "s-a sters un obiect de tip A" << "\n";
    }
    void SetStatus(string newS) {
        m_status = newS;
    }
    string GetStatus() {
        return m_status;
    }
private:
    string m_status;
};

class B : public A {
public:
    B() {
        cout << "s-a creat un obiect de tip B" << "\n";
    }
    ~B() {
        cout << "s-a sters un obiect de tip B" << "\n";
    }
};
class Printable {
   virtual void DrawMe() = 0;
};
class Shape : public Printable {

};
class Square : public Shape {
};

int main() {
    /*A* A_ptr = new A();
    A* B_ptr = new B();
    A_ptr->SetStatus("sal");
    B_ptr->SetStatus("sall");
    cout << A_ptr->GetStatus();
    cout << B_ptr->GetStatus();
    delete A_ptr;
    delete B_ptr;*/
    Square patrat;
}
