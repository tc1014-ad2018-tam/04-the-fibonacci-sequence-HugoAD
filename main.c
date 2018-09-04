/*
    This program generates the Fibonacci Sequence
    according to the term that the user ask

    Author: Hugo Aguirre
    Date: September 3, 2018
    */

 #include <stdio.h>

int main() {

    //Variable declaration
    unsigned int n, first = 0, second = 1, next, c;


    //Here we welcome the user and ask for any
    // number of terms of the sequence in the Fibonacci series.
    printf("-- Welcome to the Fibonacci Series --\n");
    printf("Enter the number of terms of the sequence:\n");
    scanf("%d", &n);


    //Here we print the first numbers of the sequence
    //according to what the user asked.
    printf("First %d terms of Fibonacci series are:\n", n);

    for (c = 0; c < n; c++)
    {
        if (c <= 1)
            next = c;
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d\n", next);
    }

    return 0;
}