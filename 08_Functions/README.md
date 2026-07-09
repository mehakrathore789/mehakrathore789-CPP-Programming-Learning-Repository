# 08. Functions

C++ functions extend C's with overloading, default arguments, references,
and `inline`.

## Concepts Covered
- Function basics (declaration, definition, calling)
- Function overloading (same name, different parameters)
- Default arguments
- Pass by reference vs pass by value
- `inline` functions
- Lambda expressions (C++11)

## Files

| File | Description |
|------|--------------|
| `01_function_basics.cpp` | Declaring, defining, calling functions |
| `02_function_overloading.cpp` | Multiple functions sharing a name |
| `03_default_arguments.cpp` | Parameters with default values |
| `04_pass_by_reference.cpp` | Modifying the caller's variable via references |
| `05_inline_functions.cpp` | Hinting the compiler to inline small functions |
| `06_lambda_expressions.cpp` | Anonymous inline functions (C++11) |

## Key Takeaways
- Overloaded functions must differ in parameter types or count, not just return type.
- Pass by reference (`int &x`) avoids copying and allows the function to modify the original.
- Lambdas are widely used with STL algorithms like `sort()` and `for_each()`.
