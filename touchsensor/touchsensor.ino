// Set pin numbers
const int touchpin = 4;  // Pin for touch sensor
const int ledpin = 2;    // Pin for LED (change to a different pin)

// Change with your threshold value
const int threshold = 20;

// Variable for storing the touch pin value
int touchValue;

void setup() {
  // Put your setup code here, to run once
  Serial.begin(115200);
  delay(1000);

  // Initialize the LED pin as an output
  pinMode(ledpin, OUTPUT);
}

void loop() {
  // Read the touch sensor value
  touchValue = touchRead(touchpin);
  Serial.print(touchValue);

  // Check if touchValue is below the threshold
  if (touchValue < threshold) {
    // Turn LED on
    digitalWrite(ledpin, HIGH);
    Serial.println(" - LED On");
  } else {
    // Turn LED off
    digitalWrite(ledpin, LOW);
    Serial.println(" - LED Off");
  }

  delay(1000); // Adjust delay as needed
}