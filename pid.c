#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();

    if (pid == 0) {
        // This is the child process
        printf("I am the child!\n");
    } else {
        // This is the parent process
        printf("I am the parent!\n");
    }

    return 0;
}