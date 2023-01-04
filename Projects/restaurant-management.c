#include "stdio.h"
#include "stdbool.h"

struct Food {
    char name[100];
    double price;
    float tax;
    int f_code;
};

struct Food input_foods() {
    struct Food single_food;
    printf("Enter food_name, price, food_code: ");
    scanf(" %s %lf %d", single_food.name, &single_food.price, &single_food.f_code);
    single_food.tax = single_food.price * 0.05;
    return single_food;
};

int main (void) {
    printf("koyta food niba: ");
    int n;
    scanf("%d", &n);

    struct Food food_items[n];

    for (int i = 0; i < n; i++) {
        food_items[i] = input_foods();
    }

    display_foods(food_items, n);

    int ordered_food[100];
    int idx = 0;

    printf("order your food by entering food_code or enter 0 for exit: ");

    int food_code;
    while(scanf("%d", &food_code)) {
        if (food_code == 0) {
            break;
        }

        display_foods(food_items, n);

        while (check_food_code(food_items, n, food_code) == false) {
            printf("Invalid Food Code! Please Try Again.\n");
            printf("order your food by entering food_code or enter 0 for exit: ");
            scanf("%d", &food_code);
            if (food_code == 0) {
                break;
            }
        }

        if (food_code == 0) {
            break;
        }

        if (check_food_code(food_items, n, food_code) == true) {
            ordered_food[idx] = food_code;
            idx++;
        }

        printf("order your food by entering food_code or enter 0 for exit: ");
    }

    display_ordered_food(food_items, n, ordered_food, idx);

    return 0;
}

