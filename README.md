## CS213 Algorithm Lab Codes


## How to use

1. All C files are organised inside `dayN` directory.
2. For compiling a certain day's C files, edit the `DAY` variable in `Makefile`
to the appropriate one.
3. Run `make`

## For the extra points
4. If you dont want to mess `Makefile`, you can use the `run.sh` script with the `dayN` directory
as a parameter. (This requires `sed` installed on your system. For Windows users, you will need Cygwin's sed)

For ex, to compile everything under `day3` directory, do
```sh
sh run.sh day3
```
This command will also run the executable.