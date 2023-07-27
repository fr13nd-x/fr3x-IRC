

#ifdef OS_AIX
  #define AUSIZ 32768
#endif

#ifdef OS_Linux
extern int AUSIZ;
#endif

#ifdef OS_BSD
  #define AUSIZ 32768
#endif

#if defined(OS_IRIX) || defined(OS_IRIX64)
  #define AUSIZ 32768
#endif

#ifdef OS_HPUX
  #define AUSIZ 4096
#endif

#ifdef OS_SunOS
  #define AUSIZ 4096
#endif
