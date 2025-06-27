# FILE-MANAGEMENT-TOOL

*COMPANY* : CODTECH IT SOLUTIONS

*NAME* : SWATI KUMARI

*INTERN ID* : CTO4DF966

*DOMAIN* : C++ PROGRAMMING

*DURATION* : 4 WEEKS

*MENTOR* : NEELA SANTOSH

Project Report on File Handling in C++
1. Introduction
This project demonstrates the fundamental file handling operations in C++ through a console-based application. File handling is one of the essential concepts in programming, enabling programs to store and retrieve data from external files. This project focuses on reading, writing, and appending data to text files using standard C++ file streams (fstream, ifstream, ofstream).

The application allows users to interact with a text file through a simple menu-driven interface, providing options to write data (overwrite mode), append data, or read the file's contents. It helps users understand how to work with files in C++, manage file streams, and handle basic input-output operations efficiently.

2. Objectives
To understand and implement file handling concepts in C++.

To provide a simple application demonstrating reading, writing, and appending data to text files.

To enhance programming skills by applying standard input/output operations and control structures.

To create a user-friendly menu-driven system for interacting with files.

3. Tools and Technologies Used
Programming Language: C++

Development Environment: Code::Blocks / Visual Studio Code / any C++ compiler (e.g., g++)

Standard Libraries: <iostream>, <fstream>, <string>

4. Application Features
Write to File: Allows the user to overwrite the existing file with new data. This operation uses the ofstream class in default mode, which erases previous content and writes new lines provided by the user.

Append to File: Provides an option to add more content to the existing file without erasing the previous data. This is achieved using ofstream with the ios::app mode, ensuring new data is added at the end of the file.

Read from File: Displays the contents of the file line by line using the ifstream class. It allows users to verify the data stored in the file after write or append operations.

Menu System: A console-based menu enables easy navigation between different operations. Users can repeatedly perform operations until they choose to exit the application.

5. Implementation Details
The application starts by defining three key functions:

writeToFile(): Accepts user input and writes it to a file, overwriting existing content.

appendToFile(): Adds additional data at the end of the existing file.

readFromFile(): Opens and reads the file contents line by line.

The main() function presents a loop-driven menu to the user with options for each file operation. The program continues running until the user selects the "Exit" option.

Error handling is included to manage scenarios such as failure to open files, ensuring robustness.

6. Conclusion
This project successfully implements basic file handling techniques in C++. It reinforces the understanding of file streams, modes of operation (read, write, append), and stream handling best practices. Through this application, users gain practical experience with persistent data storage, a crucial skill in real-world software development.

The project lays the foundation for more advanced applications involving file manipulation, such as log generation, configuration file management, and basic database systems.

OUTPUT

