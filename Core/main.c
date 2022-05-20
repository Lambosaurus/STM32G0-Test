
#include "Core.h"
#include "GPIO.h"
#include "UART.h"


int main(void)
{
	CORE_Init();
	UART_Init(UART_1, 115200, UART_Mode_Default);

	while(1)
	{
		UART_WriteStr(UART_1, "Test message\r\n");
		CORE_Delay(1000);
	}
}

