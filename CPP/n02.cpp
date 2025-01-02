// #include <iostream>
// using namespace std;

// class BaseR {
// protected:
//     int x;
// public:
//     BaseR() : x(10) {}
//     int getX() {
//         return x;
//     }
// };

// class DerivedS : public BaseR {
// public:
//     int y;
//     DerivedS() : y(20) {}
// };

// int main() {
//     DerivedS ds;
//     int result = (ds.getX() * ds.y) / 5;
//     cout << "Result: " << result;
//     return 0;
// }






// #include <iostream>
// using namespace std;

// class ClassX {
// private:
//     int x;
// public:
//     ClassX() : x(10) {}
//     int getX() {
//         return x;
//     }
// };

// class ClassY : public ClassX {
// public:
//     int y;
//     ClassY() : y(20) {}
// };

// int main() {
//     ClassY cy;
//     int result = (cy.getX() * cy.y) + 5;
//     cout << result;
//     return 0;
// }






// #include <iostream>
// using namespace std;

// class Base {
// public:
//     void display() {
//         cout << "Base";
//     }
// };

// class Derived : public Base {
// public:
//     void display() {
//         cout << "Derived";
//     }
// };

// int main() {
//     Derived d;
//     Base& b = d;
//     b.display();
//     return 0;
// }