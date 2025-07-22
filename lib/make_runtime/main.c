#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

int main() {
    void* handle = dlopen("./lib.so", RTLD_LAZY);
    if (!handle) {
        fprintf(stderr, "Ошибка dlopen: %s\n", dlerror());
        return 1;
    }
    dlerror();
    int (*sum)(int, int) = (int (*)(int, int)) dlsym(handle, "sum");
    const char* dlsym_error = dlerror();
    if (dlsym_error) {
        fprintf(stderr, "Ошибка dlsym: %s\n", dlsym_error);
        dlclose(handle);
        return 1;
    }
    printf("1 + 2 = %d\n", sum(1, 2));

    dlclose(handle);
    return 0;
}
