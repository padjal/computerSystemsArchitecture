#ifndef __rnd__
#define __rnd__

#include <cstdlib>

inline int Random(int limit){
    return rand() % limit + 1;
}

#endif //__rnd__