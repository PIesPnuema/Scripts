## GETTING STARTED

This is a quick guide to setting up your environment. 

### What needs to be configured?
1. $PATH to the scripts repo so you can execute them without the need to type the full path.
2. Add a new Evnironment variable SCRIPTS_LIB_PATH to your .bashrc file (or any file .bashrc uses). This variable links a path to the scripts dependancies
3. Source .bashrc and .profile to allow the current cli session to have access to new $PATH and env variable.

### STEPS
----

#### 1. Add new path to $PATH
- Note this is a path to the root directory of the Scripts 
repo which differs from out SCRIPTS_LIB_PATH.

Add the following to your .profile or .bashrc file (your choice). Remember to back up your .bashrc
```bash
    # set PATH to include Scripts repo
    if [ -d "$HOME/.local/bin/Scripts" ] ; then
        PATH="$HOME/.local/bin/Scripts:$PATH"
    fi
```

#### 2. Create environment variable SCRIPTS_LIB_PATH
- This is a global variable the scripts will need to link the scripts inside lib directory.
To set this varible open the terminal and add the following command to you .bashrc file.

Replace `your/path/to` with your path to the scripts repo. EX: `~./.local/bin/Scripts/lib`. 
```bash
    # env variable path to dependancy for Scripts repo in .bashrc ----------------

    export SCRIPTS_LIB_PATH="~/your/path/to/Scripts/lib"

    #-----------------------------------------------------------------------------
```

#### 3. Source .bashrc and .profile 
```bash
    #from the home directory
    source .bashrc; source .profile
```  
----
You Should now be able to use the scripts from the repo anywhere in the cli.
