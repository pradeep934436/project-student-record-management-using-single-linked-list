# Student Record Management System in C

## Project Overview

The **Student Record Management System** is a menu-driven application developed using the C programming language. It uses a **Singly Linked List (SLL)** to store and manage student records dynamically.

The application allows users to add, view, search, modify, delete, sort, and reverse student records. It also provides file handling functionality to save student records into a file (`student.dat`) and retrieve them when the application starts.

## Features

- **Add Student Record:** Add new student details with automatically generated roll numbers.
- **View Student Records:** Display all available student records.
- **Delete by Roll Number:** Delete a particular student using their roll number.
- **Delete by Name:** Delete a student using their name.
- **Delete All Records:** Delete all student records and free allocated memory.
- **Modify Student Records:** Search and modify student details using:
  - Roll Number
  - Name
  - Percentage
- **Search Student Records:** Search student information based on different criteria.
- **Sort Records:**
  - Sort students alphabetically by name.
  - Sort students by percentage.
- **Reverse Linked List:** Reverse the links of the singly linked list.
- **File Handling:**
  - Save records into `student.dat`.
  - Load previously saved records automatically when the application starts.
- **Input Validation:** Validate student names and percentage values.

## Technologies Used

- Programming Language: C
- Data Structure: Singly Linked List
- Dynamic Memory Allocation: `malloc()` and `free()`
- File Handling: `fopen()`, `fscanf()`, `fprintf()`, `fclose()`
- String Handling: `strcmp()`, `strcpy()`
- Compiler: GCC

## Student Structure

Each student record contains the following fields:

| Member | Data Type | Description |
|---|---|---|
| rollno | int | Student roll number |
| name | char[50] | Student name |
| percentage | float | Student percentage |
| next | struct student * | Pointer to the next node |

## Project Operations

1. Add a Student Record
2. View All Student Records
3. Delete a Particular Record
4. Delete All Records
5. Modify a Student Record
6. Save Records into `student.dat`
7. Sort Records by Name or Percentage
8. Reverse the Linked List
9. Exit the Application

## Project File Structure

```text
Student-Record-Management/
│
├── main.c
├── student.h
├── add.c
├── delete.c
├── search_modify.c
├── sort_reverse.c
├── file_handling.c
├── display.c
├── student.dat
└── README.md
```

*Note: The filenames above are a suggested organization. Adjust them according to your actual source files.*

## Compilation and Execution

### Step 1: Clone the Repository

```bash
git clone <your-repository-url>
```

### Step 2: Open the Project Directory

```bash
cd Student-Record-Management
```

### Step 3: Compile the Program

```bash
gcc main.c add.c delete.c search_modify.c sort_reverse.c file_handling.c display.c -o student
```

### Step 4: Run the Program

**Windows:**
```bash
student.exe
```

**Linux:**
```bash
./student
```

## Sample Menu

```text
***** ENTER YOUR OPTION *****

1) FOR ADD A STUDENT RECORD
2) FOR VIEW THE RECORD
3) FOR DELETE A PARTICULAR RECORD
4) FOR DELETE ALL RECORD
5) FOR MODIFY A RECORD
6) SAVE THE RECORDS INTO student.dat FILE
7) FOR SORT THE RECORDS
8) REVERSE THE LINKS
9) FOR EXIT
```

## Concepts Learned

Through this project, the following C programming concepts are implemented:

- Structures and Pointers
- Singly Linked List
- Dynamic Memory Allocation
- Pointer to Pointer
- Functions and Function Prototypes
- String Manipulation
- File Handling
- Searching and Sorting Algorithms
- Memory Management
- Menu-Driven Programming

## Future Enhancements

- Prevent duplicate roll numbers.
- Add student record validation and improved error handling.
- Implement case-insensitive searching.
- Add a graphical user interface.
- Support additional student information.

## Author

**Pradeep**

**Project:** Student Record Management System  
**Language:** C  
**Domain:** Data Structures and File Handling

---

*This project was developed for learning and practicing C programming, linked lists, pointers, dynamic memory allocation, and file handling.*# project-student-record-management-using-single-linked-list
