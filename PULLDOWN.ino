/* The main theme is that it is a digital input with serial begin 
*/

void setup() // the setup routine runs once when you press reset: 
 
{ 
Serial. begin(9600); // Start serial communication 
pinMode(5, INPUT) ; // Configure pin 5 as an input 
} 
 
void loop() // the loop routine runs over and over again forever 
 
{ 
// Read the pushbutton value into a variable 
int sensorVal = digitalRead (5); 
 
// Print the button state to the serial monitor 
Serial. print("Button State = "); 
 
Serial.println(sensorVal); 
}

