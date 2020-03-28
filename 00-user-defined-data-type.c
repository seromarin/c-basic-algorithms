#include "stdlib.h"
#include "stdio.h"
#include "string.h"

struct client
{
    char Name[50];
    char Id[10];
    float Credit;
    char Address[100];
};

int main(int argc, char const *argv[])
{
    struct client client1 = {0};

    strcpy(client1.Name, "Sebastian Rodriguez Marin");
    strcpy(client1.Id, "000000001");
    strcpy(client1.Address, "Cll 123 # 45 - 67");
    client1.Credit = 1000000;

    printf("The client name is: %s\n", client1.Name);
    printf("The client id is: %s\n", client1.Id);
    printf("The client address is: %s\n", client1.Address);
    printf("The client credit is: %f\n", client1.Credit);

    return 0;
}

