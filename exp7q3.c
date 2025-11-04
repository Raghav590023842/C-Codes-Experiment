// 3.	Create a Book structure containing book_id, title, author name and price.
//  Write a C program to pass a structure as a function argument and print the book details. 

#include <stdio.h>
struct Book {
    int book_id;
    char title[100];
    char author[100];
    float price;
};
int main() {
    struct Book b;

    printf("Enter Book ID: ");
    scanf("%d", &b.book_id);
    getchar();
    printf("Enter Book Title: ");
    fgets(b.title, sizeof(b.title), stdin); 
    printf("Enter Author Name: ");
    fgets(b.author, sizeof(b.author), stdin);
    printf("Enter Book Price: ");
    scanf("%f", &b.price);

    printf("\n--- Book Details ---\n");
    printf("Book ID: %d\n", b.book_id);
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);

    return 0;
}  