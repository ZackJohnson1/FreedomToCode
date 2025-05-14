#include <stdio.h>      // printf
#include <unistd.h>     // fork
#include <sys/wait.h>   // wait

int main() {
    pid_t pid = fork(); // Create child process

    if (pid == 0) {
                        // Child process
        printf("I am the child!\n");
    } else {
                        // Parent process
        wait(NULL);     // Wait for child to finish
        printf("I am the parent!\n");
    }

    return 0;
}