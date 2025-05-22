# -FILE-HANDLING-PROGRAM
*COMPANY*:CODTECH IT SOLUTIONS
*NAME*:MEGHPARNA BHAKAT
*INTERN ID*:CT04DL159
*DOMAIN*: C Programming
*DURATION*:4 WEEKS
*MENTOR*:NEELA SANTOSH

## I was assigned a task based on file handling using the C programming language. The objective of the task was to create a program that could perform basic file operations such as creating a file, writing data into it, reading data from it, and appending data. At first, I had a rough idea about file handling in theory, but this task gave me the opportunity to practically implement those concepts and understand how file systems work in a real-world programming context.

To begin with, I started writing the program in VS Code, which is a source-code editor that supports C programming and integrates well with the GCC compiler. I created a file called file_handling.c where I wrote all the functions and logic. The program follows a menu-driven approach, where the user is asked to select an option from the given choices: write, read, append, or exit. Each option triggers a corresponding function that performs the selected file operation. I created three functions: writeToFile(), readFromFile(), and appendToFile() to handle the respective tasks, and a loop inside the main() function keeps the program running until the user chooses to exit.

While writing the code, I learned how the fopen() function is used to open a file in different modes like "w" for writing, "r" for reading, and "a" for appending. I also understood how to handle input and output using fgets() and fprintf() for writing strings into files and reading them back. One of the important things I learned was error handling—checking whether a file was successfully opened before performing any operations on it. This is crucial because if the file cannot be opened (for example, if it doesn't exist or due to permission issues), it could crash the program.

I faced a few issues while running the code. The first time, the program compiled and ran successfully, but when I tried to compile it again without closing the .exe file that was running in the background, I got a "Permission Denied" error. From this, I learned that we need to ensure that the file is not in use while compiling it again. Another issue I faced was with scanf() and fgets() being used together, which caused the program to skip inputs. I resolved this by using getchar() to clear the input buffer, which helped prevent the program from going into an infinite loop.

This task taught me a lot about how data is stored, accessed, and manipulated through files. I also realized the importance of breaking code into smaller functions, which makes the program easier to understand and debug. Moreover, working with the file system made me think about how many real-life applications—like saving user data, logs, or reports—depend on file handling. Whether it’s a text editor, a compiler, or a software that saves logs, all of them rely heavily on file operations.

The tools I used for this task include Visual Studio Code (VS Code) as the code editor, the GCC compiler for compiling the C program, and the Windows operating system as the platform to run everything. I used the terminal inside VS Code to compile the code using the gcc command and to run the generated .exe file.

Overall, this internship task helped me build confidence in working with files in C. It gave me a better understanding of how to manage input and output in a program, how to structure code using functions, and how to troubleshoot common issues during compilation and execution. Most importantly, it made me more comfortable using development tools like VS Code and helped me understand how professional programming environments work. I look forward to applying this knowledge in future tasks and building more complex applications that involve file processing.
