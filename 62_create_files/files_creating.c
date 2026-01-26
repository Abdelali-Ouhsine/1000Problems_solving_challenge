#include <stdio.h>
int main()
{
    FILE *filePointer;
    filePointer = fopen("example.text", "w");
    if (filePointer == NULL)
    {
        printf("Error creating file!");
    }
    fprintf(filePointer, "hello this is a programming file");
    fclose(filePointer);
    printf("file created successfully.\n");
    return 0; 
}