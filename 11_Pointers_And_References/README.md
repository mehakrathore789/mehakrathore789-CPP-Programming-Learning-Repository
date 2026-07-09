# 11. Pointers and References

C++ has both pointers (inherited from C) and references (a C++-only,
safer alias mechanism). Modern C++ prefers references and smart pointers
(see [22_Smart_Pointers](../22_Smart_Pointers)) over raw pointers where possible.

## Files

| File | Description |
|------|--------------|
| `01_pointer_basics.cpp` | Declaring pointers, address-of and dereference |
| `02_reference_basics.cpp` | References as aliases for existing variables |
| `03_pointers_vs_references.cpp` | Key differences side by side |
| `04_dynamic_memory_new_delete.cpp` | `new` and `delete` for heap allocation |

## Key Takeaways
- A reference must be initialized when declared and can never be reseated (rebound) to refer to something else.
- A pointer can be reassigned, can be null, and needs explicit dereferencing (`*`).
- `new` allocates on the heap; every `new` should be matched with a `delete` (or better: use smart pointers).
