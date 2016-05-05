#define DEBUG_MOD
#ifdef DEBUG_MOD
#define DEBUG
#else
#define DEBUG if(0)
#endif

#define ASSERT_snd( cond, message ) \
 if (!(cond)) {                     \
    printf ("(sender) ");           \
    perror (message);               \
    putchar ('\n');                 \
    return -1;                      \
 }

#define ASSERT_rcv( cond, message ) \
 if (!(cond)) {                     \
    printf ("(reciever) ");         \
    perror (message);               \
    putchar ('\n');                 \
    return -1;                      \
 }

enum SOME_CONSTS
{
    BUF_SIZE = 1,
    F_GETPIPE_SZ = 1032,
};

