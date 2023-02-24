
Table of contents: [EXPORT_COMMAND](#export_command) | [BASHRC](#bashrc) | [ENVIRONMENT_VARIABLES](#environment_variables) | [Why_do_I_care](#why_do_I_care) |

## WELCOME 

The HOW_TO is meant for an absolute beginner. This guide is not intended
to make claims for being the best strategy for structuring the scripts but rather a beginner
guide on how to use the repo. If you want the quick solution for getting started please go
[GETTING_STARTED.md](https://github.com/PIesPnuema/Scripts/blob/main/docs/GETTING_STARTED.md)

Note this guide is only referring to a Unix/ Linux based system and all the work is done
on the command line.

## EXPORT_COMMAND

In Linux, the export command is used to set environment variables. When you run 
the export command followed by a variable name and value, you are creating or 
modifying an environment variable that can be accessed by programs running in 
the current shell environment.

## BASHRC

The .bashrc file is a shell script that is run every time you start a new 
interactive shell session in Bash. It is typically used to configure the 
environment for your Bash shell, such as setting environment variables, 
creating aliases, and defining functions that can be used in the shell.

The .bashrc file is located in the home directory of your user account. 
If the file does not exist, you can create it using a text editor such as nano 
or vim.

Here are some common things that you might include in your .bashrc file:

- Environment variable settings: You can use the export command to set environment 
  variables that will be available to all shell sessions. For example, you might 
  set the PATH variable to include additional directories where executable programs  
  can be found.
    
- Alias definitions: You can use the alias command to create shortcuts for 
  commonly-used commands. For example, you might define an alias for ls to 
  include the -l and -h options to display long format output with human-readable 
  file sizes.

- Function definitions: You can define custom shell functions that can be used 
  in your shell sessions. For example, you might define a function to quickly 
  switch to a project directory and activate a virtual environment.

Once you have made changes to your .bashrc file, you will need to either open a 
new shell session or run the source command to reload the file in your current 
shell session, like this:

```bash
source ~/.bashrc
```
This will apply the changes that you made to the file.

##### *** BEFORE CHANGING YOUR .bashrc FILE I SUGGEST YOUR MAKE A BACKUP VIA ***
```bash
cp .bashrc .bashrc_backup
```

## ENVIRONMENT_VARIABLES

In Linux, an environment variable is a variable that is set in the shell's environment 
and can be accessed by processes running in that environment. These variables are 
used to store information that can be used by various programs or scripts that 
are executed within the shell's environment.

Environment variables are typically used to store system-wide or user-specific 
configuration settings, such as paths to search for executable programs or libraries, 
default text editors, and other similar values. For example, the PATH environment 
variable is used to specify a list of directories that the shell searches when 
looking for executable programs.

Environment variables can be set and modified using the export command in the shell. 
For example, to set the MY_VAR environment variable to the value hello, you can run:

```bash
export MY_VAR=hello
```

Once the variable is set, you can access its value from within shell scripts or 
other programs that are executed within the shell's environment by referencing 
the variable using the $ prefix, like this:

```bash
echo $MY_VAR
```
The output the value of MY_VAR, which is: **hello**

### Why_do_I_care?

For the repo to work correctly we need to create our own environment variable, then 
add Scripts repo path to $PATH. 

1. SCRIPTS_LIB_PATH 
    - This is a global variable the scripts will need to link the scripts inside `lib` directory. 
    - To set this varible open the terminal and add the following command to you [.bashrc](#.bashrc) file.
    
    Replace `path/to` with the path where the scripts repo lives. EX: ~./.local/bin/Scripts/lib
    ```bash
    # env variable path to dependancy for Scripts repo ---------------------------

    export SCRIPTS_LIB_PATH="~/your/path/to/Scripts/lib"

    #-----------------------------------------------------------------------------
    ```
    If you are unsure about the path navigate to the Scripts/lib directory and type:
    ```bash
    pwd
    ```

    copy the output and use that as the path in .bashrc. 

2. Add new path to $PATH
    - Allows us to execute our scripts anywhere without the need for typing out the address to the script every time you execute it.
    - I like to add the new path inside my .profile file in my home directory.
    - Note this is a path to the root directory of the Scripts repo which differs from out SCRIPTS_LIB_PATH.
    
    Add the following to your .profile or .bashrc file (your choice). Remember to back up your .bashrc 
    ```bash
    # set PATH to include Scripts repo
    if [ -d "$HOME/.local/bin/Scripts" ] ; then
        PATH="$HOME/.local/bin/Scripts:$PATH"
    fi
    ```
3. source .bashrc and .profile (if used)
    
    ```bash
    #from the home directory
    source .bashrc; source .profile
    ```
## TODO -> create repo in another directory and follow these steps to make sure they work and I am not missing dependancies 

