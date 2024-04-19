#include "myshell.h"

int main() {
    register_child_signal(on_child_exit);
    setup_environment();
    shell();
    return 0;
}








