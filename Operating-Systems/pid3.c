#include <stdio.h>      // printf
#include <unistd.h>     // fork, sleep
#include <sys/wait.h>   // wait

int main() {
    pid_t pid = fork(); // Create child process

    if (pid == 0) {
        // Child process
        sleep(2);       // Simulate some work
        printf("I am the child!\n");
        return 42;      // Child exits with status code 42
    } else {
        // Parent process
        int status;
        wait(&status);  // Wait for child and store exit status

        // WIFEXITED checks if child terminated normally
        // WEXITSTATUS extracts actual exit code
        if (WIFEXITED(status)) {
            int exit_code = WEXITSTATUS(status);
            printf("Child exited with status code %d\n", exit_code);
        } else {
            printf("Child did not exit normally.\n");
        }

        printf("I am the parent!\n");
    }

    return 0;
}