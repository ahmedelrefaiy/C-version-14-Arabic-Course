# Lab 9 — Functions

**Week 8 — Functions**
Reference practice file: [`lec9_functions`](../Lecture-Practice/lec9_functions-dr-ahmed-elrefaiy.cpp)

---

## 🎯 Objectives

By the end of this lab you should be able to:

- Define and call functions with different **return types** and **parameters**
- Write and use **function prototypes**
- Apply **function overloading**
- Distinguish **local**, **global** and **static** variables and use the scope resolution operator `::`
- Explain **pass by value** VS **pass by reference**

---

## Part A — Definition, Parameters & Return Types

### A.1 — Trace (What is the output?)

**Q1**

```cpp
void sayHello(string s) {
    cout << s << endl;
}
int main() {
    sayHello("Hello");
    sayHello("World");
    sayHello("Hi");
    return 0;
}
```

**Q2**

```cpp
int sayHello() {
    cout << "Hello" << endl;
    return 1;
}
int main() {
    cout << sayHello();
    return 0;
}
```

> Which line is printed first, and why?

**Q3**

```cpp
int square(int x) {
    return x * x;
}
int main() {
    int x = square(7);
    cout << x;
    return 0;
}
```

### A.2 — Write the code

1. Write a function `sum(int, int)` that returns the sum of two numbers, and call it from `main`.
2. Write a `void` function `printLine(int n)` that prints `n` stars on one line.
3. Write a function `isEven(int n)` that returns `bool`, and use it to print all even numbers from 1 to 50.
4. Write a function `factorial(int n)` that returns the factorial of `n`.
5. Write a function `power(int base, int exp)` **without** using `pow`.

---

## Part B — Function Prototypes

### B.1 — Trace

**Q4** — Why does this program compile even though `sum` is defined **after** `main`?

```cpp
int sum(int, int);
int main() {
    cout << sum(5, 6);
    return 0;
}
int sum(int x, int y) {
    return x + y;
}
```

**Q5** — Remove the first line (the prototype) and try to compile. Write down the exact error message.

### B.2 — Write the code

6. Rewrite exercises 1 → 5 from Part A so that **all** function definitions come after `main`, using prototypes at the top of the file.

---

## Part C — Function Overloading

### C.1 — Trace

**Q6**

```cpp
int    sum(int x, int y)            { return x + y; }
int    sum(double x, int y)         { return (int)x + y; }
int    sum(int x, double y)         { return (int)x + y; }
double sum(double x, double y)      { return x + y; }
int    sum(int x, int y, int z)     { return x + y + z; }

int main() {
    cout << sum(5, 6)      << endl;
    cout << sum(5.2, 6.2)  << endl;
    cout << sum(5, 6, 4)   << endl;
    return 0;
}
```

> For every call, say **which version** was chosen and why.

**Q7** — Is this valid overloading? Explain.

```cpp
int  test(int x);
void test(int x);
```

### C.2 — Write the code

7. Write three overloaded versions of `area`:
   - `area(double side)` → square
   - `area(double length, double width)` → rectangle
   - `area(double radius, bool isCircle)` → circle
8. Write two overloaded versions of `printData`: one taking a `string`, and one taking a `string` and an `int`.

---

## Part D — Local VS Global VS Static Variables

### D.1 — Trace (Exam-style questions)

**Q8**

```cpp
int local() {
    int x = 5;
    int y = 7;
    cout << x << endl;
}
int main() {
    int x = 6;
    cout << x << endl;
    local();
    cout << y << endl;
    return 0;
}
```

> Does this compile? If not, which line is the error and why?

**Q9**

```cpp
int y = 7;
int local() {
    int x = 5;
    y += 1;
    cout << x << endl;
}
int main() {
    int x = 6;
    cout << x << endl;
    local();
    y += 1;
    cout << y << endl;
    return 0;
}
```

**Q10** — Scope resolution operator:

```cpp
int y = 7;
int local() {
    int x = 5;
    y += 1;
    cout << x << endl;
}
int main() {
    int x = 6;
    cout << x << endl;
    local();
    cout << y << endl;

    int y = 1;
    cout << y   << endl;
    cout << ::y << endl;
    return 0;
}
```

**Q11** — What is the difference between these two? Write the output of each.

```cpp
// Version A
int y = 7;
int local() {
    int x = 5;
    y += 1;
    cout << x << endl;
    int y = 1;
}
```

```cpp
// Version B
int y = 7;
int local() {
    int x = 5;
    int y = 1;
    y += 1;
    cout << x << endl;
}
```

**Q12** — Static variables:

```cpp
int test() {
    static int x = 5;
    cout << x << endl;
    x++;
}
int main() {
    test();
    test();
    test();
    return 0;
}
```

**Q13**

```cpp
int local() {
    static int x = 5;
    cout << x << endl;
    x++;
}
int main() {
    int x = 1;
    cout << x << endl;
    local();
    cout << x << endl;
    local();
    cout << x << endl;
    return 0;
}
```

### D.2 — Write the code

9. Write a function `counter()` that prints how many times it has been called, using a `static` variable.
10. Repeat exercise 9 using a **global** variable instead. What is the difference between the two solutions?

---

## Part E — Pass by Value VS Pass by Reference

### E.1 — Debug it 🐞

The following code is taken from the practice file — **it does not compile**. Find the error, explain it, then fix it:

```cpp
int passByValue(int x) {
    cout << "address of x from passByValue = " << &x << endl;
    x += 5;
    return x;
}
void passByReference(int &y) {
    cout << "address of x from passByReference = " << &x << endl;   // <-- ?
    y += 5;
}
int main() {
    int x = 5;
    cout << "address of x from main = " << &x << endl;
    passByReference(x);
    cout << x << endl;

    x = passByValue(x);
    cout << x << endl;
    return 0;
}
```

**Q14** — After fixing it, run the program and answer:

1. Which addresses are **identical** and which are **different**? Why?
2. Why does `passByReference` change `x` without any assignment in `main`, while `passByValue` needs `x = passByValue(x);`?

### E.2 — Write the code

11. Write a function `swap(int &a, int &b)` that swaps two numbers. Prove that it worked by printing the values in `main` before and after.
12. Write the same function using **pass by value** and explain why it does not work.
13. Write a function `void divide(int a, int b, int &quotient, int &remainder)` that returns **two** results through references.

---

## 🏆 Challenge

Build a small **calculator program** made entirely of functions:

- `double add(double, double)`, `sub`, `mul`, `div`
- `int readChoice()` → shows the menu and returns the user choice
- `void readNumbers(double &a, double &b)` → reads the two operands **by reference**
- `void printResult(char op, double a, double b, double result)` → prints the result formatted with 2 decimals
- A `static` counter that prints how many operations the user has performed so far
- `main` should contain **no calculation logic at all** — only the loop and the function calls
- All functions must be defined **after** `main` using prototypes

---

**Good luck! 💻**
