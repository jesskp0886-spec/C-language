#include <stdio.h>

// Task 1: The Barista Skill
// Function that takes sugar spoons as input and prints a message (void return type)
void makeCoffee(int sugar) {
    printf("Coffee is ready with %d spoons of sugar!\n", sugar);
}

// Task 2: The Shopping Assistant
// Function that calculates discount based on bill amount (returns float)
float calculateDiscount(int billAmount) {
    if (billAmount > 500) {
        return billAmount * 0.10;  // 10% discount
    } else {
        return 0;  // No discount
    }
}

// Task 3: The Secret Superpower
// Function that checks energy level and prints appropriate message (void return type)
void superPower(int level) {
    if (level == 10) {
        printf("Emergency! Flying Mode ON!\n");
    } else if (level < 10) {
        printf("Energy too low for flight.\n");
    }
}

// Main function to test all three skills
int main() {
    int choice, sugar, billAmount, level;
    float discount;
    
    printf("=== Chitti the Robot - Command Center ===\n\n");
    
    printf("Select Chitti's Skill:\n");
    printf("1. Barista Skill (Make Coffee)\n");
    printf("2. Shopping Assistant (Calculate Discount)\n");
    printf("3. Secret Superpower (Flight Mode)\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);
    printf("\n");
    
    switch(choice) {
        case 1:
            // Task 1: Barista Skill
            printf("=== Barista Skill ===\n");
            printf("Enter number of sugar spoons: ");
            scanf("%d", &sugar);
            makeCoffee(sugar);
            break;
            
        case 2:
            // Task 2: Shopping Assistant
            printf("=== Shopping Assistant ===\n");
            printf("Enter bill amount: ");
            scanf("%d", &billAmount);
            discount = calculateDiscount(billAmount);
            printf("Bill Amount: %d\n", billAmount);
            printf("Discount: %.2f\n", discount);
            printf("Final Amount: %.2f\n", billAmount - discount);
            break;
            
        case 3:
            // Task 3: Secret Superpower
            printf("=== Secret Superpower ===\n");
            printf("Enter energy level: ");
            scanf("%d", &level);
            superPower(level);
            break;
            
        default:
            printf("Invalid choice! Please select 1, 2, or 3.\n");
            break;
    }
    
    return 0;
}