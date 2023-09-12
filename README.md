# Student Record System (Student Info Storage Database)

This project is a simple student information storage database implemented in C. It allows users to add, view, and delete student records, as well as view a list of all students. The database uses a dynamic array to store student information.

## Table of Contents

- [Overview](#overview)
- [Main Files](#main-files)
- [Prerequisites](#prerequisites)
- [Usage](#usage)
- [Commands](#commands)
- [License](#license)

## Overview

The Student Info Storage Database project consists of several main files:

- `constants.c` : Contains constant values used throughout the project.
- `student.h` and `student.c` : Define the `Student` structure and related functions for handling student data.
- `dynarray.h` and `dynarray.c` : Implement a dynamic array data structure for managing student records.
- `studentdata.h` and `studentdata.c` : Define functions for saving and loading student data to/from a file.
- `main.c` : The main program that provides a command-line interface for interacting with the student database.

## Main Files

- `constants.c` : Defines constants such as the number of departments and clear command.
- `student.h` and `student.c` : Define the `Student` structure and related functions for handling student data.
- `dynarray.h` and `dynarray.c` : Implement a dynamic array data structure for managing student records.
- `studentdata.h` and `studentdata.c` : Define functions for saving and loading student data to/from a file.
- `main.c` : The main program that provides a command-line interface for interacting with the student database.

## Prerequisites

Before using this program, ensure you have the following prerequisites:

- A C compiler (e.g., GCC) installed on your system.
- Basic knowledge of C programming.

## Usage

1. Clone or download this repository to your local machine.

2. Compile the project using your C compiler:

   ```bash
   gcc main.c student.c dynarray.c studentdata.c -o student_db
3. Run the compiled executable:

   ```bash
    ./student_db
4. Follow the on-screen instructions to interact with the student information storage database.

## Commands

- Add Student (1): Allows you to add a new student to the database.

- View Student (2): Lets you view a student's information by entering their unique ID.

- Delete Student (3): Allows you to delete a student from the database by entering their unique ID.

- View All Students (4): Displays information about all students in the database.

- Exit (0): Exits the program.

## License

This project is licensed under the MIT License - see the LICENSE file for details.
This project is made by GITHUB USER @vickvey.
[vickvey](https://github.com/vickvey)