
### README

There is no need for a CMakeLists.txt file inside the include directory

### Reason
----

This is the structure of this App.

```
├── CMakeLists.txt
├── include
│   ├── file1.h
│   ├── file2.h
│   └── file3.h
└── src
    ├── CMakeLists.txt
    ├── main.cpp
    ├── file1.cpp
    ├── file2.cpp
    └── file3.cpp
```
The "include" directory does not contain a CMakeLists.txt file, because it is 
not a separate project. Instead, it is simply a directory that contains header 
files that are used by the project. The header files are included in the source 
files using the `#include` directive, and the include search path is specified 
using the `include_directories()` command in the CMakeLists.txt files for the 
project.

For example, the main.cpp file in the "src" directory might include a header 
file like this:

```cpp
#include "file1.h"
```

The compiler will search for the "file1.h" header file in the include search 
path, which includes the "include" directory. If the header file is found, it 
will be included in the source file. If the header file is not found, the 
compiler will produce an error.


