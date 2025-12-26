#include <stdio.h>
enum Days {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
int main() {
    enum Days today;
    today = Wednesday;
    printf("Today value is: %d", today);
    return 0;
}
