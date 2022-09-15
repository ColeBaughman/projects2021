/*Arduino Logic Gates:
 OR:          AND:         XOR:
|x|y|f|     |x|y|f|      |x|y|f|
|0|0|0|     |0|0|0|      |0|0|0|
|1|0|1|     |1|0|0|      |1|0|1|
|0|1|1|     |0|1|0|      |0|1|1|
|1|1|1|     |1|1|1|      |1|1|0|
/ ref: https://www.instructables.com/The-OR-Gate-With-Arduino/ /
*/

int buttonPin1 = 2;
int buttonPin2 = 3;
int LEDred = 8;
int buttonStat1 = 0;
int buttonStat2 = 0;

void setup() {
pinMode(LEDred, OUTPUT);
pinMode(buttonPin1, INPUT); // change high and low values
pinMode(buttonPin2, INPUT);
}

void loop(){
buttonStat1 = digitalRead(buttonPin1);
buttonStat2 = digitalRead(buttonPin2);


// check if the either the first button is HIGH, OR the second button is HIGH, then turn on the LED
// else turn the LED off
if (buttonStat1 == HIGH || buttonStat2 == HIGH )
{ digitalWrite(LEDred, HIGH);
} else { digitalWrite(LEDred, LOW); }
}
