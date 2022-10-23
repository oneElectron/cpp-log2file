# C++ log2file
A dead simple header only logging system.

Info:
- The library only works with template functions so C is not supported.
- As of now I have only tested it with -std=c++17.

# Installing
as of now my library is only available through my own tap. My reasons for this are outlined below
```
  brew tap oneelectron/oneelectron
  brew install cpp-log2file
```
I use my own tap because the project is new and not popular enought for me (or the homebrew maintainers) to justify cluttering the homebrew repo with my project.
If the project gets enough supporters/popularity then I will be more then happy to submit the repo.

# How it works
The log2file/log2file.hpp header contians macros and functions. You are supposed to use the macros.
Each macro calls the function it is accociated to, but only if you have defined DEBUG. If DEBUG is not defined nothing will print.
This example prints Hello World! the output file
```
  #include <log2file/log2file.hpp>
  #define DEBUG

  LOG("Hello World!") // prints Hello World!
```

This example does not print Hello World!
```
  #include <log2file/log2file.hpp>

  LOG("Hello World!") // does not print Hello World!
```


Each of the macros inside of log2file.hpp look like this:
```
  #ifdef DEBUG
  #define LOGln(out) log2file::logln(out)
  #endif
  #ifndef DEBUG
  #define LOGln(out)
  #endif
```

# Define debug with gcc inside of a makefile
If you are using a Makefile you can define DEBUG inside of it instead of in your code. That looks something like this:
```
debug:
  g++ example.cpp -DDEBUG -o example # with output logging

release:
  g++ example.cpp -o example # without output logging
```

