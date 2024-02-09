// functions to add gst

#include <stdio.h>

void calculatePrice(float cost) {
	float price = cost + (0.18*cost);
	printf("Price: %f\n", price);
}

int main() {
        float cost;
        scanf("%f", &cost);

        calculatePrice(cost);

        return 0;
}
