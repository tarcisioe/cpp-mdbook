#ifndef MATH_VECTOR_H
#define MATH_VECTOR_H

namespace math {

class Vector2D {
public:
    Vector2D(double x, double y);
    Vector2D() = default;
    Vector2D(const Vector2D &) = default;

    double x() const;
    double y() const;

    Vector2D &invert();
    Vector2D &multiply(double);
    Vector2D &sum(const Vector2D &);

private:
    double x_{0}, y_{0};
};

Vector2D inverted(Vector2D);
Vector2D sum(Vector2D, const Vector2D &);
Vector2D multiply(Vector2D, double);

}

#endif
