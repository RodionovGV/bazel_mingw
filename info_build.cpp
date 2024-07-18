#include <cstdio>

int test_info()
{
   #ifdef __MINGW32__
   printf("Build is done using MINGW toolchain with GCC version %d.%d.%d at %s %s\n",
          __GNUC__,
          __GNUC_MINOR__,
          __GNUC_PATCHLEVEL__,
          __TIME__,
          __DATE__);
   #else /* ifdef __MINGW32__ */
   printf("Build GG is done using default toolchain at %s %s\n",
          __TIME__,
          __DATE__);
   #endif /* ifdef __MINGW32__ */

   return(0);
}