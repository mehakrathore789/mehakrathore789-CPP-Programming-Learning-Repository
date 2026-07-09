# 13. Object-Oriented Programming Basics

This is where C++ diverges significantly from C. Classes let you bundle
data (attributes) and behavior (methods) into a single unit, modeling
real-world entities.

## Concepts Covered
- Classes and objects
- Access specifiers (`private`, `public`, `protected`)
- Constructors (default, parameterized, copy) and destructors
- The `this` pointer
- Static members
- `const` member functions

## Files

| File | Description |
|------|--------------|
| `01_class_and_object_basics.cpp` | Defining a class and creating objects |
| `02_constructors.cpp` | Default, parameterized, and copy constructors |
| `03_destructors.cpp` | Cleanup logic when an object goes out of scope |
| `04_this_pointer.cpp` | Using `this` to refer to the current object |
| `05_static_members.cpp` | Members shared across all instances of a class |
| `06_const_member_functions.cpp` | Guaranteeing a method won't modify the object |

## Key Takeaways
- `private` members are only accessible within the class itself; `public` members are accessible from anywhere.
- A constructor runs automatically when an object is created; a destructor runs automatically when it's destroyed.
- `this` is a pointer to the current object, useful for disambiguating member names from parameter names.
- `static` members belong to the CLASS, not to any individual object.
