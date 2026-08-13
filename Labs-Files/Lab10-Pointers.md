# Lab 10 — Pointers

**Weeks 9–11 — Pointers**
Lecture slides: [`Lectures Slides/`](../Lectures%20Slides)

---

## 🎯 Objectives

By the end of this lab you should be able to:

- Read and write pointer syntax: `*` (dereference) VS `&` (address-of)
- Allocate and free memory with `new` / `delete` and `new[]` / `delete[]`
- Tell the difference between **Stack**, **Heap** and **Global** memory
- Recognize and avoid: **memory leak**, **dangling pointer**, **double delete**, **stack overflow**
- Pass parameters **by value** VS **by address**
- Use pointers with arrays

---

## Part A — Find the Error 🐞

> These are the exercises from the lecture slides.
> For **each** program: say whether it is a **compile error**, a **runtime crash**, or a **silent bug (undefined behaviour / leak)**, point at the exact line, explain **why**, then write the **corrected** version.

### Exercise 1

**What is wrong with the following program?**

```cpp
int main() {
    int x = 20;
    int* p;
    p = new int;
    *p = 30;
    cout << *p << " " << x << endl;
    delete p;
    p = &x;
    delete p;
    cout << *p << " " << x << endl;
    return 0;
}
```

> ❓ Which memory region does `x` live in? And the memory that `p` pointed to at the beginning?
> ❓ What is the state of `p` immediately after the first `delete p;`?

---

### Exercise 2

**What is wrong with the following program?**

```cpp
int main() {
    const int SIZE = 10000000;
    int i;
    int A[SIZE];

    for (i = 0; i < SIZE; i++)
        A[i] = i;

    int *B;
    B = new int[SIZE];

    for (i = 0; i < SIZE; i++)
        B[i] = A[i];

    for (i = 0; i < SIZE; i++)
        cout << A[i] << " " << B[i] << endl;

    return 0;
}
```

> ❓ How many **bytes** does `A` need? And `B`?
> ❓ Why does `B` succeed while `A` is the problem, even though both have the same size?
> ❓ Is there anything missing at the end of the program?

---

### Exercise 3

**What is wrong with the following program?**

```cpp
int main() {
    int i, *p, *r, t[4] = {0, 1, 2, 3};

    p = new int[4];
    for (i = 0; i < 4; i++)
        p[i] = 6 * (i + 1);

    r = t;
    for (i = 3; i >= 0; i--)
        r[i] -= 1;

    r[2] = 8;

    for (i = 0; i < 4; i++)
        t[i] = p[i] + r[i];

    for (i = 0; i < 4; i++)
        cout << t[i] << " ";

    delete[] p;
    return 0;
}
```

> ❓ First, **trace the program on paper** and write the exact output.
> ❓ What is the relation between `r` and `t`? What happens to `t` when you write into `r`?
> ❓ What would happen if you added `delete[] r;` before `return 0;`? Why?

---

### Exercise 4

**What is wrong with the following program?**

```cpp
void F1(int* temp) { *temp = 99; }

void main() {
    int *p1, *p2;
    p1 = new int;
    *p1 = 50;
    p2 = p1;
    F1(p2);
    cout << *p1 << " " << *p2 << endl;

    p1 = new int;
    *p1 = 88;
    cout << *p1 << " " << *p2 << endl;

    delete p1;
    delete p2;
}
```

> ❓ Look at the **signature of `main`** — is it correct C++?
> ❓ Write the output of the two `cout` lines. Why did `*p1` change after calling `F1(p2)`?
> ❓ After `p1 = new int;` the second time — who is still holding the **first** allocated block?
> ❓ What would happen if the line `p1 = new int;` was **removed**? Would `delete p1; delete p2;` still be safe?

---

### Exercise 5

**What is wrong with the following program?**

```cpp
int main() {
    int *p, *r;
    p = new int;
    r = new int;
    p = 1;
    r = p;
    return 0;
}
```

> ❓ Which line will the compiler reject, and what is the correct way to write it?
> ❓ After fixing that line, how many blocks are **leaked** and where exactly?

---

## Part B — Trace (What is the output?)

**Q1**

```cpp
int x = 10;
int *p = &x;
*p = *p + 5;
cout << x << " " << *p << endl;
cout << (p == &x) << endl;
```

**Q2**

```cpp
int a = 5, b = 7;
int *p = &a;
int *q = &b;
p = q;
*p = 100;
cout << a << " " << b << endl;
```

**Q3**

```cpp
int arr[5] = {10, 20, 30, 40, 50};
int *p = arr;
cout << *p << " " << *(p + 2) << " " << p[3] << endl;
p++;
cout << *p << endl;
cout << arr[0] << " " << *arr << endl;
```

**Q4** — Pass by value VS pass by address

```cpp
void byValue(int x)    { x += 5; }
void byAddress(int *x) { *x += 5; }

int main() {
    int n = 10;
    byValue(n);
    cout << n << endl;
    byAddress(&n);
    cout << n << endl;
    return 0;
}
```

**Q5** — Dangling pointer

```cpp
int *p = new int;
*p = 15;
int *q = p;
delete p;
cout << *q << endl;
```

> What is the name of the problem in `q`? Why is the output not guaranteed?
> How do you protect yourself after `delete`?

---

## Part C — Write the Code

1. Read an integer from the user into a variable, then print its **value** and its **address**, then change its value **through a pointer** and print it again.
2. Write a function `void swap(int *a, int *b)` that swaps two numbers using pointers, and prove it works from `main`.
3. Ask the user for the size `n`, then create an array of `n` integers **on the Heap**, fill it from the user, print it, then free it correctly.
4. Using the array from exercise 3, write functions that take the array **as a pointer**:
   - `int sum(int *arr, int n)`
   - `int maxValue(int *arr, int n)`
   - `void reverse(int *arr, int n)`
5. Write a function `int* createArray(int n)` that allocates an array on the Heap, fills it with `1 … n`, and **returns the pointer**. Who is responsible for `delete[]` in this case?
6. Write a program that has a **memory leak** on purpose, then write the corrected version beside it and explain the difference.
7. Write a program that produces a **dangling pointer** on purpose, then fix it by setting the pointer to `nullptr` after `delete`.

---

## Part D — Concept Questions

Answer in one or two lines each:

1. What is the difference between `int *p;` and `*p = 5;`?
2. What is the difference between `p` and `*p` and `&p`?
3. Where are these stored: a local variable, a global variable, a variable created with `new`?
4. What is the difference between **Compiler Management** and **Developer Management** of memory?
5. What is the difference between **Static** and **Dynamic** allocation? Give an example of each.
6. When does **Stack Overflow** happen? Give an example.
7. What is the difference between `delete p;` and `delete[] p;`? What happens if you swap them?
8. Why is `sizeof(p)` the same for `int*` and `double*` while `sizeof(*p)` is different?

---

## ✅ Error Checklist

Use this list while solving **Part A** — for every program ask yourself:

- [ ] Is `delete` being used on memory that did **not** come from `new`?
- [ ] Is the same block being deleted **twice**?
- [ ] Is a pointer used **after** its memory was deleted? (dangling)
- [ ] Was `new` used without a matching `delete`? (leak)
- [ ] Is `delete` matched with `delete[]` correctly?
- [ ] Is a **value** being assigned to a pointer instead of `*pointer`?
- [ ] Is a very large array being created on the **Stack** instead of the **Heap**?
- [ ] Are two pointers pointing at the **same** block without noticing?
- [ ] Is `main` returning `int`?

---

## 🏆 Challenge

Write a small **dynamic student marks** program:

- Read the number of students `n` from the user
- Allocate `double *marks = new double[n]` on the Heap and fill it
- Write these functions, all taking the array **by pointer**:
  - `double average(double *marks, int n)`
  - `double highest(double *marks, int n)`
  - `int countPassed(double *marks, int n)`
- Write `double* copyArray(double *src, int n)` that returns a **new Heap copy** of the array
- Print the original array and the copy, then free **both** correctly
- After every `delete[]`, set the pointer to `nullptr` and print a message confirming the memory was released

**Condition:** the program must finish with **zero leaks** and **zero dangling pointers**.

---

**Good luck! 💻**
