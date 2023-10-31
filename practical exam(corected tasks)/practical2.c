int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int max;

    switch (num1 > num2) {
        case 1:
            max = num1;
            break;
        case 0:
            max = num2;
            break;
    }

    printf("Maximum number is: %d\n", max);

    return 0;
}