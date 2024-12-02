#include"lcd.h"
#include"main.h"

void lcd_light(){
    HAL_GPIO_WritePin(LCD_GPIO_Port,LCD_Pin,GPIO_PIN_SET);
    HAL_Delay(500);
    HAL_GPIO_WritePin(LCD_GPIO_Port,LCD_Pin,GPIO_PIN_RESET);
    HAL_Delay(500);
}
