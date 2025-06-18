#define shortCircuitPin A0  // Pin to detect short circuit (Analog Input) 
#define buzzerPin 8        
 // Buzzer for alarm 
#define safeThreshold 500   // Adjust based on your sensor readings 
void setup() { 
pinMode(shortCircuitPin, INPUT); 
pinMode(buzzerPin, OUTPUT); 
Serial.begin(9600);  // For debugging 
} 
void loop() { 
int sensorValue = analogRead(shortCircuitPin); 
if (sensorValue < safeThreshold) { // Short circuit detected 
digitalWrite(buzzerPin, HIGH); // Alarm ON 
Serial.println("Emergency! Short Circuit Detected."); 
} else { // Safe condition 
digitalWrite(buzzerPin, LOW); // Alarm OFF 
Serial.println("System Safe."); 
} 
delay(1000); // Delay for stability 
}
