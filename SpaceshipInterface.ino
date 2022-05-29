// Spaceship Interface //

// Digital pin 2 has a push-button connected to it:

int pushButton = 2;

// Digital pins 3, 4 and 5 have LEDs connected to them:

int redLed = 3;
int greenLed = 4;
int blueLed = 5;

// Delcare a variable to stablish the push-button state:

int pushButtonState = 0;

// Set on the specified pin whether it should behave as an input or an output:

void setup() {
  
 Serial.begin(9600); // Initialize serial communication at 9600 bits per second
 pinMode(pushButton, INPUT); // Make the push-button's pin an input
 pinMode(redLed, OUTPUT); // Make the red LED's pin an output
 pinMode(greenLed, OUTPUT); // Make the green LED's pin an output
 pinMode(blueLed, OUTPUT); // Make the blue LED's pin an output
 
}

// The loop routine that runs on and on:

void loop() {

  // Check the voltage level of the digital input on pin 2 and store the value in the pushButtonState variable:

  pushButtonState = digitalRead(pushButton);

  // Set action instructions if push-button is not pressed
  
  if(pushButtonState == LOW) {

    digitalWrite(blueLed, HIGH); // Blue LED will be on
    digitalWrite(redLed, LOW); // The red LED will be off
    digitalWrite(greenLed, LOW); // The green LED will be off
    
  }

  // Set action instructions if push-button is pressed

  else {

    digitalWrite(blueLed, LOW); // Blue LED will be off
    digitalWrite(redLed, HIGH); // The red LED will be on
    digitalWrite(greenLed, HIGH); // The green LED will be on  
    
  }

  delay(250);
}
