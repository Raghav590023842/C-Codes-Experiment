// 3.	Declare variables within different code blocks (enclosed by curly braces) 
// and test their accessibility within and outside those blocks.

 #include <stdio.h>

int main() {
    int raghavMarks = 85; 

    printf("Raghav's Marks in main block: %d\n", raghavMarks);

    {
        int priyanshuMarks = 90; 
        printf("Priyanshu's Marks inside inner block: %d\n", priyanshuMarks);
        printf("Accessing Raghav's Marks inside inner block: %d\n", raghavMarks); 
    }

    // Trying to access priyanshuMarks outside its block will cause an error
    // printf("Priyanshu's Marks outside inner block: %d\n", priyanshuMarks); // ❌ Not allowed

    {
        int ankitMarks = 75;
        printf("Ankit's Marks inside another block: %d\n", ankitMarks);
    }

    // printf("Ankit's Marks outside block: %d\n", ankitMarks); // ❌ Not allowed
    return 0;
}

