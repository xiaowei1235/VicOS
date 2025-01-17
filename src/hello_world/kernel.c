#include "vga.h"
#include "util.h"

#if defined(__cplusplus)
extern "C" /* Use C linkage for kernel_main. */
#endif

void kernel_main() {
	/* Initialize terminal interface */
	terminal_initialize();
 
	/* Since there is no support for newlines in terminal_putchar
         * yet, '\n' will produce some VGA specific character instead.
         * This is normal.
         */
	terminal_writestring("Hello\tWorld!\n");
}
