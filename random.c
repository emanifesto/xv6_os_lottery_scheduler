static unsigned int randstate = 1;

unsigned int rand(void) {
    randstate = randstate * 1664525 + 1013904223;
    return randstate;
}

int random(int max) {
    return rand() % max;
}
