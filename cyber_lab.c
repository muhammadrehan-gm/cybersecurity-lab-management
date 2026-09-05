#include <stdio.h>

int main()
{
    char Lab_name[30];
    int Number_of_computers;
    int Number_of_network_devices;
    int Number_of_security_tools;
    int cost_per_computer;
    int cost_per_network_device;
    int Annual_security_software_cost;

    int Computer_cost;
    int Network_cost;
    int Total_lab_investment;

    printf("\nEnter the Lab Name:");
    scanf("%s", Lab_name);

    printf("\nEnter the Number of computers:");
    scanf("%d", &Number_of_computers);

    printf("\nEnter the Number of Network devices:");
    scanf("%d", &Number_of_network_devices);

    printf("\nEnter the Number of Security tools:");
    scanf("%d", &Number_of_security_tools);

    printf("\nEnter the cost per Computer:");
    scanf("%d", &cost_per_computer);

    printf("\nEnter the cost per network device:");
    scanf("%d", &cost_per_network_device);

    printf("\nEnter the Annual security software cost:");
    scanf("%d", &Annual_security_software_cost);

    Computer_cost = Number_of_computers * cost_per_computer;
    Network_cost = Number_of_network_devices * cost_per_network_device;
    Total_lab_investment = Computer_cost + Network_cost + Annual_security_software_cost;

    printf("\n\n\n======================================\n");
    printf("        CYBERSECURITY LAB REPORT        ");
    printf("\n======================================\n\n");
    printf("Lab Name: %s\n", Lab_name);
    printf("Compters: %d\n", Number_of_computers);
    printf("Network Devices: %d\n", Number_of_network_devices);
    printf("Security Tools: %d\n\n", Number_of_security_tools);
    printf("Computer Cost: %d\n", Computer_cost);
    printf("Network Device Cost: %d\n", Network_cost);
    printf("Software cost: %d\n", Annual_security_software_cost);

    printf("\n-----------------------------------\n");
    printf("Total Lab Investment: %d", Total_lab_investment);
    printf("\n-----------------------------------\n\n");

    return 0;
}
