#include <iostream>
#include "vector.h"

using namespace std;

int main() {

    cout << "Beginning vector demo..." << endl;

    // Initializes 2 Vector2 objects.
    cout << "Vector2 v2Ex1 = Vector2(1, 2);" << endl;
    Vector2 v2Ex1 = Vector2(1, 2);
    cout << "Vector2 v2Ex2 = Vector2(2, 5);" << endl;
    Vector2 v2Ex2 = Vector2(2, 5);
    // Defines and modifies 3rd Vector2 object.
    cout << "Vector2 v2Ex3 = v2Ex1 + v2Ex2;" << endl;
    Vector2 v2Ex3 = v2Ex1 + v2Ex2;
    cout << "v2Ex3: " << v2Ex3 << endl;
    cout << "v2Ex3 += -6;" << endl;
    v2Ex3 += -6;
    cout << "v2Ex3: " << v2Ex3 << endl;
    Vector2 negv2Ex3 = -v2Ex3;
    cout << "-v2Ex3: " << negv2Ex3 << endl;
    cout << "v2Ex3.Magnitude(): " << v2Ex3.Magnitude() << endl;
    cout << "v2Ex3 == Vector2(2, 6): " << (v2Ex3 == Vector2(2, 6)) << endl;
    cout << "v2Ex3 == Vector2(-3, 1): " << (v2Ex3 == Vector2(-3, 1)) << endl;
    // Shows some static Vector2 values.
    cout << "Vector2::left " << (Vector2::left) << endl;
    cout << "Vector2::zero " << (Vector2::zero) << endl;
    cout << "Vector2::up " << (Vector2::up) << endl;

    return 0;
}