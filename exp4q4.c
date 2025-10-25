// 4.	Declare a static local variable inside a function. 
// Observe how its value persists across function calls.

#include <stdio.h>

void showMarks() {
    static int raghavMarks = 10;
    raghavMarks++; 
    printf("Raghav's Marks = %d\n", raghavMarks);
}

int main() {
    showMarks();
    showMarks();
    showMarks();
    return 0;
}
