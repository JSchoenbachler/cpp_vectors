#include <iostream>
#include <math.h>
#include "coord_vector.h"

using std::cout;
using std::endl;
using std::string;

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
    cout << "Vector2::left " << Vector2::left << endl;
    cout << "Vector2::zero " << Vector2::zero << endl;
    cout << "Vector2::up " << Vector2::up << endl;
    Vector3 v2Ex3v3 = v2Ex3.ToVector3();
    cout << "v2Ex3.ToVector3(): " << v2Ex3v3 << endl;
    v2Ex3v3 = v2Ex3.ToVector3(5);
    cout << "v2Ex3.ToVector3(5): " << v2Ex3v3 << endl;

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

    double pitch = DegreesToRadians(-60);
    double yaw = DegreesToRadians(30);
    double roll = DegreesToRadians(0);
    Vector3 relForward = RelativeForwardVector(pitch, yaw, roll);
    Vector3 relRight = RelativeRightVector(pitch, yaw, roll);
    Vector3 relUp = RelativeUpVector(pitch, yaw, roll);
    cout << "pitch: " << pitch << endl;
    cout << "yaw: " << pitch << endl;
    cout << "roll: " << pitch << endl;
    cout << "relForward: " << relForward << endl;
    cout << "relRight: " << relRight << endl;
    cout << "relUp: " << relUp << endl;


    return 0;
}