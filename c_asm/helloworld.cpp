// only works on linux (with windows you need different interupt)
int main() {
    asm(
        "mov $4, %%eax;"
        "mov $1, %%ebx;"
        "mov $13, %%edx;"
        "int $0x80;"
        :
        :"c"("hello world!")
       );
    return 0;
}
