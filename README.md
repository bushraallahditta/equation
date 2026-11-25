# equation
# Quadratic Equation Solver (C++)

## About the Project
The Quadratic Equation Solver is a beginner-friendly C++ project developed using Object-Oriented Programming (OOP) concepts.

It solves quadratic equations in the standard form:

\[
ax^2 + bx + c = 0
\]

The program calculates the discriminant and determines the nature of the roots. It also compares two equation objects using operator overloading.

## Features
- Create quadratic equation objects using parameterized constructors.
- Calculate the discriminant using:

  \[
  D = b^2 - 4ac
  \]

- Determine the nature of roots:
  - **D > 0:** Two real and distinct roots.
  - **D = 0:** Two equal real roots.
  - **D < 0:** No real roots.
- Compare two equations using the overloaded equality operator (`==`).
- Display equation comparison results and discriminant values.

## OOP Concepts Used
- Classes and Objects
- Private Data Members
- Parameterized Constructors
- Operator Overloading (`==`)
- Logical Operators (`&&`)
- Conditional Statements (`if-else`)

## Sample Equations

| Equation | Discriminant | Result |
|---|---:|---|
| x² - 5x + 6 = 0 | 1 | Two distinct real roots |
| x² - 5x + 6 = 0 | 1 | Two distinct real roots |
| x² + 2x + 5 = 0 | -16 | No real roots |

## Sample Output

<img width="562" height="617" alt="image" src="https://github.com/user-attachments/assets/a9b27ec2-927c-4ec4-a400-072be4fb9589" />


Discriminant (D): 1
Result: Two real and distinct roots

Equation 3: x^2 + 2x + 5 = 0
Discriminant (D):
