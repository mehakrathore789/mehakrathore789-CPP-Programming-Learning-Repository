# 09. Arrays and Vectors

C++ supports C-style fixed-size arrays, but `std::vector` (a dynamic,
resizable array from the STL) is preferred in modern C++ for almost everything.

## Concepts Covered
- C-style array basics
- `std::vector` basics (push_back, size, access)
- Common vector operations (sum, max/min, search)
- 2D vectors

## Files

| File | Description |
|------|--------------|
| `01_array_basics.cpp` | C-style fixed-size arrays |
| `02_vector_basics.cpp` | Declaring, growing, and accessing a vector |
| `03_vector_operations.cpp` | Sum, max, min, and iteration |
| `04_2d_vector.cpp` | A vector of vectors (dynamic matrix) |

## Key Takeaways
- `std::vector` automatically manages its own memory — no manual `new`/`delete` needed.
- `vector::push_back()` grows the vector dynamically; `.size()` returns element count.
- Prefer `vector` over raw arrays unless you have a specific reason not to (e.g., fixed embedded buffers).
