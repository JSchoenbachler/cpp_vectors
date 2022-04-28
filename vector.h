#include <iostream>
#include <math.h>
#include <string>

class Vector3;

class Vector2 {
    public:
        // x, y coordinates
        float x;
        float y;
        // Constructors
        Vector2(float x, float y);
        Vector2(float xy);
        // Functions
        std::string ToString();
        float Magnitude();
        Vector2 Normalize();
        Vector3 ToVector3();
        Vector3 ToVector3(float z);
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
        friend std::ostream& operator<<(std::ostream&, Vector2&);
        friend std::istream& operator>>(std::istream&, Vector2&);
        // Static instances
        static Vector2 zero;
        static Vector2 one;
        static Vector2 right;
        static Vector2 up;
        static Vector2 left;
        static Vector2 down;
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
        // Functions
        std::string ToString();
        float Magnitude();
        Vector3 Normalize();
        Vector2 ToVector2();
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
        friend std::ostream& operator<<(std::ostream&, Vector3&);
        friend std::istream& operator>>(std::istream&, Vector3&);
        // Static instances
        static Vector3 zero;
        static Vector3 one;
        static Vector3 right;
        static Vector3 up;
        static Vector3 forward;
        static Vector3 left;
        static Vector3 down;
        static Vector3 back;
};
// Vector 2 product functions.
float DotProductScalar(Vector2&, Vector2&);
float DotProductAngle(Vector2&, Vector2&);
// Vector3 product functions.
float DotProductScalar(Vector3&, Vector3&);
float DotProductAngle(Vector3&, Vector3&);