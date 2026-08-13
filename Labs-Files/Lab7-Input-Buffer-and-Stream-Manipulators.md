# Lab 7 — Input Buffer & Stream Manipulators

**Week 6 — Input Buffer & Stream Manipulators**
Reference practice file: [`lec6_stream_manipulator_conversion`](../Lecture-Practice/lec6_stream_manipulator_conversion-dr-ahmed-elrefaiy.cpp)

> Required headers for this lab: `#include <iostream>` and `#include <iomanip>`

---

## 🎯 Objectives

By the end of this lab you should be able to:

- Read a full line with spaces using `getline` and know when `cin >>` fails to do it
- Explain what the **input buffer** is and clear it (`cin.sync()`, `cin >> ws`)
- Format output using `setw`, `left`, `right`, `setfill`, `setprecision`, `fixed`, `boolalpha`
- Use `string(n, ch)` to repeat a character
- Use the conditional (ternary) operator `?:`
- Apply implicit / explicit casting and work with ASCII codes

---

## Part A — `cin` VS `getline` and the Input Buffer

### A.1 — Trace (What is the output?)

For each program, write the output **by hand first**, then run it to check.

**Q1** — Input typed by the user: `hi hello world`

```cpp
string s1, s2;
cout << "First: ";
cin >> s1;
cout << "Second: ";
cin >> s2;
cout << "You write: " << s1 << " and " << s2 << endl;
```

**Q2** — Same input: `hi hello world`

```cpp
string s1, s2;
cout << "First: ";
cin >> s1;
cout << "Second: ";
getline(cin, s2);
cout << "You write: " << s1 << " and " << s2 << endl;
```

**Q3** — Same program as Q2 but add `cin >> ws;` before the `getline`. What changed, and why?

**Q4** — Input typed by the user: `10 20`

```cpp
int x, y;
cout << "First: ";
cin >> x;
cin.sync();
cout << "Second: ";
cin >> y;
cout << "You write: " << x << " and " << y << endl;
```

### A.2 — Write the code

1. Write a program that asks the user for their **full name** (with spaces) and then their **age**, and prints them on two lines.
2. Modify it so the order is reversed: read the **age first**, then the **full name**. Fix the problem that appears using `cin.sync()` or `cin >> ws`.

---

## Part B — `setw`, `left`, `right`, `setfill`

### B.1 — Trace (What is the output?)

**Q5**

```cpp
for (int i = 1; i <= 1000000; i *= 10)
    cout << setw(7) << i << "x" << endl;
```

**Q6**

```cpp
for (int i = 1; i <= 1000000; i *= 10)
    cout << setfill('*') << left << setw(7) << i << "x" << endl;
```

**Q7** — Explain the difference between these two blocks:

```cpp
// Block 1
cout << left << setw(8) << "Ahmed"  << 30 << endl;
cout << setw(8) << "Khaled" << 25 << endl;
cout << setw(8) << "Ali"    << 20 << endl;
```

```cpp
// Block 2
cout << left << setw(8) << "Ahmed"  << 30 << endl;
cout << left << setw(8) << "Khaled" << 25 << endl;
cout << left << setw(8) << "Ali"    << 20 << endl;
```

> 💡 **Remember:** `setw` affects **only the next value**, while `setfill`, `left` and `right` stay active on the stream until you change them.

### B.2 — Write the code

3. Print the following table using `setw` only (no manual spaces):

```
Name        Age   Grade
Ahmed       30    A
Khaled      25    B
Ali         20    A+
```

4. Reprint the same table right-aligned, and then with `.` as a fill character.

---

## Part C — `string(n, ch)` and Shapes

### C.1 — Trace

**Q8**

```cpp
for (int i = 1; i <= 5; i++)
    cout << setw(5) << string(i, '*') << endl;
```

**Q9**

```cpp
for (int i = 1; i <= 5; i++)
    cout << setfill('*') << setw(i) << "*" << endl;
```

### C.2 — Write the code

5. Print this shape (right triangle, right aligned) for `n = 5`:

```
    *
   **
  ***
 ****
*****
```

6. Print the same triangle **left aligned**.
7. Print a pyramid for any `n` the user enters:

```
  *
 ***
*****
```

---

## Part D — `setprecision`, `fixed`, `boolalpha`

### D.1 — Trace

**Q10**

```cpp
double pi = 3.146592653589793;
cout << "Default precision: " << pi << endl;
cout << "setprecision(3): " << setprecision(3) << pi << endl;
cout << "Fixed + setprecision(3): " << fixed << setprecision(3) << pi << endl;
```

> Explain the difference between `setprecision` **with** `fixed` and **without** it.

**Q11**

```cpp
cout << boolalpha;
cout << true  << endl;
cout << false << endl;
cout << noboolalpha;
cout << "try again: " << true;
```

### D.2 — Write the code

8. Ask the user for the radius of a circle and print its area with **exactly 2 decimal digits**.
9. Ask for 3 marks, then print the average with 3 decimal digits, and print whether the student passed using `boolalpha`.

---

## Part E — Conditional (Ternary) Operator `?:`

### E.1 — Trace

**Q12**

```cpp
int x = 10;
int y = x == 10 ? 6 : -1;
cout << y;
```

**Q13** — Tricky:

```cpp
if (int x = 5)
    cout << x;
```

### E.2 — Write the code

10. Rewrite Q12 using a normal `if / else`.
11. Read a number and print `"Even"` or `"Odd"` using the ternary operator **only** (no `if`).
12. Read two numbers and print the largest using the ternary operator.

---

## Part F — Casting & ASCII

### F.1 — Trace

**Q14**

```cpp
bool b = 10;
cout << "bool value: " << b << endl;
cout << "size of 10: " << sizeof(10) << endl;
cout << "size of b : " << sizeof(b) << endl;
```

**Q15**

```cpp
double d = 6000000000;
int x  = (int)d;     // c-type casting
int x1 = int(d);     // function-type casting
cout << "int value (x)  : " << x  << endl;
cout << "int value (x1) : " << x1 << endl;
```

**Q16**

```cpp
double d1 = 5 / 2;
double d2 = (double)5 / 2;
double d3 = 5 / (double)2;
double d0 = 5;
cout << d1 << " - " << d2 << " - " << d3 << " - " << d0 / 2;
```

**Q17**

```cpp
char ch = 'A';
cout << 5 + ch << endl;
```

**Q18**

```cpp
string str = "123";
int num = stoi(str);
cout << "Number: " << num + 1 << endl;

double pi = 3.14159;
string piStr = to_string(pi);
cout << "Pi as string: " << piStr << endl;
```

### F.2 — Write the code

13. Read a character from the user and print its **ASCII code**.
14. Read an integer between 0 and 255 and print the **character** it represents.
15. Read a small letter and convert it to a **capital** letter using ASCII arithmetic only (no library function).
16. Print a table of all characters from ASCII `65` to `90` with their codes, formatted with `setw`.

---

## 🏆 Challenge

Write a program that prints a small **receipt** for 3 items. For every item read the name, the quantity and the unit price, then print:

```
Item          Qty    Price     Total
-------------------------------------
Notebook        3     12.50     37.50
Pen            10      2.75     27.50
Bag             1    150.00    150.00
-------------------------------------
                          Sum: 215.00
```

Requirements:

- Item names read with `getline` (they may contain spaces)
- All columns aligned using `setw` + `left` / `right`
- All money values printed with `fixed` and `setprecision(2)`
- The separator lines drawn with `string(n, '-')`

---

**Good luck! 💻**
