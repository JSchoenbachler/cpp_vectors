#include <iostream>
#include <math.h>
#include <string>
#include <vector>

class Vector3;

class Vector2 {
    public:
        // x, y coordinates
        float x;
        float y;
        // Constructors
        Vector2(float x, float y);
        Vector2(float xy);
        Vector2(const Vector2& v2);
        // Functions
        std::string ToString() const;
        float Magnitude() const;
        Vector2 Normalize() const;
        Vector3 ToVector3(float z = 0) const;
        // Operator overloads
        Vector2 operator+(Vector2 const &);
        friend void operator+=(Vector2 &, Vector2 const &);
        void operator++(int);
        Vector2 operator-(Vector2 const &);
        friend void operator-=(Vector2 &, Vector2 const &);
        void operator--(int);
        Vector2 operator-();
        Vector2 operator*(Vector2 const &);
        friend void operator*=(Vector2 &, Vector2 const &);
        Vector2 operator/(Vector2 const &);
        friend void operator/=(Vector2 &, Vector2 const &);
        friend bool operator==(Vector2 const &, Vector2 const &);
        friend bool operator!=(Vector2 const &, Vector2 const &);
        Vector2& operator=(const Vector2&);
        friend std::ostream& operator<<(std::ostream&, Vector2&);
        friend std::ostream& operator<<(std::ostream&, const Vector2&);
        friend std::istream& operator>>(std::istream&, Vector2&);
        // Static instances
        static const Vector2 zero;
        static const Vector2 one;
        static const Vector2 right;
        static const Vector2 up;
        static const Vector2 left;
        static const Vector2 down;
};

class Vector3 {
    public:
        // x, y, z coordinates
        float x;
        float y;
        float z;
        // Constructors
        Vector3(float x, float y, float z);
        Vector3(float xyz);
        Vector3(Vector2& v2);
        Vector3(Vector2& v2, float z);
        Vector3(const Vector3& v3);
        // Functions
        std::string ToString() const;
        float Magnitude() const;
        Vector3 Normalize() const;
        Vector2 ToVector2() const;
        // Operator overloads
        Vector3 operator+(Vector3 const &);
        friend void operator+=(Vector3 &, Vector3 const &);
        void operator++(int);
        Vector3 operator-(Vector3 const &);
        friend void operator-=(Vector3 &, Vector3 const &);
        void operator--(int);
        Vector3 operator-();
        Vector3 operator*(Vector3 const &);
        friend void operator*=(Vector3 &, Vector3 const &);
        Vector3 operator/(Vector3 const &);
        friend void operator/=(Vector3 &, Vector3 const &);
        friend bool operator==(Vector3 const &, Vector3 const &);
        friend bool operator!=(Vector3 const &, Vector3 const &);
        Vector3& operator=(const Vector3&);
        friend std::ostream& operator<<(std::ostream&, Vector3&);
        friend std::ostream& operator<<(std::ostream&, const Vector3&);
        friend std::istream& operator>>(std::istream&, Vector3&);
        // Static instances
        static const Vector3 zero;
        static const Vector3 one;
        static const Vector3 right;
        static const Vector3 up;
        static const Vector3 forward;
        static const Vector3 left;
        static const Vector3 down;
        static const Vector3 back;
};
// Vector 2 product functions.
float DotProductScalar(Vector2&, Vector2&);
float DotProductAngle(Vector2&, Vector2&);
// Vector3 product functions.
float DotProductScalar(Vector3&, Vector3&);
float DotProductAngle(Vector3&, Vector3&);
Vector3 CrossProduct(Vector3&, Vector3&);
// Rotation-relative Vectors.
std::vector<std::vector<float>> MatrixProduct(std::vector<std::vector<float>>&, std::vector<std::vector<float>>&);
Vector3 RotateAroundX(float, Vector3);
Vector3 RotateAroundY(float, Vector3);
Vector3 RotateAroundZ(float, Vector3);
Vector3 RelativeRightVector(double pitch, double yaw = 0, double roll = 0);
Vector3 RelativeUpVector(double pitch, double yaw = 0, double roll = 0);
Vector3 RelativeForwardVector(double pitch, double yaw = 0, double roll = 0);
Vector3 RelativeLeftVector(double pitch, double yaw = 0, double roll = 0);
Vector3 RelativeDownVector(double pitch, double yaw = 0, double roll = 0);
Vector3 RelativeBackVector(double pitch, double yaw = 0, double roll = 0);
double DegreesToRadians(double degrees);