## SCRIPT REPO
 
Welcome to The Scripts repo. The code found here will be anything that
helps to automate tasks on the command line. 

The repo is not dependent on any particular language. Dependencies may vary 
for you. Use the shebang line (`#! /bin/bash`) dictating the interpreter 
used or use the file format if available to figure the language dependencies. 

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



