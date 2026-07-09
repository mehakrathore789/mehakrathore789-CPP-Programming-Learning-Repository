# 15. Polymorphism

"Polymorphism" means "many forms" — the ability for the same interface to
behave differently depending on context.

## Concepts Covered
- Compile-time polymorphism: function overloading, operator overloading
- Runtime polymorphism: virtual functions and function overriding
- Abstract classes and pure virtual functions

## Files

| File | Description |
|------|--------------|
| `01_function_overriding.cpp` | A derived class redefining a base class method |
| `02_virtual_functions.cpp` | Achieving true runtime polymorphism with `virtual` |
| `03_abstract_class_pure_virtual.cpp` | Interfaces via pure virtual functions |
| `04_virtual_destructor.cpp` | Why base class destructors should be virtual |

## Key Takeaways
- Without `virtual`, calling a method through a base class pointer always uses the BASE version, even if the object is derived ("static binding").
- With `virtual`, the correct DERIVED version is called at runtime ("dynamic binding").
- A class with at least one pure virtual function (`= 0`) is abstract and cannot be instantiated.
- If a class will be used polymorphically (deleted via a base pointer), its destructor MUST be virtual.
