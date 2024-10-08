#include <stdio.h>

void decimalToBinary(int num) {
    int binary[32], i = 0;
    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

void decimalToOctal(int num) {
    int octal[32], i = 0;
    while (num > 0) {
        octal[i] = num % 8;
        num = num / 8;
        i++;
    }
    printf("Octal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");
}

void decimalToHexadecimal(int num) {
    char hex[32];
    int i = 0;
    while (num > 0) {
        int temp = num % 16;
        if (temp < 10) {
            hex[i] = temp + 48; // ASCII value of 0 is 48
        } else {
            hex[i] = temp + 55; // ASCII value of A is 65
        }
        num = num / 16;
        i++;
    }
    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }
    printf("\n");
}

int main() {
    int num, choice;
    
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    
    printf("Choose the conversion option:\n");
    printf("1. Decimal to Binary\n");
    printf("2. Decimal to Octal\n");
    printf("3. Decimal to Hexadecimal\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            decimalToBinary(num);
            break;
        case 2:
            decimalToOctal(num);
            break;
        case 3:
            decimalToHexadecimal(num);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}