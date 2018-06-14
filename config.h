#if DEBUG
#define PRINT(...) std::cout<<__VA_ARGS__
#else
#define PRINT(...)
#endif

#if DEBUG
#define PRINT_LINE(...) std::cout<<__VA_ARGS__<<std::endl;
#else
#define PRINT_LINE(...)
#endif
