int initialized_global = 2;
int uninitialized_global;


int foo(int local) {
    return local + uninitialized_global + initialized_global;
}