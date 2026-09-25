function New-CourseFolder {
    param([string]$Path)

    New-Item -ItemType Directory -Force -Path $Path | Out-Null
    New-Item -ItemType File -Force -Path (Join-Path $Path ".gitkeep") | Out-Null
}

# 03 - Printing
New-CourseFolder "03 - Printing\Homework\Printing Homework"

# 04 - Data Types and Variables
New-CourseFolder "04 - Data Types and Variables\Practice"
New-CourseFolder "04 - Data Types and Variables\Homework\Homework 1 - 3 Easy Challenges"
New-CourseFolder "04 - Data Types and Variables\Homework\Homework 2 - 2 Medium Challenges"
New-CourseFolder "04 - Data Types and Variables\Homework\Homework 3 - 3 Hard Challenges"

# 05 - Operators
New-CourseFolder "05 - Operators\Practice"
New-CourseFolder "05 - Operators\Homework\Operators Homework"
New-CourseFolder "05 - Operators\Homework\Logical Operators Homework"
New-CourseFolder "05 - Operators\Homework\Division and Modulus\Easy Challenges"
New-CourseFolder "05 - Operators\Homework\Division and Modulus\Medium Challenges"
New-CourseFolder "05 - Operators\Homework\Division and Modulus\Hard Challenges"

# 06 - Selection
New-CourseFolder "06 - Selection\Practice"
New-CourseFolder "06 - Selection\Homework\Homework 1 - 4 Easy Challenges"
New-CourseFolder "06 - Selection\Homework\Homework 2 - 2 Medium Challenges"
New-CourseFolder "06 - Selection\Homework\Homework 3 - 2 Hard Challenges"

# 07 - Loops
New-CourseFolder "07 - Loops\While Loops\Practice"
New-CourseFolder "07 - Loops\While Loops\Homework\Homework 1 - 5 Easy Challenges"
New-CourseFolder "07 - Loops\While Loops\Homework\Homework 2 - 4 Medium Challenges"
New-CourseFolder "07 - Loops\While Loops\Homework\Homework 3 - 4 Hard Challenges"

New-CourseFolder "07 - Loops\For Loops\Practice"
New-CourseFolder "07 - Loops\For Loops\Homework\4 Medium Challenges"
New-CourseFolder "07 - Loops\For Loops\Homework\4 Hard Challenges"

# 08 - 1D Arrays
New-CourseFolder "08 - 1D Arrays\Practice\Practice 1"
New-CourseFolder "08 - 1D Arrays\Practice\Practice 2"
New-CourseFolder "08 - 1D Arrays\Homework\Easy Challenges"
New-CourseFolder "08 - 1D Arrays\Homework\Medium Challenges"
New-CourseFolder "08 - 1D Arrays\Homework\Hard Challenges"

# 09 - Char Arrays
New-CourseFolder "09 - Char Arrays\Practice"
New-CourseFolder "09 - Char Arrays\Homework\Homework 1 - 6 Easy to Medium Challenges"
New-CourseFolder "09 - Char Arrays\Homework\Homework 2 - 3 Medium Challenges"
New-CourseFolder "09 - Char Arrays\Homework\Homework 3 - Employee Program"

# 10 - Multidimensional Arrays
New-CourseFolder "10 - Multidimensional Arrays\Practice"
New-CourseFolder "10 - Multidimensional Arrays\Homework\Homework 1 - 3 Easy Challenges"
New-CourseFolder "10 - Multidimensional Arrays\Homework\Homework 2 - 4 Medium to Hard Challenges"
New-CourseFolder "10 - Multidimensional Arrays\Homework\Homework 3 - Tic Tac Toe Application"

# 11 - Functions
New-CourseFolder "11 - Functions\Practice"

1..7 | ForEach-Object {
    $number = $_.ToString("00")
    New-CourseFolder "11 - Functions\Homework\Problem $number"
}

# 12 - Recursive Functions
New-CourseFolder "12 - Recursive Functions\Practice"
New-CourseFolder "12 - Recursive Functions\Homework\Homework 1 - Easy to Medium Challenges"
New-CourseFolder "12 - Recursive Functions\Homework\Homework 2 - Medium to Hard Challenges"

# Projects 1 and 2
$projects = @(
    "13 - Project #1 - Hospital System",
    "15 - Project #2 - Library System"
)

foreach ($project in $projects) {
    New-CourseFolder "$project\Requirements"
    New-CourseFolder "$project\Design"
    New-CourseFolder "$project\Implementation"
}

# 14 - Structures
New-CourseFolder "14 - Structures\Practice"
New-CourseFolder "14 - Structures\Homework\Shopping Cart"
New-CourseFolder "14 - Structures\Homework\Honda Car System"

# 16 - Templates
New-CourseFolder "16 - Templates\Function Templates\Practice"
New-CourseFolder "16 - Templates\Class Templates\Practice"

# 17 - STL
New-CourseFolder "17 - STL\STL Usage"
New-CourseFolder "17 - STL\Practice\Queue"
New-CourseFolder "17 - STL\Practice\Stack"
New-CourseFolder "17 - STL\Practice\Valid Parentheses"
New-CourseFolder "17 - STL\Practice\Find Full Name"
New-CourseFolder "17 - STL\Practice\Sliding Window Maximum"
New-CourseFolder "17 - STL\Practice\Rewrite Library System Using STL"
New-CourseFolder "17 - STL\Practice\Rewrite Hospital System Using STL"
New-CourseFolder "17 - STL\Homework\Medium Challenges"
New-CourseFolder "17 - STL\Homework\Hard Challenges"

# 18 - Files and Streams
New-CourseFolder "18 - Files and Streams\freopen"
New-CourseFolder "18 - Files and Streams\fstream"
New-CourseFolder "18 - Files and Streams\stringstream"
New-CourseFolder "18 - Files and Streams\Serialization"
New-CourseFolder "18 - Files and Streams\Practice"

# 19 - Ask.fm
New-CourseFolder "19 - Project #3 - Ask.fm - Q & A\Requirements"
New-CourseFolder "19 - Project #3 - Ask.fm - Q & A\Design"
New-CourseFolder "19 - Project #3 - Ask.fm - Q & A\Database"
New-CourseFolder "19 - Project #3 - Ask.fm - Q & A\Implementation"

# 20 - Pointers
$pointerTopics = @(
    "References",
    "Pointers Basics",
    "Pointers and Arrays",
    "Pointers and Const",
    "Pointers and Functions",
    "Dynamic Memory Allocation",
    "Pointers and Structures",
    "Memory Leaks and Dangling Pointers",
    "Stack and Heap Memory"
)

foreach ($topic in $pointerTopics) {
    New-CourseFolder "20 - Pointers\$topic"
}

# 21 - Headers and Includes
$headerTopics = @(
    "Headers and Includes",
    "Separating Interface from Implementation",
    "Struct Separation",
    "Forward Declaration",
    "Namespaces"
)

foreach ($topic in $headerTopics) {
    New-CourseFolder "21 - Headers and Includes\$topic"
}

# 22 - Exception Handling
New-CourseFolder "22 - Exception Handling\Throw Try Catch"
New-CourseFolder "22 - Exception Handling\More Exception Handling"
New-CourseFolder "22 - Exception Handling\Stack Unwinding"
New-CourseFolder "22 - Exception Handling\noexcept"

# 23 - More on Fundamentals
$fundamentals = @(
    "Signed and Unsigned",
    "Scientific Notation",
    "Rounding Errors",
    "Floating Point Conversion",
    "Type Conversion",
    "Stream Manipulators",
    "Input Validation",
    "More Files and Streams"
)

foreach ($topic in $fundamentals) {
    New-CourseFolder "23 - More on Fundamentals\$topic"
}

New-CourseFolder "24 - Compilation Process\Command Line Arguments"
New-CourseFolder "25 - Debugger\Practice"

# 26 - OOP
New-CourseFolder "26 - Object Oriented Programming\Practice"
New-CourseFolder "26 - Object Oriented Programming\Homework\Pyramid of OOP"
New-CourseFolder "26 - Object Oriented Programming\Homework\Abstraction"

# 27 - OOP Classes
$classTopics = @(
    "Constructor and Destructor",
    "Copy Constructor",
    "Initializer List",
    "Default Functions",
    "Deleted Functions",
    "Const with Classes",
    "Static Members",
    "Friend Classes and Functions"
)

foreach ($topic in $classTopics) {
    New-CourseFolder "27 - OOP - Classes\$topic"
}

New-CourseFolder "27 - OOP - Classes\Homework\Constructors and Destructors"
New-CourseFolder "27 - OOP - Classes\Homework\Copy Constructor"
New-CourseFolder "27 - OOP - Classes\Homework\Const Static Friend - Part 1"
New-CourseFolder "27 - OOP - Classes\Homework\Const Static Friend - Part 2"

# 28, 29
New-CourseFolder "28 - UML Class Diagram\Practice"
New-CourseFolder "28 - UML Class Diagram\Designs"
New-CourseFolder "29 - OOP Part 1 - Summary\Review"

# Projects 4 and 5
$oopProjects = @(
    "30 - Project #4 - Ask.fm - Q & A (OOP)",
    "31 - Project #5 - Online Book Reader"
)

foreach ($project in $oopProjects) {
    New-CourseFolder "$project\Requirements"
    New-CourseFolder "$project\UML"
    New-CourseFolder "$project\Design"
    New-CourseFolder "$project\Implementation"
}

# 32 - Inheritance
New-CourseFolder "32 - OOP - Inheritance\Practice"
New-CourseFolder "32 - OOP - Inheritance\Homework\Homework 1 - Hierarchies"
New-CourseFolder "32 - OOP - Inheritance\Homework\Homework 2 - More Features"
New-CourseFolder "32 - OOP - Inheritance\Homework\Homework 3 - Design Problems"
New-CourseFolder "32 - OOP - Inheritance\Homework\Homework 4 - Applications"

# 33 - Polymorphism
New-CourseFolder "33 - OOP - Polymorphism\Practice"
New-CourseFolder "33 - OOP - Polymorphism\Homework\Homework 1"
New-CourseFolder "33 - OOP - Polymorphism\Homework\Homework 2"

# 34 - Operator Overloading
$operatorTopics = @(
    "Binary Operator Overloading",
    "Unary Operator Overloading",
    "Subscript Operator Overloading",
    "Relational Operator Overloading",
    "Prefix and Postfix Operators"
)

foreach ($topic in $operatorTopics) {
    New-CourseFolder "34 - OOP - Operator Overloading\$topic"
}

New-CourseFolder "34 - OOP - Operator Overloading\Homework\Homework 1"
New-CourseFolder "34 - OOP - Operator Overloading\Homework\Homework 2"
New-CourseFolder "34 - OOP - Operator Overloading\Homework\Homework 3"

New-CourseFolder "35 - OOP Part 2 - Summary\Review"

# 36 - Expedia
New-CourseFolder "36 - Project #6 - Expedia.com\Requirements"
New-CourseFolder "36 - Project #6 - Expedia.com\UML"
New-CourseFolder "36 - Project #6 - Expedia.com\Design"
New-CourseFolder "36 - Project #6 - Expedia.com\APIs"
New-CourseFolder "36 - Project #6 - Expedia.com\Implementation"

Write-Host ""
Write-Host "Course folder structure created successfully."