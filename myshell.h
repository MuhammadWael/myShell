#ifndef MYSHELL_H_
#define MYSHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h> // Added for signal handling

#define MAX 100
#define LOGS "/home/muhammad_wael/os/lab1/logs.log"

typedef enum {
    builtin,
    executable
} input_t;

typedef enum {
    cd,
    echo,
    export
} command_t;

void setup_environment();
void on_child_exit(int signal); // Updated prototype for signal handler
void reap_child_zombie();
void write_to_log_file(char line[]);
void register_child_signal(void (*on_child_exit)(int));
void shell(void);
command_t check_builtin_cmd(char* arg);
void execute_shell_builtin(char* argv[]);
void execute_command(char* argv[]);
input_t check_input(char* arg);
void parse_input(char cmd[], char* argv[]);
void evaluate_expression(char* argv[]);
void parse_arguments(char* args[], char* argv[]);
void execute_cd(char* argv[]);
void execute_export(char* argv[]);
void execute_echo(char* argv[]);

#endif