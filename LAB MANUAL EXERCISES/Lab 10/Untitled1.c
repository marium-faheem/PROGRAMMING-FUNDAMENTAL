#include <stdio.h>
#include <string.h>

// Function declarations
float discount_calc(float total);
void bill(float total, float discountedTotal);
void showCategories();

int main()
{
    int category, item, quantity=0;
    float price = 0, itemTotal, total = 0, discountedTotal;
    char choice, categoryChoice;

    printf("\n");
    printf("\t\t\t\t\tMINI SHOPPING CART\t\t\t\t\t\n");
    printf("\n");

    do
    {
        showCategories();

        printf("\nEnter category number (1-8): ");
        scanf("%d", &category);
        
        
         if (category < 1 || category > 8)
        {
            printf("\nInvalid category selected! Please try again.\n");
            continue; // Go back to start of loop
        }
            categoryChoice = 'y';
        // Inner loop for same category shopping
        do
        {
            price = 0; // Reset price for each item
            
            switch (category)
            {
                   
                    
            case 1: // Dairy section
                printf("\n1. Milk (Rs. 180 per litre)");
                printf("\n2. Cheese (Rs. 500 per pack)");
                printf("\n3. Butter (Rs. 350 per pack)");
                printf("\n4. Yoghurt (Rs. 250 per kg)");
                printf("\nChoose item: ");
                scanf("%d", &item);
                if (item == 1)
                    price = 180;
                else if (item == 2)
                    price = 500;
                else if (item == 3)
                    price = 350;
                else if (item == 4)
                    price = 250;
                else{
                  printf("\nInvalid item selected! Please try again.\n");
                  continue;}
                  
                break;

            case 2: // Meat section
                printf("\n1. Chicken (Rs. 650 per kg)");
                printf("\n2. Beef (Rs. 900 per kg)");
                printf("\n3. Mutton (Rs. 1300 per kg)");
                printf("\n4. Fish (Rs. 2000 per kg)");
                printf("\nChoose item: ");
                scanf("%d", &item);
                if (item == 1)
                    price = 650;
                else if (item == 2)
                    price = 900;
                else if (item == 3)
                    price = 1300;
                else if (item == 4)
                    price = 2000;
                else{
                    printf("\nInvalid item selected! Please try again.\n");
                    continue;}
                break;

            case 3: // Cooking stuff
                printf("\n1. Oil (Rs. 650 per litre)");
                printf("\n2. Flour (Rs. 180 per kg)");
                printf("\n3. Rice (Rs. 300 per kg)");
                printf("\n4. Salt (Rs.50 per pack)");
                printf("\n5. Sugar (Rs.100 per kg)");
                printf("\n6. Beans (Rs.200 per kg)");
                printf("\n7. Tea leaves (Rs.265 per pack)");
                printf("\nChoose item: ");
                scanf("%d", &item);
                if (item == 1)
                    price = 650;
                else if (item == 2)
                    price = 180;
                else if (item == 3)
                    price = 300;
                else if (item == 4)
                    price = 50;
                else if (item == 5)
                    price = 100;
                else if (item == 6)
                    price = 200;
                else if (item == 7)
                    price = 265;
                else{
                     printf("\nInvalid item selected! Please try again.\n");
                      continue;}
                      
                break;

            case 4: // Ready made
                printf("\n1. Bread (Rs. 180 per pack)");
                printf("\n2. Biscuits (Rs. 120 per pack)");
                printf("\n3. Cake (Rs. 500 per cake)");
                printf("\nChoose item: ");
                scanf("%d", &item);
                if (item == 1)
                    price = 180;
                else if (item == 2)
                    price = 120;
                else if (item == 3)
                    price = 500;
                else{
                     printf("\nInvalid item selected! Please try again.\n");
                     continue;}
                     
                break;

            case 5: // Laundry
                printf("\n1. Surf Excel (Rs. 550 per kg)");
                printf("\n2. Ariel (Rs. 600 per kg)");
                printf("\n3. Comfort (Rs. 250 per bottle)");
                printf("\nChoose item: ");
                scanf("%d", &item);
                if (item == 1)
                    price = 550;
                else if (item == 2)
                    price = 600;
                else if (item == 3)
                    price = 250;
                else{
                  printf("\nInvalid item selected! Please try again.\n");
                  continue;}
                  
                break;

            case 6: // Fruits and Veggies
                printf("\n1. Apples (Rs. 300 per kg)");
                printf("\n2. Tomatoes (Rs. 150 per kg)");
                printf("\n3. Potatoes (Rs. 120 per kg)");
                printf("\nChoose item: ");
                scanf("%d", &item);
                if (item == 1)
                    price = 300;
                else if (item == 2)
                    price = 150;
                else if (item == 3)
                    price = 120;
                else{
                     printf("\nInvalid item selected! Please try again.\n");
                  continue;}
                  
                break;

            case 7: // Canned stuff
                printf("\n1. Baked Beans (Rs. 250 per can)");
                printf("\n2. Tuna (Rs. 350 per can)");
                printf("\n3. Sweet Corn (Rs. 200 per can)");
                printf("\nChoose item: ");
                scanf("%d", &item);
                if (item == 1)
                    price = 250;
                else if (item == 2)
                    price = 350;
                else if (item == 3)
                    price = 200;
                else{
                      printf("\nInvalid item selected! Please try again.\n");
                      continue;}
                  
                break;

            case 8: // Bath
                printf("\n1. Soap (Rs. 180 per bar)");
                printf("\n2. Shampoo (Rs. 400 per bottle)");
                printf("\n3. Toothpaste (Rs. 250 per pack)");
                printf("\nChoose item: ");
                scanf("%d", &item);
                if (item == 1)
                    price = 180;
                else if (item == 2)
                    price = 400;
                else if (item == 3)
                    price = 250;
                else{
                    printf("\nInvalid item selected! Please try again.\n");
                    continue;}
                    
                break;

            
            }

            if (price > 0)
            {
                printf("Enter quantity: ");
                scanf("%d",&quantity);
                
                if(quantity<0 || quantity>100){
                  printf("\nPlease enter a valid quantity");
                  continue;}

                itemTotal = price * quantity;
                total += itemTotal;

                printf("Item added successfully!\nSubtotal: Rs. %.2f\n", total);
                
                // Ask if user wants to buy another item from the same category
                printf("\nDo you want to buy another item from this category? (y/n): ");
                scanf(" %c", &categoryChoice);
            }

        } while (categoryChoice == 'y' || categoryChoice == 'Y');

        printf("\nDo you want to shop from a different category? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    discountedTotal = discount_calc(total);
    bill(total, discountedTotal);
    
    getchar();
    getchar();
    return 0;
}

// Function to display the categories
void showCategories()
{
    printf("\n================= CATEGORIES =================");
    printf("\n1. Dairy");
    printf("\n2. Meat");
    printf("\n3. Cooking Stuff");
    printf("\n4. Ready Made");
    printf("\n5. Laundry");
    printf("\n6. Fruits & Vegetables");
    printf("\n7. Canned Stuff");
    printf("\n8. Bath");
    printf("\n==============================================\n");
}

// Function to apply discount
float discount_calc(float total)
{
    float discount = 0;

    if (total >= 10000)
        discount = 0.40 * total;
    else if (total >= 5000)
        discount = 0.25 * total;
    else if (total >= 3000)
        discount = 0.15 * total;

    return total - discount;
}

// Function to print the final bill
void bill(float total, float discountedTotal)
{
    printf("\n==========================================\n");
    printf("--------------- FINAL BILL ---------------\n");
    printf("==========================================\n");
    printf("Total Amount:        Rs. %.2f\n", total);
    printf("Discounted Amount:   Rs. %.2f\n", discountedTotal);
    printf("You Saved:           Rs. %.2f\n", total - discountedTotal);
    printf("------------------------------------------\n");
    printf("   Thank you for shopping with us!\n");
    printf("------------------------------------------\n");
}