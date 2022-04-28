#include <iostream>
#include "vector.h"
#include <string>
#include <vector>
#include <math.h>

/*
Vector2 definitions.
*/

// Vector2 constructors.
Vector2::Vector2(float x, float y) {
    this->x = x;
    this->y = y;
}
Vector2::Vector2(float xy) {
    this->x = xy;
    this->y = xy;
}

// Vector2 functions.
std::string Vector2::ToString() {
    std::string s = "Vector2(" + std::to_string(x) + ", " + std::to_string(y) + ")";
    return s; 
}
float Vector2::Magnitude() {
    return pow((x * x) + (y * y), 0.5);
}
Vector2 Vector2::Normalize() {
    float mag = this->Magnitude();
    if(mag != 0) {
        return Vector2(x / mag, y / mag);
    } else {
        return Vector2(0);
    }
}
Vector3 Vector2::ToVector3(float z) {
    return(Vector3(x, y, z));
}
Vector3 Vector2::ToVector3() {
    return(ToVector3(0));
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
std::ostream& operator<<(std::ostream& os, Vector2& v2) {
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
Vector3::Vector3(float x, float y, float z) {
    this->x = x;
    this->y = y;
    this->z = z;
}
Vector3::Vector3(float xyz) {
    this->x = xyz;
    this->y = xyz;
    this->z = xyz;
}
Vector3::Vector3(Vector2& v2) {
    this->x = v2.x;
    this->y = v2.y;
    this->z = 0;
}
Vector3::Vector3(Vector2& v2, float z) {
    this->x = v2.x;
    this->y = v2.y;
    this->z = z;
}
// Vector3 functions.
std::string Vector3::ToString() {
    std::string s = "Vector3(" + std::to_string(x) + ", " + std::to_string(y) + ", " + std::to_string(z) + ")";
    return s; 
}
float Vector3::Magnitude() {
    return pow((x * x) + (y * y) + (z * z), 0.5);
}
Vector3 Vector3::Normalize() {
    float mag = this->Magnitude();
    if(mag != 0) {
        return Vector3(x / mag, y / mag, z / mag);
    } else {
        return Vector3(0);
    }
}
Vector2 Vector3::ToVector2() {
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
std::ostream& operator<<(std::ostream& os, Vector3& v3) {
    os << v3.ToString();
    return os;
}
std::istream& operator>>(std::istream& is, Vector3& v3) {
    is >> v3.x >> v3.y >> v3.z;
    return is;
}

// Vector2 and Vector3 static instances.
// Operates on left-hand y-up coordinate system.
Vector2 Vector2::zero = Vector2(0, 0);
Vector2 Vector2::one = Vector2(1, 1);
Vector2 Vector2::right = Vector2(1, 0);
Vector2 Vector2::up = Vector2(0, 1);
Vector2 Vector2::left = Vector2(-1, 0);
Vector2 Vector2::down = Vector2(0, -1);

Vector3 Vector3::zero = Vector3(0, 0, 0);
Vector3 Vector3::one = Vector3(1, 1, 1);
Vector3 Vector3::right = Vector3(1, 0, 0);
Vector3 Vector3::up = Vector3(0, 1, 0);
Vector3 Vector3::forward = Vector3(0, 0, 1);
Vector3 Vector3::left = Vector3(-1, 0, 0);
Vector3 Vector3::down = Vector3(0, -1, 0);
Vector3 Vector3::back = Vector3(0, 0, -1);

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
vector<vector<float>> MatrixProduct(vector<vector<float>>& a, vector<vector<float>>& b) {
    vector<vector<float>> res;
    int aCols = a.size();
    int aRows = a.at(0).size();
    int bCols = b.size();
    int bRows = b.at(0).size();
    res.reserve(bCols);
    for(int i = 0; i < bCols; i++) {
        vector<float> tmpVec;
        tmpVec.reserve(aRows);
        for(int j = 0; j < aRows; j++) {
            float tmpSum = 0;
            for (int k = 0; k < bRows; k++) {
                tmpSum += (a.at(k).at(j) * b.at(i).at(k));
            }
            tmpVec.push_back(tmpSum);
        }
        res.push_back(tmpVec);
    }
    return res;
}
Vector3 RotateAroundX(float theta, Vector3 v3) {
    float cosTheta = cos(theta);
    float sinTheta = sin(theta);
    vector<vector<float>> RxMat{{1, 0, 0},
                                {0, cosTheta, -sinTheta},
                                {0, sinTheta, cosTheta}};
    vector<vector<float>> vecToColumn{{v3.x, v3.y, v3.z}};
    vector<vector<float>> prod = MatrixProduct(RxMat, vecToColumn);
    return Vector3(prod.at(0).at(0), prod.at(0).at(1), prod.at(0).at(2));
}
Vector3 RotateAroundY(float theta, Vector3 v3) {
    float cosTheta = cos(theta);
    float sinTheta = sin(theta);
    vector<vector<float>> RyMat{{cosTheta, 0, -sinTheta},
                                {0, 1, 0},
                                {sinTheta, 0, cosTheta}};
    vector<vector<float>> vecToColumn{{v3.x, v3.y, v3.z}};
    vector<vector<float>> prod = MatrixProduct(RyMat, vecToColumn);
    return Vector3(prod.at(0).at(0), prod.at(0).at(1), prod.at(0).at(2));
}
Vector3 RotateAroundZ(float theta, Vector3 v3) {
    float cosTheta = cos(theta);
    float sinTheta = sin(theta);
    vector<vector<float>> RzMat{{cosTheta, sinTheta, 0},
                                {-sinTheta, cosTheta, 0},
                                {0, 0, 1}};
    vector<vector<float>> vecToColumn{{v3.x, v3.y, v3.z}};
    vector<vector<float>> prod = MatrixProduct(RzMat, vecToColumn);
    return Vector3(prod.at(0).at(0), prod.at(0).at(1), prod.at(0).at(2));
}
Vector3 RelativeRightVector(float thetaY, float thetaZ) {
    Vector3 relRight = Vector3(1, 0, 0);
    relRight = RotateAroundY(thetaY, relRight);
    relRight = RotateAroundZ(thetaZ, relRight);

    return relRight;
}
Vector3 RelativeUpVector(float thetaX, float thetaZ) {
    Vector3 relUp = Vector3(0, 1, 0);
    relUp = RotateAroundX(thetaX, relUp);
    relUp = RotateAroundZ(thetaZ, relUp);

    return relUp;
}
Vector3 RelativeForwardVector(float thetaX, float thetaY) {
    Vector3 relForward = Vector3(0, 0, 1);
    relForward = RotateAroundX(thetaX, relForward);
    relForward = RotateAroundY(thetaY, relForward);

    return relForward;
}
Vector3 RelativeLeftVector(float thetaY, float thetaZ) {
    Vector3 relLeft = RelativeRightVector(thetaY, thetaZ);
    relLeft = -relLeft;
    return relLeft;
}
Vector3 RelativeDownVector(float thetaX, float thetaZ) {
    Vector3 relDown = RelativeUpVector(thetaX, thetaZ);
    relDown = -relDown;
    return relDown;
}
Vector3 RelativeBackVector(float thetaX, float thetaY) {
    Vector3 relBack = RelativeForwardVector(thetaX, thetaY);
    relBack = -relBack;
    return relBack;
}