#include <iostream>
#include <math.h>
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

    Vector3 a = Vector3(4, 8, 10);
    Vector3 b = Vector3(9, 2, 7);
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "DotProductScalar(a, b): " << DotProductScalar(a, b) << endl;
    cout << "DotProductAngle(a, b): " << DotProductAngle(a, b) << endl;

    a = Vector3(2, 3, 4);
    b = Vector3(5, 6, 7);
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    Vector3 c = CrossProduct(a, b);
    cout << "CrossProduct(a, b): " << c << endl;

    double pi = 2*acos(0.0);
    Vector3 z = Vector3(1, 0, 0);
    cout << "z: " << z << endl;
    z = RotateAroundZ(pi / 2, z);
    cout << "z = RotateAroundZ(pi / 2, z);" <<endl;
    cout << "z: " << z << endl;


    return 0;
}