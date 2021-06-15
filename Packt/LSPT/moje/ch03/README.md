# Dynamic libraries
Create an object file for a library:
gcc -fPIC -c prime.c   // PIC = Position-Independent Code

Create a shared lib:
gcc -shared -Wl,-soname,libprime.so -o libprime.so prime.o

-Wall, -Wextra, -pedantic

apt install manpages-posix-dev # non-free

apropos -s 7posix .

gcc -E -P cube.c -o cube.i
gcc -S cube.i
gcc -c cube.s
gcc cube.o -o cube

man 2 intro
man 2 syscalls



