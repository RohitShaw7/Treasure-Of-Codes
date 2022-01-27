#include <stdio.h>
#include <string.h>

int main()
{
    FILE * filePointer; //declaring file pointer
    char words[100]; //declaring character array
    int max=0; //defining max length to 0
    if (filePointer = fopen("names.txt", "r")) //checking if file is not empty
    {
        while (fscanf(filePointer, "%s", words) != EOF) //iterating until EndOfFile
        {
            if(strlen(words)>max) //checking for each word if the length is greater than the max value
            {
                max=strlen(words); //if yes, then setting the max to the value of the length
            }
        }
    }

    printf("Length of the longest word is : %d\n", max); //printing the length of the longest word
    printf("The words are : \n");

    if (filePointer = fopen("names.txt", "r")) //checking if file is not empty
    {
        while (fscanf(filePointer, "%s", words) != EOF) //iterating until EndOfFile
        {
            if(strlen(words)==max) //checking for each word if the length is equals to maximum
            {
                printf("%s\n",words); //printing the names of the maximum length
            }
        }
    }

    fclose(filePointer); //closing the file
}
