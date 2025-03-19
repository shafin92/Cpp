#include <stdio.h>
int main() {
    int code, quantity;
    double total;
// Read the item code and quantity
    scanf("%d %d", &code, &quantity);
switch (code) {
case 1:
 total = quantity * 4.00;
break;
 case 2:
total = quantity * 4.50;
break;
case 3:
total = quantity * 5.00;
break;
case 4:
total = quantity * 2.00;
break;
case 5:
total = quantity * 1.50;
break;
default:
printf("Invalid code\n");
return 1; // Exit with an error code
}
printf("Total: R$ %.2lf\n", total);
return 0;
}
