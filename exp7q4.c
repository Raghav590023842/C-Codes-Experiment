// 4.	Create a union containing 6 strings: 
// name, home_address, hostel_address, city, state and zip.
//  Write a C program to display your present address. 

#include <stdio.h>
union Address {
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[20];
};
int main() {
    union Address addr;

    printf("Enter your hostel address: ");
    fgets(addr.hostel_address, sizeof(addr.hostel_address), stdin);

    printf("\n--- Present Address ---\n");
    printf("Hostel Address: %s", addr.hostel_address);

    return 0;
}