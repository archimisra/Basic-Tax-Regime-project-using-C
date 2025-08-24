#include <stdio.h>
#include <string.h>
int main(){
    char commodity[50];
    while(1){
    printf("enter commodity (or type 'exit' to quit..):\n");
    scanf("%s", commodity);
    
    if (strcmp(commodity, "exit") == 0){
        printf("exiting...\n");
        break;
    }


    if(strcmp(commodity, "fruits") == 0){
        printf("Gst = 5%%\n");
    }
    else if (strcmp(commodity, "vegetables") == 0) {
        printf("GST = ~5%% (average, depends on type)\n");
    }
    else if (strcmp(commodity, "freshvegetables") == 0) {
        printf("No GST\n");
    }
    else if (strcmp(commodity, "frozenvegetables") == 0) {
        printf("GST = 5%%\n");
    }
    else if (strcmp(commodity, "cannedvegetables") == 0) {
        printf("GST = 12%%\n");
    }
    else if (strcmp(commodity, "dairy") == 0) {
        printf("GST = ~5%% (milk, curd = 0%%; cheese/flavoured milk = 12%%)\n");
    }
    else if (strcmp(commodity, "toiletries") == 0) {
        printf("GST = 18%%\n");
    }
    else if (strcmp(commodity, "snacks") == 0) {
        printf("GST = ~15%% (12%%–18%% depending on item)\n");
    }
    else if (strcmp(commodity, "clothing") == 0) {
        printf("GST = 5%% or 12%% depending on price\n");
    }
    else if (strcmp(commodity, "footwear") == 0) {
        printf("GST = 5%% or 12%% depending on price\n");
    }
    else if (strcmp(commodity, "electronics") == 0) {
        printf("GST = 18%%\n");
    }
    else if (strcmp(commodity, "appliances") == 0) {
        printf("GST = 18%%\n");
    }
    else if (strcmp(commodity, "stationary") == 0) {
        printf("GST = 18%%\n");
    }
    else if (strcmp(commodity, "books") == 0) {
        printf("GST = 18%%\n");
    }
    else if (strcmp(commodity, "luxury") == 0) {
        printf("GST = 28%% + cess\n");
    }
    else {
        printf("Invalid commodity or not listed.\n");
    }
}

    return 0;

}
