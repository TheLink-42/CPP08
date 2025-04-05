<div align="center">

![CPP](https://github.com/TheLink-42/42-project-badges/blob/main/badges/cppm.png)

# 42 CPP08

**This project from School 42 aims to get students acquainted with the C++ STL containers, iterators and algorithms.
The project consists of three exercises that need to be solved using templated containers and algorithms as much as possible.**


</div>

---

## EasyFind (Exercise 00)

Write a function template "easyfind" that accepts a type T. It takes two parameters, first one of type T and second one of type int.
Assuming T is a container of integers, the function must find the first occurrence of the second parameter in the container.
 
**Rules to follow:**
* If no occurrence is found either throw an exception or return an error value of your choice.
* Implement a main function with tests on your templated function to ensure everything works as desired.
* Don´t need to implement associative containers.
* Even if it is otstrictly necessary, use Algorithms (defined in header <algorithm>) as much as possible


---

## Span (Exercise 01)

Develop a Scan class that can store a maximum of N integers.

**Rules to follow:**
* N is an unsigned integer which will be the only parameter passed to the constructor.
* Implement a function addNumber() to add a single number to the Span.
* Implement a member function to add multiple numbers in a single call.
* Attempting to add a new number when N numbers are already stored should throw an exception.
* Implement a function shortestSpan() that will return the shortest distance between two stored numbers.
* Implement a function longestSpan() that will return the longest distance between two stored numbers.
* If no Span can be calculated (1 or less numbers stored), throw an exception
* Implement a main function with tests on your templated function to ensure everything works as desired.
* Even if it is otstrictly necessary, use Algorithms (defined in header <algorithm>) as much as possible.

---

## MutantStack (Exercise 02)

Develop a MutantStack class, implemented on terms of std::stack, offering all its member functions plus
an additional feature,

**Rules to follow:**
* Implement a main function with tests on your templated function to ensure everything works as desired.
* Even if it is otstrictly necessary, use Algorithms (defined in header <algorithm>) as much as possible.
* Handle possible errors with appropriate error messages or exceptions.


---

## Contact

If you have any questions feel free to reach out!

* **Github:** [TheLink-42](https://github.com/TheLink-42)
* **Slack:** [jbaeza-c](https://42born2code.slack.com/team/U05RS80818A)
* **LinkedIn:** [Jaime Baeza Casado](https://www.linkedin.com/in/jaime-baeza-casado-892684327/)

---

Check other projects [here](https://github.com/TheLink-42/42-Journey)
