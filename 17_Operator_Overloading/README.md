# 17. Operator Overloading

C++ allows you to redefine how built-in operators (`+`, `==`, `<<`, etc.)
behave for your own classes, making custom types feel as natural to use
as built-in ones.

## Files

| File | Description |
|------|--------------|
| `01_overload_plus_operator.cpp` | Overloading `+` to add two custom objects |
| `02_overload_comparison_operators.cpp` | Overloading `==` for object comparison |
| `03_overload_stream_insertion.cpp` | Overloading `<<` for custom `cout` printing |
| `04_overload_prefix_postfix.cpp` | Overloading `++` (prefix and postfix forms) |

## Key Takeaways
- Operator overloading doesn't change operator precedence or associativity.
- `operator<<` must typically be a free (non-member) function since the stream is on the left.
- Only overload an operator when it makes the code more intuitive — don't overload `+` to mean subtraction!
