# Employee-Management-System

This repository contains a C program implementing an Employee Management System. The program allows users to manage and query data related to employees, including recruitment, printing employee details, searching by employee ID or full name, sorting employees by ID, loading employee data from a file, counting employees, and firing employees. The Employee Management System uses a linked list data structure to store and manage employee records, facilitating easy insertion and deletion of employees while offering various functionalities for efficient employee data management.

## Table of Contents
- [Features](#features)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Compilation](#compilation)
- [Usage](#usage)
  - [Recruit Employee](#recruit-employee)
  - [Print All Employees](#print-all-employees)
  - [Print One Employee](#print-one-employee)
  - [Search by Employee ID](#search-by-employee-id)
  - [Search by Full Name](#search-by-full-name)
  - [Sort Employees by ID](#sort-employees-by-id)
  - [Load Employee Data](#load-employee-data)
  - [Count Employees](#count-employees)
  - [Fire All Employees](#fire-all-employees)
  - [Fire One Employee](#fire-one-employee)

## Features

- Recruit new employees by providing their first name, last name, and number of dependents.
- Print the details of all employees currently in the system.
- Print the details of a specific employee based on their position in the linked list.
- Search for an employee by their employee ID.
- Search for an employee by their full name.
- Sort the employees in ascending order based on their employee ID.
- Load employee data from a file to populate the linked list.
- Count the total number of employees currently in the system.
- Fire all employees, clearing the linked list and releasing memory.
- Fire a specific employee based on their position in the linked list.

## Getting Started

### Prerequisites

To compile and run the program, you need to have the following installed on your system:

- C Compiler (e.g., GCC)

### Compilation

Use the following command to compile the program:

```bash
gcc -o employee_management main.c
```

## Usage

### Recruit Employee

The function `recruitEmployee()` allows you to recruit a new employee by providing their first name, last name, and the number of dependents.

### Print All Employees

The function `printAll()` prints the details of all employees currently in the system.

### Print One Employee

The function `printOne()` prints the details of a specific employee based on their position in the linked list.

### Search by Employee ID

The function `lookOnId()` allows you to search for an employee by their employee ID.

### Search by Full Name

The function `lookOnFullName()` allows you to search for an employee by their full name.

### Sort Employees by ID

The function `sortEmployeesId()` sorts the employees in ascending order based on their employee ID.

### Load Employee Data

The function `loadEmpData()` allows you to load employee data from a file to populate the linked list.

### Count Employees

The function `countEmployees()` counts the total number of employees currently in the system.

### Fire All Employees

The function `fireAll()` fires all employees, clearing the linked list and releasing memory.

### Fire One Employee

The function `fireOne()` allows you to fire a specific employee based on their position in the linked list.

