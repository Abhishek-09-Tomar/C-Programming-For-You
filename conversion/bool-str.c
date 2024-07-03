// C Program For Boolean to String Conversion.

#include <stdio.h>
#include <stdbool.h>

const char *boolToString(bool value)
{
    return value ? "true" : "false";
}

int main()
{
    bool myBool = true;
    const char *str = boolToString(myBool);
    printf("Boolean value as string: %s\n", str);

    return 0;
}