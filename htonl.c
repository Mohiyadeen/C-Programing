#define LITTLE_ENDIAN 0
#define BIG_ENDIAN 1

static const short endianDetectWord = 0x0100;
#define BYTE_ORDER ((unsigned char *)&endianDetectWord)[0] == 0x01 ? BIG_ENDIAN : LITTLE_ENDIAN

#define flipBytes(x) ({\
     typeof(x) temp; \
     unsigned int i; \
     for (i=0; i<sizeof(x); ++i) \
         ((unsigned char*)&temp)[i] = ((unsigned char*)&x)[sizeof(x)-1-i]; \
     temp; \
   })

int htonl(int x)
{
#if BYTE_ORDER == BIG_ENDIAN
    return x;
#elif BYTE_ORDER == LITTLE_ENDIAN
    return flipBytes(x);
}
