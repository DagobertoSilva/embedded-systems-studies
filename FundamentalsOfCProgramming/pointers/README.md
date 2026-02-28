# Memory and Pointers in C

> In-depth study of memory manipulation and pointers in the C language, focusing on low-level programming and foundations for systems and data structures.

---

## 📌 About This Directory

This directory was created to consolidate and deeply understand memory manipulation concepts in C.

Mastering these topics is essential for:

- Data Structures
- Operating Systems
- Embedded Systems
- Low-level Programming
- Memory Optimization and Control

This repository contains practical implementations and conceptual explanations to reinforce learning.

---

## 🧠 Topics Covered

- Memory addressing
- `&` operator (address-of)
- `*` operator (dereferencing)
- Difference between arrays and pointers
- Pointer arithmetic
- Pointer to struct
- Pointer to pointer
- Const correctness
- Dynamic memory allocation

---

## 🛠 Technologies Used

- Language: C
- Compiler: GCC
- Operating System: Windows

---

## 📂 Directory Structure

```bash
.
├── Pointer.c
├── Pointer-array.c
├── PointerArithmetic.c
├── PointerToPointer.c
├── pointerToStruct.c
└── README.md
```

---

# 🧠 Studied Concepts and Explanations

---

## 🔹 Pointers

### Definition

A pointer is a variable that stores the memory address of another variable.

### How It Works

In the examples below, `int` is used, but pointers can be declared for any type.

```c
int *p;   // declares a pointer to int
```

- `*p` accesses the value stored at the address pointed to by `p`.

### Example

```c
int x = 10;
int *p = &x;
printf("%d\n", *p);
```

### Output

```
10
```

- `%p` can be used to print memory addresses.

### Important Notes

- Pointers can be initialized with `NULL`.
- Uninitialized pointers cause undefined behavior.
- Dereferencing a `NULL` pointer causes runtime errors.
- `int *p = &x;` assigns the address of `x` to pointer `p`.
- `*p` accesses the value stored at the pointed address.
- Pointers allow indirect modification of variables.

---

## 🔹 Memory Addressing

### Definition

Every variable stored in memory has a unique address.

### How It Works

The `&` operator returns the address of a variable.

```c
int x = 10;
printf("%p\n", &x);
```

### Importance

Understanding memory addressing is fundamental for dynamic memory structures and low-level manipulation.

### Common Mistake

Confusing a variable’s value with its memory address.

---

## 🔹 Pointer Arithmetic

### Definition

Arithmetic operations applied to pointers consider the size of the pointed type.

If `p` is `int*`, then:

```c
p + 1
```

Advances `sizeof(int)` bytes in memory.

Example:

If `p` points to address `500` and `sizeof(int) = 4`, then:

```
p + 1 → 504
```

### Importance

Allows efficient traversal of arrays and sequential data structures.

### Risk

Accessing memory outside array bounds results in undefined behavior.

---

## 🔹 Difference Between Array and Pointer

### Array

- Fixed memory allocation
- Cannot be reassigned
- The array name behaves like a pointer to its first element
- Supports pointer arithmetic

### Pointer

- Can point to different memory locations
- Can be dynamically allocated

```c
int vet[5];
int *p = vet;
```

Although similar, arrays and pointers are not the same.

Example:

```c
printf("Without pointer: %p\n", &vet[2]);
printf("With pointer: %p\n", (vet + 2));
```

---

## 🔹 Array of Pointers

An array where each element is a memory address.

```c
int *arrayPTR[2];
int x = 10;
int y[2] = {23, 20};

arrayPTR[0] = &x;
arrayPTR[1] = y;

printf("Address stored at position 0: %p\n", arrayPTR[0]);
printf("Address stored at position 1: %p\n", arrayPTR[1]);
printf("Value pointed at position 0: %d\n", *arrayPTR[0]);
printf("Value pointed at position 1: %d\n", arrayPTR[1][0]);
```

Notes:

- Memory addresses vary across machines.
- `arrayPTR[1][0]` accesses the first element of the array pointed to by `arrayPTR[1]`.
- Arrays of pointers can be used to build matrices.

---

## 🔹 Pointer to Pointer

```c
int x = 10;
int *p = &x;
int **pp = &p;
```

### Used for:

- Modifying pointers inside functions
- Dynamic matrix allocation
- Advanced linked structures

---

## 🔹 Pointer to Struct

Essential for dynamic data structures.

```c
typedef struct Data {
    int day, month, year;
} Data;
```

Access with direct variable:

```c
Data data;
printf("%d/%d/%d", data.day, data.month, data.year);
```

Access using pointer:

```c
void printDate(Data *data) {
    printf("%d/%d/%d", data->day, data->month, data->year);
}
```

- `.` → Direct struct access
- `->` → Access through pointer

---

## 🔹 Const Correctness

### `const int *p`
The value pointed to cannot be modified.

### `int * const p`
The pointer cannot change its address.

### `const int * const p`
Neither the value nor the pointer can be modified.

Using `const` improves code safety, clarity, and compiler optimization.

---

# 📈 Future Plans

- Implement automated tests
- Create advanced dynamic memory examples
- Simulate embedded systems scenarios
- Apply concepts to full data structure implementations

---

# 🎯 Academic and Professional Purpose

This directory is part of my preparation for:

- Low-level programming
- Embedded systems development
- Operating systems studies
- Research in computer science
- Continuous technical improvement

---

# 📚 Theoretical References

- **Const Correctness in C (Pointer to Constant vs Constant Pointer)**  
  https://youtu.be/u8q_Rx32YU4?si=q9NcdEAA4OYy6TvX

- **C Pointers Playlist (Universidade C)**  
  https://www.youtube.com/watch?v=SJzd9x2S2yg&list=PL8iN9FQ7_jt5_eMA_mn_4bdQMLjcnyeFs

---

# 👨‍💻 Author

Undergraduate in Computer Science  
Interests: Embedded Systems, C Programming  

---

> This directory was developed for educational and study purposes.