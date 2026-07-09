# 14. Inheritance

Inheritance lets a class (derived/child) acquire the properties and
behaviors of another class (base/parent), enabling code reuse and
hierarchical modeling.

## Files

| File | Description |
|------|--------------|
| `01_single_inheritance.cpp` | One derived class inherits from one base class |
| `02_multilevel_inheritance.cpp` | A chain: grandparent -> parent -> child |
| `03_multiple_inheritance.cpp` | A class inheriting from more than one base class |
| `04_protected_access.cpp` | Using `protected` so derived classes can access base data |
| `05_constructor_order.cpp` | The order in which base/derived constructors run |

## Key Takeaways
- `protected` members are accessible in derived classes but not from outside the class hierarchy.
- Base class constructors run BEFORE the derived class constructor body executes.
- Multiple inheritance is powerful but can introduce ambiguity — use carefully.
