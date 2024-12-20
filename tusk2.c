#include <stdio.h>
#include <string.h>


struct microcontroller {
    char name[20];          
    unsigned int flashSize; 
    unsigned int ramSize;   
    float clockSpeed;      
};

int main() {
    
    struct microcontroller stm32f407vg = {
        "STM32F407VG",
        1024,               
        192,                
        168.0              
    };

    
    printf("Initial microcontroller data:\n");
    printf("Name: %s\n", stm32f407vg.name);
    printf("Flash Size: %u KB\n", stm32f407vg.flashSize);
    printf("RAM Size: %u KB\n", stm32f407vg.ramSize);
    printf("Clock Speed: %.1f MHz\n\n", stm32f407vg.clockSpeed);

    
    strcpy(stm32f407vg.name, "STM32F407VG-MOD");
    stm32f407vg.flashSize = 2048;   
    stm32f407vg.ramSize = 256;      
    stm32f407vg.clockSpeed = 200.0; 

   
    printf("Modified microcontroller data:\n");
    printf("Name: %s\n", stm32f407vg.name);
    printf("Flash Size: %u KB\n", stm32f407vg.flashSize);
    printf("RAM Size: %u KB\n", stm32f407vg.ramSize);
    printf("Clock Speed: %.1f MHz\n", stm32f407vg.clockSpeed);

    return 0;
}
