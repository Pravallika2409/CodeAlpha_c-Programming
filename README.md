
## Project Description
The following is a description of the GPA and CGPA calculator project that has been developed using C++. In this project, the user is able to enter the number of courses, grade points and credit hours of each course. Then, the calculator will calculate the total credit, total grade points, Semester GPA, and overall CGPA.

In the application, vectors have been used to store grade points and credit hours, thus allowing flexibility with regards to how many courses the users can input.

## Features
- Enters multiple courses
- Utilizes vectors for grade points and credit hours storage
- Calculates total credits
- Calculates total grade points
- Calculates Semester GPA
- Calculates Overall CGPA
- Shows course-wise details
- Console-based and user friendly

## Technology used
- C++
- STL (standard template library)
- Vectors
- Loops & conditionals

## Algorithm
1. Enter the number of courses
2. Enter grade points and credit hours of each course
3. Calculate total credits
4. Calculates total grade points using:


Grade Points × Credit Hours

5. Calculates GPA/CGPA using:

CGPA = Total Grade Points / Total Credits

6. Print course details and output

## Sample Input

Enter the number of courses: 3

Course 1
Enter Grade Point: 9
Enter Credit Hours: 3

Course 2
Enter Grade Point: 8
Enter Credit Hours: 4

Course 3
Enter Grade Point: 10
Enter Credit Hours: 3

## Sample Output

---- Course Details ----

Course 1 | Grade Point: 9 | Credit Hours: 3

Course 2 | Grade Point: 8 | Credit Hours: 4

Course 3 | Grade Point: 10 | Credit Hours: 3

Total Credits: 10

Total Grade Points: 87

Semester GPA: 8.7

Overall CGPA: 8.7

# Login and Registration System

## Project Description

In this C++ programming project, a simple login and registration system has been made which enables users to register themselves with an account having a username and password, and after registering, users can log in into the system.

File handling technique has been used in the project to make use of text files for storing usernames and passwords of different users. There will be a different text file for each user storing their information of username and password.

## Features

* User Registration
* User Login Authentication
* Checking for Existing Username
* Data Saving Using Files
* Validating the Password
* User Friendly Menus
* Error Messages in Case of Login Failure

## Tools Used

* C++
* File Handling Functions (ifstream, ofstream)
* Functions
* Strings
* Conditional Statements
* Loops

## Working of the Program

### User Registration

1. Select "Register" option.
2. Enter a username and password.
3. Check whether the given username exists.
4. If not, create a new text file for the user.
5. Store the username and password in the file.
6. Successfully complete registration process.

### Login



1. User selects the Login choice.

2. User inputs the registered username and password.

3. Credentials stored in the file are read by the program.

4. If the credentials match, then the user logs in successfully.

5. Otherwise, an error message is shown to the user.



## Sample Execution

===== Login & Registration System =====

1. Register

2. Login

3. Exit



Input your Choice: 1

Input Username: pravallika

Input Password: 1234

Registration Successful！



Input your Choice: 2

Input Username: pravallika

Input Password: 1234

Login Successful! Welcome, pravallika！


# Sudoku Solver in C++

## Introduction

This project includes a Sudoku Solver using the Backtracking Algorithm in C++. It solves a standard 9x9 Sudoku grid where empty cells get filled according to the rules of Sudoku. Moreover, one can either take the default Sudoku or input any Sudoku puzzle through the user's choice.

## Features

* Stores Sudoku puzzle using the concept of two-dimensional arrays.
* Solves Sudoku puzzle using the Backtracking Algorithm.
* Checks Sudoku rules before placing any number.
* Validates constraints related to rows, columns, and 3x3 subgrids.
* Supports predefined as well as self-input Sudoku puzzles.
* Shows original as well as solved Sudoku grids on the screen.

## Technologies

* C++
* Object-oriented programming concepts
* Recursion
* Backtracking Algorithm

## Working Principle

1. Input Sudoku puzzle or use a default puzzle.
2. Cells that have empty boxes store the value '0'.
3. Look for any empty cells.
4. Place numbers from 1 to 9 one by one and check if any number satisfies the rules of Sudoku or not.
5. After getting a valid number, fill the corresponding cell with it.
6. Repeat the above process recursively.
7. If there is no valid solution, then the algorithm backtracks and tries again.

### Input

The program allows users to:

* Play the default Sudoku Puzzle.
* Provide a personalized Sudoku Puzzle of size 9×9 using 0 for empty spaces.

### Output

* Display the Sudoku puzzle before solving.
* Display the solved Sudoku puzzle if the puzzle has a solution.
* Display relevant messages if the puzzle cannot be solved.

### Learning Objectives

From this project, I have learned:

* The concepts behind Recursion and Backtracking algorithms.
* Solving problems with the help of algorithms.
* Using two-dimensional arrays in C++ programming.
* Console application development.

### Conclusion

In this project, we demonstrate how to use a backtracking approach to develop a Sudoku solver.



# Banking System in C++

## Description

The Banking System is a terminal-based software application that was written in C++. This program has been created with the help of OOP concepts. One can use this program to create several bank accounts. Some of the key functionalities of the program include creating bank accounts, depositing, withdrawing, transferring funds, displaying account details and transaction history.

## Features

* Creation of numerous customer accounts
* Creation of unique account numbers
* Depositing of money in the bank account
* Withdrawal of money after checking for the balance
* Transfer of funds from one account to another
* Viewing of account details and balance
* Recording of transaction history
* Details of all the customers' bank accounts

## Tools and Technologies

* C++
* OOP (Class, Objects)
* Vectors
* STL (Standard Template Library)

## Class Implemented

### Customer Class

Keeps details of the customers including their names and the bank account attached to them.

### Account Class

Helps in storing the following features: Account Number, Balance, Deposits, Withdrawals, Transfer Funds, and Transaction History.
### Transaction Class



Holds data about each transaction including the type of transaction and the amount involved in the transaction.



## How the System Works



1. Users have the ability to create a new account through entering customers' details and the balance of that account.

2. The system stores information about the created account and ensures no duplication in account numbers.

3. Users can make deposits and withdrawals from their accounts.

4. Transfers can be made from one account to another.

5. All transactions made can be recorded.

6. Account details and all available accounts can be shown to users.



## Learning Outcomes



Through this project I learnt how to



* Implement OOP concepts.

* Develop classes.

* Manage data using vectors.

* Understand transaction processes.

* Develop menu driven applications.

* Manage inputs and validate accounts data.



## Future Improvements



* File handling for persistent storage.

* Password protected accounts.

* Calculation of interest and managing loans.

* GUI.

* Integration with database for large scale projects.



## Conclusion



Banking System project is a successful example of OOP implemented in C++ language. This project effectively simulated banking processes including managing accounts, making deposits, withdrawals, transfers, transactions etc.The project provides a strong foundation for understanding banking applications and software development concepts.



## Author

N. Pravallika



## Internship

CodeAlpha C++ Programming Internship

## File Name

gpa_cgpa_calculator.cpp
