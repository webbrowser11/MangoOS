extern  "C" void main() {
    *(char*)0xb8000 = 'Q'; // Write 'Q' to video memory
    return;
}