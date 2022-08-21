// only works on linux (becs i have no clue how this work :V and cant even compile this on my windows machine)
char helloWrld[] = "hello world!\n";
char* helloP = &helloWrld[0];

int main() {
    asm(
        "hello:;"
        "mov $4, %eax;"
        "mov $1, %ebx;"
        "mov helloWrld, %ecx;"
        "mov $13, %edx;"
        "int $0x80"
    );
    return 0;
}
