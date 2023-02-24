## SCRIPT REPO  
 
Sections: [ABOUT](#about) | [GOAL](#goal) | [CONTIBUTION](#contribution) | [DEPENDENCIES](#dependencies) | [DOCS](#docs) | [SCRIPT_DESCRIPTIONS](#script_descriptions)

## ABOUT

The code found here will be anything that
helps to automate tasks on the command line. 

The repo is not dependent on any particular language. Dependencies may vary 
for you. Use the shebang line (`#! /bin/bash`) dictating the interpreter 
used or use the file format if available to figure out the language dependencies. 

## GOAL

- Automate a build system with a generic starting configuration and structure 
for each language that can be easily launched on the command line.
    - Add specializations via command line arguments for commonly used frameworks
    that need extra configurations. This will most likely require two scripts. 
    One if the user has that particular framework installed locally and the other
    that imports the framework into the directory the project will live.

- Automate navigation on the command line. 
    ex: 
     A simple program demonstrating this is the `aliasPath` command that allows 
     either the current working directory to become aliased via the command `current`
     or the directory you give a single command line argument to. 

## CONTRIBUTION

This is a public repo for anyone to contribute their own tools that help their 
process, as well as enhance the scripts already found in the repo.

## DEPENDENCIES

- All C++ build system scripts after 17 Feb 2023 will rely on GoogleTest for unit testing. 

## DOCS

No idea what your doing? [HOW_TO](https://github.com/PIesPnuema/Scripts/blob/main/docs/HOW_TO.md) doc should help? Want to know more [docs](https://github.com/PIesPnuema/Scripts/tree/main/docs) is your place! 

## SCRIPT_DESCRIPTIONS

Scripts: [cppProject](#cppproject) | [undoProject](#undoproject)

### cppProject

cppProject is a shell script that will deploy a generalized CMake build system in the current working directory. The names of the executable must be modified to your projects needs. The script will not work if any directories or files of the same name exist inside the current directory as to not overwrite the contents of that directory/ file. 

The build system structure will be as follows: 

```
├── CMakeLists.txt
├── README.md
├── build
├── googletest
│   └── ...
├── include
│   ├── CMakeLists.txt
│   └── README.md
└── src
    ├── CMakeLists.txt
    ├── README.md
    └── main.cpp

```
***Note: googletest is cloned from [here](https://github.com/google/googletest.git) each time the script is executed.***

### undoProject

***WARNING:*** undoProject will delete any files/ directories that have the same name as the ones intended to be removed. If you run this script in the wrong directory you will may lose all work in those files or directories. ***USE WITH CAUTION.*** 

undoProject will remove all the files/ directories the cppProject script just created. Please read the script to figure out the names of the files and directories that will be deleted. 

