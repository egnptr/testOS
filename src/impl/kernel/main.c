#include "print.h"

void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK);
    for (size_t i = 0; i < 25; i++) {
        print_str("Oh Yeah, Mr. Krabs\n");
    }
}