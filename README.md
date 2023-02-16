## SCRIPT REPO
---- 
Welcome to The scripts repo. The code found in this repo will be anything that
helps to automate tasks on the command line. 

The repo is not dependant on any particular language so dependancies may vary 
for you. Each script will contain the shebang line dictating the interpreter 
used also use the file format if available to figure the dependanncies. 

## GOAL
----
- Automate a build systems with a generic starting configuration and structure 
for each language that can be easily launched on the command line.
    - Add specializations via command line arguments for commonly used frameworks
    that need extra configurations. 
        - No garuantees as of yet to connfigure the file based on the frameworks
        being installed locally or installed in the root directory from source. 

- Automate navigation on the command line. 
    ex: A simple program demonstrating this is the `aliasPath` command that allows 
    either the current working directory to become aliased via the command `current`
    or the directory you give a single command line argument to. 

## CONTRIBUTION
----
This is a public repo for anyone to contribute their own tools that help their 
process, as well as ennhance the scripts already found in the repo.

## DEPENDENCIES
---- 
- All C++ build system scripts will rely on googletest for unit testing.



