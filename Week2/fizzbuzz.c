#include <stdio.h>




// datatype functionname(datatype parameter1, datatype parameter2, datatype parameter3) {
//     // code
//     return value;
// }

void fizzbuzz(int num){

    if (num == 0)
    {
        printf("Exiting the program\n");
        // break;
    }

    if (num % 3 == 0 && num % 5 == 0) // 15
    {
        printf("%d: FizzBUzz\n", num);
    }
    else if (num % 3 == 0) // 9
    {
        printf("%d: Fizz\n", num);
    }

    else if (num % 5 == 0) // 10
    {
        printf("%d: Buzz\n", num);
    }
    else
    {
        printf("The number %d is not a fizzbuzz \n", num);
    }

}


int main()
{

    int num = -1;
    // sum = sum + 10;

while (num != 0) {

    printf("Enter a Number: ");
    scanf("%d", &num);
    fizzbuzz(num);
    
}
    return 0;
}