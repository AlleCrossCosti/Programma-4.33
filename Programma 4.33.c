#include <stdio.h>
#include <unistd.h>

int main() {
    
    int i;
    
    for(i=0; i<=5; i++)
    {
    printf("Incremento: %d\n" , i);
    usleep(500000);
    }
    return 0;
    
  }
