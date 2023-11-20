# C++ Practice and Palindrome
## Things to keep in mind:

### Creating a new project
- When making a new project, you can simply create it via visual studio. There's a C++ console app template to choose from that has all the files required to make a simple project.
- When coding, there are include statements. It makes sense to utlize std at the top via statement:`using namespace std;`
- Sizes of the array must be known ahead of time. In other words: In C++, the size of an array must be a constant expression known at compile time. So this is where dynamic memory allocation comes into play. We can use `char* chars = new char[(some size from a local var)];` whereas the '*' tells the compiler to create the dynamic var. 
- Length that we expect to use later in a for loop can simply be placed into a local variable. 
- Within c++ context, the main must be outside the class (unlike other backend languages).
- The main is written with the intent to return a value. 0 when done, 1 otherwise. So it's essentially more of a check to see if it's done running all lines of code within the main.
- All data structures are recommended to be de-allocated after usage to free up memory as needed. Again, c++ is an unmanaged language meaning it's GC is done manually. There's no CLR or JVE.
- All classes must be defined and denoted with a ; at the end.

These are the main changes from C# to c++ on a surface level. Much more to this soon. 

