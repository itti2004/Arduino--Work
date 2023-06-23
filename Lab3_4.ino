#include <Keypad.h> //เรียกใช้งานไลบรารี่ Keypad 
const byte ROWS = 4; //ก าหนดแถว Rows 4 แถว
const byte COLS = 3; //ก าหนดแถว Column 3 แถว
char hexakey[ROWS][COLS]={{'1','2','3'},
 {'4','5','6',},
 {'7','8','9',},
 {'*','0','#',}};


byte rowPins[ROWS] = {0, 2, 14, 12};

byte colPins[COLS] = {16, 5, 4};

Keypad customKeypad = Keypad(makeKeymap(hexakey), rowPins,
colPins, ROWS, COLS);
void setup() {
Serial.begin(9600);
}
void loop() {
char customKey = customKeypad.getKey();

if(customKey) {
Serial.println(customKey);

}
}
