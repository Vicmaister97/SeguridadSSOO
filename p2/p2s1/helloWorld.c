#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    int cont = 0;
    const char *phrase = "Hola Mundo";
    printf("%s PID: %d\n", phrase, getpid());
    sleep(10000);
    cont++;
    printf("%d\n", cont);
    return 0;
}
