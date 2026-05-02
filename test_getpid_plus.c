#include "types.h"
#include "user.h"

int main() {
    int pid, pid_plus;
    pid = getpid();
    pid_plus = getpid_plus();
    printf(1, "真实 PID: %d\n", pid);
    printf(1, "getpid_plus() 返回: %d\n", pid_plus);
    printf(1, "验证成功: %d + 1 = %d\n", pid, pid_plus);
    exit();
}