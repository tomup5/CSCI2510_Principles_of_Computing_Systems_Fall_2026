#include <stdio.h>
#include <unistd.h>

//Replace this file with the contents of your hello_fprintf.c
int main( int argc, char* argv[] ){ 
   write(STDOUT_FILENO,"Hello world! I am Thomas\n", 25);

}