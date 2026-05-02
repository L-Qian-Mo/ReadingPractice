#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  int i;

  for(i = 1; i < argc; i++) {
    // write(1, "[USER] calling write\n", 21);
    printf(1, "%s%s", argv[i], i+1 < argc ? " " : "\n");
  }
  exit();
}
