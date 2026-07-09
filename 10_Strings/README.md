# 10. Strings

C++'s `std::string` (from `<string>`) is a full-featured, memory-managed
string class — much safer and more convenient than C-style `char[]` arrays.

## Files

| File | Description |
|------|--------------|
| `01_string_basics.cpp` | Declaring, concatenating, and printing strings |
| `02_string_methods.cpp` | length(), substr(), find(), etc. |
| `03_string_reverse.cpp` | Reversing a string using `std::reverse` |
| `04_palindrome_check.cpp` | Checking if a string is a palindrome |
| `05_string_stream.cpp` | Parsing/building strings with `stringstream` |

## Key Takeaways
- `std::string` handles its own memory — no manual null-terminator management needed.
- The `+` operator concatenates strings directly, unlike C's `strcat()`.
- `std::stringstream` is extremely useful for parsing input or building strings piece by piece.
