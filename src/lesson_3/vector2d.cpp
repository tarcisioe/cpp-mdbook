#include "vector2d.h"


namespace math {

Vector2D::Vector2D(double x, double y) :
    x_{x},
    y_{y}
{}

double Vector2D::x() const
{
    return x_;
}

double Vector2D::y() const
{
    return y_;
}

Vector2D& Vector2D::invert()
{
    return *this = Vector2D{-x_, -y_};
}

Vector2D &Vector2D::multiply(double s)
{
    return *this = {s*x_, s*y_};
}

Vector2D &Vector2D::sum(const Vector2D &other)
{
    x_ += other.x_;
    y_ += other.y_;

    return *this;
}

Vector2D inverted(Vector2D v)
{
    v.invert();
    return v;
}

Vector2D sum(Vector2D lhs, const Vector2D &rhs)
{
    lhs.sum(rhs);

    return lhs;
}

Vector2D multiply(Vector2D lhs, double s)
{
    lhs.multiply(s);

    return lhs;
}

}
