# Integer List (or some other cool name)

This program takes a list of integers from user either as a file or as 
a manual input. It will store the values inside a vector and output the
following statistics:
- The sum of the integers in the list
- The average of the integers in the list
- The minimum value in the list
- The maximum value in the list
- The most frequent value or values in the list
- The difference between the the minimum and maximum of the list

To compile this program you need to have a g++ compiler which supports 
C++20 standard.

To compile the file in terminal, go to the same directory as main.cpp and
enter the following command:

`g++ -std=c++20 main.cpp src/*.cpp -o main`

You can also use extra flags like -Wall -Werror -Wextra et cetera,
but the above is minimum.

This should provide you an executable file named main.
You can either give the program no arguments or the name of the file that 
has the list of integers when executing.

`./main`
or
`./main testfile`
for example.

Input validation is pretty minimal, and int list files should only contain 
numeric values and white-space characters for the program to work as 
intended. If it contains for exmaple a letter 'b', it will stop reading 
the file, and execute the rest of the program with whatever it got before 
the letter 'b'. 
