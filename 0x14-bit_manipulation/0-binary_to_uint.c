#include "main.h"
/**
 * binary_to_uint - A finction that converts binary number
 * to an unsigned integer
 * @b: A pointer to binary string
 * Return: unsigned integer converted number
 */
unsigned int binary_to_uint(const char *b) {
    unsigned int result = 0;

    if (b == NULL)
        return 0;

    for (int i = 0; b[i] != '\0'; i++) {
        if (b[i] == '0')
            result = (result << 1); /* shift left by 1 */
        else if (b[i] == '1')
            result = (result << 1) | 1; /* shift left by 1 and set the least significant bit to 1 */
        else
            return 0; /* return 0 if there is a character that is not '0' or '1' */
    }

    return result;
}

