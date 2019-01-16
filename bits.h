#ifndef BITS_H
#define BITS_H

static void * bits_join(int hi, int lo)
{
  return (void *)(((intptr_t) hi) << 32) | ((intptr_t) lo);
}

static int bits_lo(void * ptr)
{
  return (int) ((intptr_t) ptr & 0x00000000ffffffff);
}

static int bits_hi(void * ptr)
{
  return (int) ((intptr_t) ptr >> 32);
}

#endif /* end of include guard: BITS_H */
