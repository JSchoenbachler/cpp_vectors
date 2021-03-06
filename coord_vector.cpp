#include <iostream>
#include "coord_vector.h"
#include <string>
#include <vector>
#include <math.h>

/*
Vector2 definitions.
*/

// Vector2 constructors.
Vector2::Vector2(float x, float y)
:
x(x),
y(y)
{
}
Vector2::Vector2(float xy)
:
x(xy),
y(xy)
{
}
Vector2::Vector2(const Vector2& v2)
:
x(v2.x),
y(v2.y)
{
}

// Vector2 functions.
std::string Vector2::ToString() const {
    std::string s = "Vector2(" + std::to_string(x) + ", " + std::to_string(y) + ")";
    return s; 
}
float Vector2::Magnitude() const {
    return pow((x * x) + (y * y), 0.5);
}
Vector2 Vector2::Normalize() const {
    float mag = this->Magnitude();
    if(mag != 0) {
        return Vector2(x / mag, y / mag);
    } else {
        return Vector2(0);
    }
}
Vector3 Vector2::ToVector3(float z) const {
    return(Vector3(x, y, z));
}

//Vector2 operator overloads.
Vector2 Vector2::operator+(Vector2 const &rhs) {
    return Vector2(x + rhs.x, y + rhs.y);
}
void operator+=(Vector2 &lhs, Vector2 const &rhs) {
    lhs = lhs + rhs;
}
void Vector2::operator++(int) {
    x++;
    y++;
}
Vector2 Vector2::operator-(Vector2 const &rhs) {
    return Vector2(x - rhs.x, y - rhs.y);
}
void operator-=(Vector2 &lhs, Vector2 const &rhs) {
    lhs = lhs - rhs;
}
void Vector2::operator--(int) {
    x--;
    y--;
}
Vector2 Vector2::operator-() {
    return(Vector2(-x, -y));
}
Vector2 Vector2::operator*(Vector2 const &rhs) {
    return Vector2(x * rhs.x, y * rhs.y);
}
void operator*=(Vector2 &lhs, Vector2 const &rhs) {
    lhs = lhs * rhs;
}
Vector2 Vector2::operator/(Vector2 const &rhs) {
    return Vector2(x / rhs.x, y / rhs.y);
}
void operator/=(Vector2 &lhs, Vector2 const &rhs) {
    lhs = lhs / rhs;
}
bool operator==(Vector2 const &lhs, Vector2 const &rhs) {
    return (lhs.x == rhs.x & lhs.y == rhs.y);
}
bool operator!=(Vector2 const &lhs, Vector2 const &rhs) {
    return (lhs.x != rhs.x | lhs.y != rhs.y);
}
Vector2& Vector2::operator=(const Vector2& v2) {
    this->x = v2.x;
    this->y = v2.y;
    return *this;
}
std::ostream& operator<<(std::ostream& os, Vector2& v2) {
    os << v2.ToString();
    return os;
}
std::ostream& operator<<(std::ostream& os, const Vector2& v2) {
    os << v2.ToString();
    return os;
}
std::istream& operator>>(std::istream& is, Vector2& v2) {
    is >> v2.x >> v2.y;
    return is;
}

/*
Vector3 definitions.
*/

// Vector3 constructors.
Vector3::Vector3(float x, float y, float z)
:
x(x),
y(y),
z(z)
{
}
Vector3::Vector3(float xyz)
:
x(xyz),
y(xyz),
z(xyz)
{
}
Vector3::Vector3(Vector2& v2)
:
x(v2.x),
y(v2.y),
z(0)
{
}
Vector3::Vector3(Vector2& v2, float z)
:
x(v2.x),
y(v2.y),
z(z)
{
}
Vector3::Vector3(const Vector3& v3)
:
x(v3.x),
y(v3.y),
z(v3.z)
{
}
// Vector3 functions.
std::string Vector3::ToString() const {
    std::string s = "Vector3(" + std::to_string(x) + ", " + std::to_string(y) + ", " + std::to_string(z) + ")";
    return s; 
}
float Vector3::Magnitude() const {
    return pow((x * x) + (y * y) + (z * z), 0.5);
}
Vector3 Vector3::Normalize() const {
    float mag = this->Magnitude();
    if(mag != 0) {
        return Vector3(x / mag, y / mag, z / mag);
    } else {
        return Vector3(0);
    }
}
Vector2 Vector3::ToVector2() const {
    return(Vector2(x, y));
}
//Vector3 operator overloads.
Vector3 Vector3::operator+(const Vector3& rhs) {
    return Vector3(x + rhs.x, y + rhs.y, z + rhs.z);
}
void operator+=(Vector3 &lhs, Vector3 const &rhs) {
    lhs = lhs + rhs;
}
void Vector3::operator++(int) {
    x++;
    y++;
    z++;
}
Vector3 Vector3::operator-(Vector3 const &rhs) {
    return Vector3(x - rhs.x, y - rhs.y, z - rhs.z);
}
void operator-=(Vector3 &lhs, Vector3 const &rhs) {
    lhs = lhs - rhs;
}
void Vector3::operator--(int) {
    x--;
    y--;
    z--;
}
Vector3 Vector3::operator-() {
    return(Vector3(-x, -y, -z));
}
Vector3 Vector3::operator*(Vector3 const &rhs) {
    return Vector3(x * rhs.x, y * rhs.y, z * rhs.z);
}
void operator*=(Vector3 &lhs, Vector3 const &rhs) {
    lhs = lhs * rhs;
}
Vector3 Vector3::operator/(Vector3 const &rhs) {
    return Vector3(x / rhs.x, y / rhs.y, z / rhs.z);
}
void operator/=(Vector3 &lhs, Vector3 const &rhs) {
    lhs = lhs / rhs;
}
bool operator==(Vector3 const &lhs, Vector3 const &rhs) {
    return (lhs.x == rhs.x & lhs.y == rhs.y & lhs.z == rhs.z);
}
bool operator!=(Vector3 const &lhs, Vector3 const &rhs) {
    return (lhs.x != rhs.x | lhs.y != rhs.y | lhs.z != rhs.z);
}
Vector3& Vector3::operator=(const Vector3& v3) {
    this->x = v3.x;
    this->y = v3.y;
    this->z = v3.z;
    return *this;
}
std::ostream& operator<<(std::ostream& os, Vector3& v3) {
    os << v3.ToString();
    return os;
}
std::ostream& operator<<(std::ostream& os, const Vector3& v3) {
    os << v3.ToString();
    return os;
}
std::istream& operator>>(std::istream& is, Vector3& v3) {
    is >> v3.x >> v3.y >> v3.z;
    return is;
}

// Vector2 and Vector3 static instances.
// Operates on left-hand y-up coordinate system.
Vector2 const Vector2::zero = Vector2(0, 0);
Vector2 const Vector2::one = Vector2(1, 1);
Vector2 const Vector2::right = Vector2(1, 0);
Vector2 const Vector2::up = Vector2(0, 1);
Vector2 const Vector2::left = Vector2(-1, 0);
Vector2 const Vector2::down = Vector2(0, -1);

Vector3 const Vector3::zero = Vector3(0, 0, 0);
Vector3 const Vector3::one = Vector3(1, 1, 1);
Vector3 const Vector3::right = Vector3(1, 0, 0);
Vector3 const Vector3::up = Vector3(0, 1, 0);
Vector3 const Vector3::forward = Vector3(0, 0, 1);
Vector3 const Vector3::left = Vector3(-1, 0, 0);
Vector3 const Vector3::down = Vector3(0, -1, 0);
Vector3 const Vector3::back = Vector3(0, 0, -1);

// Vector 2 product functions.
float DotProductScalar(Vector2& a, Vector2& b) {
    return ((a.x * b.x) + (a.y * b.y));
}
float DotProductAngle(Vector2& a, Vector2& b) {
    float val = DotProductScalar(a, b);
    val /= (a.Magnitude() * b.Magnitude());
    return acos(val);
}
// Vector3 product functions.
float DotProductScalar(Vector3& a, Vector3& b) {
    return ((a.x * b.x) + (a.y * b.y) + (a.z * b.z));
}
float DotProductAngle(Vector3& a, Vector3& b) {
    float val = DotProductScalar(a, b);
    val /= (a.Magnitude() * b.Magnitude());
    return acos(val);
}
Vector3 CrossProduct(Vector3& a, Vector3& b) {
    float cx = (a.y * b.z) - (a.z * b.y);
    float cy = (a.z * b.x) - (a.x * b.z);
    float cz = (a.x * b.y) - (a.y * b.x);
    return Vector3(cx, cy, cz);
}
// Rotation-relative vector functions.
Vector3 RotateAroundX(float theta, Vector3 v3) {
    float cosTheta = cos(theta);
    float sinTheta = sin(theta);
    float x = v3.x;
    float y = (v3.y * cosTheta) - (v3.z * sinTheta);
    float z = (v3.y * sinTheta) + (v3.z * cosTheta);
    return Vector3(x, y, z);
}
Vector3 RotateAroundY(float theta, Vector3 v3) {
    float cosTheta = cos(theta);
    float sinTheta = sin(theta);
    float x = (v3.x * cosTheta) + (v3.z * sinTheta);
    float y = v3.y;
    float z = -(v3.x * sinTheta) + (v3.z * cosTheta);
    return Vector3(x, y, z);
}
Vector3 RotateAroundZ(float theta, Vector3 v3) {
    float cosTheta = cos(theta);
    float sinTheta = sin(theta);
    float x =  (v3.x * cosTheta) - (v3.y * sinTheta);
    float y = (v3.x * sinTheta) + (v3.y * cosTheta);
    float z = v3.z;
    return Vector3(x, y, z);
}
Vector3 RelativeRightVector(double pitch, double yaw, double roll) {
    Vector3 relRight = Vector3(1, 0, 0);
    relRight = RotateAroundY(yaw, relRight);
    relRight = RotateAroundX(pitch, relRight);
    relRight = RotateAroundZ(roll, relRight);
    return relRight;
}
Vector3 RelativeUpVector(double pitch, double yaw, double roll) {
    Vector3 relUp = Vector3(0, 1, 0);
    relUp = RotateAroundY(yaw, relUp);
    relUp = RotateAroundX(pitch, relUp);
    relUp = RotateAroundZ(roll, relUp);
    return relUp;
}
Vector3 RelativeForwardVector(double pitch, double yaw, double roll) {
    Vector3 relFwd = Vector3(0, 0, 1);
    relFwd = RotateAroundY(yaw, relFwd);
    relFwd = RotateAroundX(pitch, relFwd);
    relFwd = RotateAroundZ(roll, relFwd);
    return relFwd;
}
Vector3 RelativeLeftVector(double pitch, double yaw, double roll) {
    Vector3 relLeft = RelativeRightVector(pitch, yaw, roll);
    relLeft = -relLeft;
    return relLeft;
}
Vector3 RelativeDownVector(double pitch, double yaw, double roll) {
    Vector3 relDown = RelativeUpVector(pitch, yaw, roll);
    relDown = -relDown;
    return relDown;
}
Vector3 RelativeBackVector(double pitch, double yaw, double roll) {
    Vector3 relBack = RelativeForwardVector(pitch, yaw, roll);
    relBack = -relBack;
    return relBack;
}

double PI = acos(0.0);
double DegreesToRadians(double degrees) {
    return degrees * (PI / 180); 
}