int main() {
    {
        int x = 20;
        register int a = 10; // 'register' suggests to store 'a' in a CPU register
        a = a + 5;
        x = x + 30;
    }
    return 0;
}