int initialized_global = 2;
int uninitialized_global[4];

static int static_uninitialized_global;
static int static_initialized_global = 3;

void foo() {
    int local_variable = 4;
    static int static_uninitialized_local;
    static int static_initialized_local = 5;

    return;
}