# Version 0.1

- read user input
- callback to user with a message using `stdout.h`

#### build

run : `cc -std=c99 -Wall main.c -o main`

# Version 0.2

- read user input .
- callback to user with a message using `editline/readline.h` & `editline/history.h` .
- now application scale on multiple platforms like windows, mac & linux .

#### build

run : `cc -std=c99 -Wall $main.c -ledit -o main`

- make sure you installed the editline lib. with `sudo apt-get install libedit-dev`