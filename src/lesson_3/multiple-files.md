Compilação em múltiplos arquivos
================================

`vector2d.h`
------------

```cpp
{{#include vector2d.h}}
```


`vector2d.cpp`
------------

```cpp
{{#include vector2d.cpp}}
```


`main.cpp`
----------

```cpp
#include <iostream>
#include "vector.h"


void print_vector(const math::Vector &v)
{
    std::cout << '{' << v.x() << ", " << v.y() << "}\n";
}


int main()
{
    using math::Vector;

    auto v = Vector{3, 5};

    print_vector(v);

    v.sum({7, 8});

    print_vector(v);

    auto iv = inverted(v);

    print_vector(v);
    print_vector(iv);

    v.invert();

    print_vector(v);

    v.multiply(0.5);

    print_vector(v);

    auto w = sum(v, {7, 8});

    print_vector(v);
    print_vector(w);

    auto u = multiply(v, 0.5);

    print_vector(v);
    print_vector(u);


    const auto &v2 = v;
}
```
