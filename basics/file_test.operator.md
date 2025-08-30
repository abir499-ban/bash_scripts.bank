## File Test Operators in Bash

Used to test properties of files and directories.

| Operator       | Meaning                                   |
|----------------|-------------------------------------------|
| `-e file`      | True if file exists                      |
| `-f file`      | True if file exists and is a regular file |
| `-d file`      | True if file exists and is a directory    |
| `-s file`      | True if file exists and is not empty      |
| `-r file`      | True if file is readable                  |
| `-w file`      | True if file is writable                  |
| `-x file`      | True if file is executable                |
| `file1 -nt file2` | True if `file1` is newer than `file2`  |
| `file1 -ot file2` | True if `file1` is older than `file2`  |
