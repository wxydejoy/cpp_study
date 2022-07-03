#include <iostream>

uint8_t parity_even(uint16_t v)   //偶校验  
{
    if(v == 0) return 0;
    v ^= v >> 8;   
    v ^= v >> 4;
    v ^= v >> 2;
    v ^= v >> 1;
    return v & 1;
}

int main(int argc, char *argv[])
{
    uint16_t aa[10]={0x00,0x01,0x03,0x16,0x17,0x3FFD,0x3FFE,0x3FFF};
	for(int i =0;i<8;i++){
        uint8_t x = parity_even(aa[i]);
	    printf("%d",x);
    }
    
}
