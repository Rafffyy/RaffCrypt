#include "RaffCrypt.h"
#include <iostream>

int main()
{
    auto testString = raffCrypt("Raff Is nice for making this"); // encrypted at compile-time
    printf(testString);	// automatic decryption on usage (alternatively .decrypt())
    testString.encrypt(); // encrypt after usage if needed again
    testString.clear();	// set full string storage to 0

    getchar();
    return 0x0;
}
