#include <stdio.h>
#include <unistd.h>

int main(){
    int stack;
    printf("Dirección de la pila: %p\n", &stack);
    execl("./buffer_addr", "buffer_addr", NULL);
    return 0;
}
