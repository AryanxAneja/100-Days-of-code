//Print all enum names and integer values using a loop.
#include <stdio.h>
enum Role{
    ADMIN = 1,
    USER,
    GUEST
};
int main(){

    const char *roleNames[] = {"ADMIN", "USER", "GUEST"};

    int roleValues[] = {ADMIN, USER, GUEST};

    int size = sizeof(roleValues) / sizeof(roleValues[0]);

    for (int i = 0; i < size; i++) {
        printf("%s = %d\n", roleNames[i], roleValues[i]);
    }
    return 0;
}