/* You will get compile errors when you try to compile the code below.
Read the messages anf fix the code below. Explain within the comments the reason
for the errors 

Program:
include <stdio.h>
int main() {
    float result;
    int a = 5;
    float b = 13.5;
    result = a / b;
    printf("The result is %d\n", result);
    return 0;
}
*/



#include <stdio.h>

int main() {
    float result;
    int a = 5;
    float b = 13.5;
    result = a / b;
    printf("The result is %f\n", result);
    return 0;
}

/*Integer divided by float will give you a float result.
The hashtag was missing before the include. This is part of the preprocessor directive.
The result needs to be printed in %f because that represents floating */
