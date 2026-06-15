
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



## Author

N. Pravallika



## Internship

CodeAlpha C++ Programming Internship

## File Name

gpa_cgpa_calculator.cpp
