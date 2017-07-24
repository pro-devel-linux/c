# Version 0.1

- read user input
- callback to user with a message using `stdout.h`

#### build

run : `cc -std=c99 -Wall $1.c -o $2`

- replace $1 with your main file name
- replace $2 with output file name

# Version 0.2

- read user input .
- callback to user with a message using `editline/readline.h` & `editline/history.h` .
- now application scale on multiple platforms like windows, mac & linux .

#### build

run : `cc -std=c99 -Wall $1.c -ledit -o $2`

- make sure you installed the editline lib. with `sudo apt-get install libedit-dev`


- replace $1 with your main file name
- replace $2 with output file name