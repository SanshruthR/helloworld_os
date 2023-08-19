void KMain(void)
{
    char* p = (char*)0xb8000;
    char* hello_world = "Hello world, this is a monolithic kernel";
    int i;

    /* clear the VGA text buffer */
    for (i = 0; i < 80 * 25 * 2; i += 2) {
        p[i] = ' ';
        p[i + 1] = 0x07; /* light gray on black */
    }

    /* display the text */
    for (i = 0; hello_world[i] != '\0'; i++) {
        p[i * 2] = hello_world[i];
        p[i * 2 + 1] = 0xD; /* light red */
    }
}

