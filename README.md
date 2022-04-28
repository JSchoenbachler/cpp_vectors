# cpp_vectors
 
 This repository is to create my own vector math library for 2 and 3 dimensional vectors. Vector coordinates are represented as left-handed and Y-up.
 
 
# Documentation

## Classes

This library defines separate Vector classes for 2 and 3 dimensional vectors.

### Vector2

* Variables:

    * `x` - x coordinate of vector.

    * `y` - y coordinate of vector.

* Functions:

    * `ToString()` - Returns string in format `Vector2(x, y)`

    * `Magnitude()` - Returns magnitude.

    * `Normalize()` - Creates a normalized form of the vector and returns it.

    * `ToVector3(float z = 0)` = Creates a Vector3 object using the optional z argument.

* Static Instances:

    * (0, 0) - `Vector2::zero`

    * (1, 1) - `Vector2::one`
    
    * (1, 0) - `Vector2::right`
    
    * (0, 1) - `Vector2::up`
    
    * (-1, 0) - `Vector2::left`
    
    * (0, -1) - `Vector2::down`

* Also includes operator overloads for addition, subtraction, (simple) multiplication, division, comparisons, ostream, and istream.

### Vector3

* Variables:

    * `x` - x coordinate of vector.

    * `y` - y coordinate of vector.

    * `z` - z coordinate of vector.

* Functions:

    * `ToString()` - Returns string in format `Vector3(x, y, z)`

    * `Magnitude()` - Returns magnitude.

    * `Normalize()` - Creates a normalized form of the vector and returns it.

    * `ToVector2()` = Creates a Vector2 object by dropping the `z` value.

* Static Instances

    * (0, 0, 0) - `Vector3::zero`

    * (1, 1, 1) - `Vector3::one`

    * (1, 0, 0) - `Vector3::right`

    * (0, 1, 0) - `Vector3::up`

    * (0, 0, 1) - `Vector3::forward`

    * (-1, 0, 0) - `Vector3::left`

    * (0, -1, 0) - `Vector3::down`

    * (0, 0, -1) - `Vector3::back`

* Also includes operator overloads for addition, subtraction, (simple) multiplication, division, comparisons, ostream, and istream.

## Functions

* `DotProductScalar(Vector2& a, Vector2& b)` `DotProductScalar(Vector3& a, Vector3& b)` - Returns the scalar dot product value for the 2 provided vectors.

* `DotProductAngle(Vector2& a, Vector2& b)` `DotProductAngle(Vector3& a, Vector3& b)` - Returns the angle between 2 vectors using the dot product scalar.

* `CrossProduct(Vector3& a, Vector3& b)` - Returns resulting cross product vector.

* `RotateAroundX(float theta, Vector3 v3)` - Returns the provided vector rotated around the X axis using Euler Angles

* `RotateAroundY(float theta, Vector3 v3)` - Returns the provided vector rotated around the Y axis using Euler Angles

* `RotateAroundZ(float theta, Vector3 v3)` - Returns the provided vector rotated around the Z axis using Euler Angles

* `RelativeRightVector(double pitch, double yaw = 0, double roll = 0)` - Returns the relative right (Vector3(1, 0, 0)) using provided rotations to rotate in sequence y-x'-z''.

* `RelativeUpVector(double pitch, double yaw = 0, double roll = 0)` - Returns the relative up (Vector3(0, 1, 0)) using provided rotations to rotate in sequence y-x'-z''.

* `RelativeForwardVector(double pitch, double yaw = 0, double roll = 0)` - Returns the relative forward (Vector3(0, 0, 1)) using provided rotations to rotate in sequence y-x'-z''.

* `RelativeLeftVector(double pitch, double yaw = 0, double roll = 0)` - Returns the relative left (Vector3(-1, 0, 0)) using provided rotations to rotate in sequence y-x'-z''.

* `RelativeDownVector(double pitch, double yaw = 0, double roll = 0)` - Returns the relative down (Vector3(0, -1, 0)) using provided rotations to rotate in sequence y-x'-z''.

* `RelativeBackVector(double pitch, double yaw = 0, double roll = 0)` - Returns the relative back (Vector3(0, 0, -1)) using provided rotations to rotate in sequence y-x'-z''.

