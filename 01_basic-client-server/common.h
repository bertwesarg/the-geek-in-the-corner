#ifndef COMMON_H
#define COMMON_H

const int BUFFER_SIZE = 1024;

#define TEST_NZ(x) do { if ( (x)) die("error: '%s' failed (returned non-zero).", #x); } while (0)
#define TEST_Z(x)  do { if (!(x)) die("error: '%s' failed (returned zero/null).", #x); } while (0)

#define die( msg, ... ) \
    do { \
        fprintf(stderr, "%s: " msg "\n", __func__, ##__VA_ARGS__); \
        exit(EXIT_FAILURE); \
    } while (0)

#endif /* COMMON_H */
