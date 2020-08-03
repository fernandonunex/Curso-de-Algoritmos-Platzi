    #include "stdlib.h"
    #include "stdio.h"
    #include "string.h"

    struct drone
    {
        char Name[50];
        char Id[10];
        float Price;
        char Usage[50];
    };

    int main(int argc, char const *argv[])
    {
        struct drone drone1 = {0};
        strcpy(drone1.Name, "Hunter Type 1 ");
        strcpy(drone1.Id, "000000001");
        drone1.Price = 20000;
        strcpy(drone1.Usage, "Police");

        printf("The drone model name is: %s \n", drone1.Name);
        printf("The drone Id is: %s \n", drone1.Id);
        printf("The drone Price is: %f \n", drone1.Price);
        printf("The drone Usage is: %s \n", drone1.Usage);


        return 0;
    }
    