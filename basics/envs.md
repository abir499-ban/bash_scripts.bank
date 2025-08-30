Bash provides many built-in environment variables.  
Here are some of the most useful ones:

---

##  File & Directory Variables
| Variable   | Description |
|------------|-------------|
| `$HOME`    | Path to the current user’s home directory. |
| `$PWD`     | Current working directory. |
| `$OLDPWD`  | Previous working directory (used by `cd -`). |

---

##  User Information
| Variable   | Description |
|------------|-------------|
| `$USER`    | Current logged-in user. |
| `$UID`     | Numeric user ID of the current user. |
| `$SHELL`   | Path to the current user’s shell (e.g., `/bin/bash`). |
| `$HOSTNAME`| Hostname of the machine. |

---

##  Execution & Path
| Variable   | Description |
|------------|-------------|
| `$PATH`    | Colon-separated list of directories searched for executables. |
| `$$`       | PID (process ID) of the current shell. |
| `$!`       | PID of the last background process. |
| `$?`       | Exit status of the last command (0 = success). |

---

##  Randomness & Timers
| Variable   | Description |
|------------|-------------|
| `$RANDOM`  | Returns a random integer between 0 and 32767. |
| `$SECONDS` | Number of seconds since the script started running. |
| `$LINENO`  | Current line number in the script. |

---

##  Script Arguments
| Variable   | Description |
|------------|-------------|
| `$0`       | Name of the script itself. |
| `$1, $2 …` | Positional parameters (arguments passed to the script). |
| `$#`       | Number of arguments passed to the script. |
| `$@`       | All arguments as separate words. |
| `$*`       | All arguments as a single word. |

---