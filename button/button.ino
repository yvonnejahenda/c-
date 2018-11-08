/* HC-SR04 Sensor 
2    https://www.dealextreme.com/p/hc-sr04-ultrasonic-sensor-distance-measuring-module-133696 
3    
4    This sketch reads a HC-SR04 ultrasonic rangefinder and returns the 
5    distance to the closest object in range. To do this, it sends a pulse 
6    to the sensor to initiate a reading, then listens for a pulse  
7    to return.  The length of the returning pulse is proportional to  
8    the distance of the object from the sensor. 
9       
10    The circuit: 
11   * VCC connection of the sensor attached to +5V 
12  * GND connection of the sensor attached to ground 
13  * TRIG connection of the sensor attached to digital pin 2 
14  * ECHO connection of the sensor attached to digital pin 4 
15  
16  
17    Original code for Ping))) example was created by David A. Mellis 
18    Adapted for HC-SR04 by Tautvidas Sipavicius 
19  
20    This example code is in the public domain. 
21  */ 
22 
 
23 
 
24 const int trigPin = 2; 
25 const int echoPin = 4; 
26 
 
27 void setup() { 
28   // initialize serial communication: 
29   Serial.begin(9600); 
30 } 
31 
 
32 void loop() 
33 { 
34   // establish variables for duration of the ping,  
35   // and the distance result in inches and centimeters: 
36   long duration, inches, cm; 
37 
 
38   // The sensor is triggered by a HIGH pulse of 10 or more microseconds. 
39   // Give a short LOW pulse beforehand to ensure a clean HIGH pulse: 
40   pinMode(trigPin, OUTPUT); 
41   digitalWrite(trigPin, LOW); 
42   delayMicroseconds(2); 
43   digitalWrite(trigPin, HIGH); 
44   delayMicroseconds(10); 
45   digitalWrite(trigPin, LOW); 
46 
 
47   // Read the signal from the sensor: a HIGH pulse whose 
48   // duration is the time (in microseconds) from the sending 
49   // of the ping to the reception of its echo off of an object. 
50   pinMode(echoPin, INPUT); 
51   duration = pulseIn(echoPin, HIGH); 
52 
 
53   // convert the time into a distance 
54   inches = microsecondsToInches(duration); 
55   cm = microsecondsToCentimeters(duration); 
56    
57   Serial.print(inches); 
58   Serial.print("in, "); 
59   Serial.print(cm); 
60   Serial.print("cm"); 
61   Serial.println(); 
62    
63   delay(100); 
64 } 
65 
 
66 long microsecondsToInches(long microseconds) 
67 { 
68   // According to Parallax's datasheet for the PING))), there are 
69   // 73.746 microseconds per inch (i.e. sound travels at 1130 feet per 
70   // second).  This gives the distance travelled by the ping, outbound 
71   // and return, so we divide by 2 to get the distance of the obstacle. 
72   // See: http://www.parallax.com/dl/docs/prod/acc/28015-PING-v1.3.pdf 
73   return microseconds / 74 / 2; 
74 } 
75 
 
76 long microsecondsToCentimeters(long microseconds) 
77 { 
78   // The speed of sound is 340 m/s or 29 microseconds per centimeter. 
79   // The ping travels out and back, so to find the distance of the 
80   // object we take half of the distance travelled. 
81   return microseconds / 29 / 2; 
82 } 
/* HC-SR04 Sensor 
2    https://www.dealextreme.com/p/hc-sr04-ultrasonic-sensor-distance-measuring-module-133696 
3    
4    This sketch reads a HC-SR04 ultrasonic rangefinder and returns the 
5    distance to the closest object in range. To do this, it sends a pulse 
6    to the sensor to initiate a reading, then listens for a pulse  
7    to return.  The length of the returning pulse is proportional to  
8    the distance of the object from the sensor. 
9       
10    The circuit: 
11   * VCC connection of the sensor attached to +5V 
12  * GND connection of the sensor attached to ground 
13  * TRIG connection of the sensor attached to digital pin 2 
14  * ECHO connection of the sensor attached to digital pin 4 
15  
16  
17    Original code for Ping))) example was created by David A. Mellis 
18    Adapted for HC-SR04 by Tautvidas Sipavicius 
19  
20    This example code is in the public domain. 
21  */ 
22 
 
23 
 
24 const int trigPin = 2; 
25 const int echoPin = 4; 
26 
 
27 void setup() { 
28   // initialize serial communication: 
29   Serial.begin(9600); 
30 } 
31 
 
32 void loop() 
33 { 
34   // establish variables for duration of the ping,  
35   // and the distance result in inches and centimeters: 
36   long duration, inches, cm; 
37 
 
38   // The sensor is triggered by a HIGH pulse of 10 or more microseconds. 
39   // Give a short LOW pulse beforehand to ensure a clean HIGH pulse: 
40   pinMode(trigPin, OUTPUT); 
41   digitalWrite(trigPin, LOW); 
42   delayMicroseconds(2); 
43   digitalWrite(trigPin, HIGH); 
44   delayMicroseconds(10); 
45   digitalWrite(trigPin, LOW); 
46 
 
47   // Read the signal from the sensor: a HIGH pulse whose 
48   // duration is the time (in microseconds) from the sending 
49   // of the ping to the reception of its echo off of an object. 
50   pinMode(echoPin, INPUT); 
51   duration = pulseIn(echoPin, HIGH); 
52 
 
53   // convert the time into a distance 
54   inches = microsecondsToInches(duration); 
55   cm = microsecondsToCentimeters(duration); 
56    
57   Serial.print(inches); 
58   Serial.print("in, "); 
59   Serial.print(cm); 
60   Serial.print("cm"); 
61   Serial.println(); 
62    
63   delay(100); 
64 } 
65 
 
66 long microsecondsToInches(long microseconds) 
67 { 
68   // According to Parallax's datasheet for the PING))), there are 
69   // 73.746 microseconds per inch (i.e. sound travels at 1130 feet per 
70   // second).  This gives the distance travelled by the ping, outbound 
71   // and return, so we divide by 2 to get the distance of the obstacle. 
72   // See: http://www.parallax.com/dl/docs/prod/acc/28015-PING-v1.3.pdf 
73   return microseconds / 74 / 2; 
74 } 
75 
 
76 long microsecondsToCentimeters(long microseconds) 
77 { 
78   // The speed of sound is 340 m/s or 29 microseconds per centimeter. 
79   // The ping travels out and back, so to find the distance of the 
80   // object we take half of the distance travelled. 
81   return microseconds / 29 / 2; 
82 } 
/* HC-SR04 Sensor 
2    https://www.dealextreme.com/p/hc-sr04-ultrasonic-sensor-distance-measuring-module-133696 
3    
4    This sketch reads a HC-SR04 ultrasonic rangefinder and returns the 
5    distance to the closest object in range. To do this, it sends a pulse 
6    to the sensor to initiate a reading, then listens for a pulse  
7    to return.  The length of the returning pulse is proportional to  
8    the distance of the object from the sensor. 
9       
10    The circuit: 
11   * VCC connection of the sensor attached to +5V 
12  * GND connection of the sensor attached to ground 
13  * TRIG connection of the sensor attached to digital pin 2 
14  * ECHO connection of the sensor attached to digital pin 4 
15  
16  
17    Original code for Ping))) example was created by David A. Mellis 
18    Adapted for HC-SR04 by Tautvidas Sipavicius 
19  
20    This example code is in the public domain. 
21  */ 
22 
 
23 
 
24 const int trigPin = 2; 
25 const int echoPin = 4; 
26 
 
27 void setup() { 
28   // initialize serial communication: 
29   Serial.begin(9600); 
30 } 
31 
 
32 void loop() 
33 { 
34   // establish variables for duration of the ping,  
35   // and the distance result in inches and centimeters: 
36   long duration, inches, cm; 
37 
 
38   // The sensor is triggered by a HIGH pulse of 10 or more microseconds. 
39   // Give a short LOW pulse beforehand to ensure a clean HIGH pulse: 
40   pinMode(trigPin, OUTPUT); 
41   digitalWrite(trigPin, LOW); 
42   delayMicroseconds(2); 
43   digitalWrite(trigPin, HIGH); 
44   delayMicroseconds(10); 
45   digitalWrite(trigPin, LOW); 
46 
 
47   // Read the signal from the sensor: a HIGH pulse whose 
48   // duration is the time (in microseconds) from the sending 
49   // of the ping to the reception of its echo off of an object. 
50   pinMode(echoPin, INPUT); 
51   duration = pulseIn(echoPin, HIGH); 
52 
 
53   // convert the time into a distance 
54   inches = microsecondsToInches(duration); 
55   cm = microsecondsToCentimeters(duration); 
56    
57   Serial.print(inches); 
58   Serial.print("in, "); 
59   Serial.print(cm); 
60   Serial.print("cm"); 
61   Serial.println(); 
62    
63   delay(100); 
64 } 
65 
 
66 long microsecondsToInches(long microseconds) 
67 { 
68   // According to Parallax's datasheet for the PING))), there are 
69   // 73.746 microseconds per inch (i.e. sound travels at 1130 feet per 
70   // second).  This gives the distance travelled by the ping, outbound 
71   // and return, so we divide by 2 to get the distance of the obstacle. 
72   // See: http://www.parallax.com/dl/docs/prod/acc/28015-PING-v1.3.pdf 
73   return microseconds / 74 / 2; 
74 } 
75 
 
76 long microsecondsToCentimeters(long microseconds) 
77 { 
78   // The speed of sound is 340 m/s or 29 microseconds per centimeter. 
79   // The ping travels out and back, so to find the distance of the 
80   // object we take half of the distance travelled. 
81   return microseconds / 29 / 2; 
82 } 
/*
  SparkFun Inventor's Kit
  Example sketch 05

  PUSH BUTTONS

  Use pushbuttons for digital input

  Previously we've used the analog pins for input, now we'll use
  the digital pins for input as well. Because digital pins only
  know about HIGH and LOW signals, they're perfect for interfacing
  to pushbuttons and switches that also only have "on" and "off"
  states.

  We'll connect one side of the pushbutton to GND, and the other
  side to a digital pin. When we press down on the pushbutton,
  the pin will be connected to GND, and therefore will be read
  as "LOW" by the Arduino.

  But wait - what happens when you're not pushing the button?
  In this state, the pin is disconnected from everything, which
  we call "floating". What will the pin read as then, HIGH or LOW?
  It's hard to say, because there's no solid connection to either
  5 Volts or GND. The pin could read as either one.

  To deal with this issue, we'll connect a small (10K, or 10,000 Ohm)
  resistance between the pin and 5 Volts. This "pullup" resistor
  will ensure that when you're NOT pushing the button, the pin will
  still have a weak connection to 5 Volts, and therefore read as
  HIGH.

  (Advanced: when you get used to pullup resistors and know when
  they're required, you can activate internal pullup resistors
  on the ATmega processor in the Arduino. See
  http://arduino.cc/en/Tutorial/DigitalPins for information.)

  Hardware connections:

  Pushbuttons:

    Pushbuttons have two contacts that are connected if you're
    pushing the button, and disconnected if you're not.

    The pushbuttons we're using have four pins, but two pairs
    of these are connected together. The easiest way to hook up
    the pushbutton is to connect two wires to any opposite corners.

    Connect any pin on pushbutton 1 to ground (GND).
    Connect the opposite diagonal pin of the pushbutton to
    digital pin 2.

    Connect any pin on pushbutton 2 to ground (GND).
    Connect the opposite diagonal pin of the pushbutton to
    digital pin 3.

    Also connect 10K resistors (brown/black/red) between
    digital pins 2 and 3 and 5 Volts. These are called "pullup"
    resistors. They ensure that the input pin will be either
    5V (unpushed) or GND (pushed), and not somewhere in between.
    (Remember that unlike analog inputs, digital inputs are only
    HIGH or LOW.)

  LED:

    Most Arduinos, including the Uno, already have an LED
    and resistor connected to pin 13, so you don't need any
    additional circuitry.

    But if you'd like to connect a second LED to pin 13,

    Connect the positive side of your LED to Arduino digital pin 13
    Connect the negative side of your LED to a 330 Ohm resistor
    Connect the other side of the resistor to ground

  This sketch was written by SparkFun Electronics,
  with lots of help from the Arduino community.
  This code is completely free for any use.
  Visit http://learn.sparkfun.com/products/2 for SIK information.
  Visit http://www.arduino.cc to learn about the Arduino.

  Version 2.0 6/2012 MDG
*/


// First we'll set up constants for the pin numbers.
// This will make it easier to follow the code below.

const int button1Pin = 2;  // pushbutton 1 pin
const int button2Pin = 3;  // pushbutton 2 pin
const int ledPin =  13;    // LED pin


void setup()
{
  // Set up the pushbutton pins to be an input:
  pinMode(button1Pin, INPUT);
  pinMode(button2Pin, INPUT);

  // Set up the LED pin to be an output:
  pinMode(ledPin, OUTPUT);
}


void loop()
{
  int button1State, button2State;  // variables to hold the pushbutton states

  // Since a pushbutton has only two states (pushed or not pushed),
  // we've run them into digital inputs. To read an input, we'll
  // use the digitalRead() function. This function takes one
  // parameter, the pin number, and returns either HIGH (5V)
  // or LOW (GND).

  // Here we'll read the current pushbutton states into
  // two variables:

  button1State = digitalRead(button1Pin);
  button2State = digitalRead(button2Pin);

  // Remember that if the button is being pressed, it will be
  // connected to GND. If the button is not being pressed,
  // the pullup resistor will connect it to 5 Volts.

  // So the state will be LOW when it is being pressed,
  // and HIGH when it is not being pressed.

  // Now we'll use those states to control the LED.
  // Here's what we want to do:

  // "If either button is being pressed, light up the LED"
  // "But, if BOTH buttons are being pressed, DON'T light up the LED"

  // Let's translate that into computer code. The Arduino gives you
  // special logic functions to deal with true/false logic:

  // A == B means "EQUIVALENT". This is true if both sides are the same.
  // A && B means "AND". This is true if both sides are true.
  // A || B means "OR". This is true if either side is true.
  // !A means "NOT". This makes anything after it the opposite (true or false).

  // We can use these operators to translate the above sentences
  // into logic statements (Remember that LOW means the button is
  // being pressed)

  // "If either button is being pressed, light up the LED"
  // becomes:
  // if ((button1State == LOW) || (button2State == LOW)) // light the LED

  // "If BOTH buttons are being pressed, DON'T light up the LED"
  // becomes:
  // if ((button1State == LOW) && (button2State == LOW)) // don't light the LED

  // Now let's use the above functions to combine them into one statement:
 
  if (((button1State == LOW) || (button2State == LOW))  // if we're pushing button 1 OR button 2
      && !                                               // AND we're NOT
      ((button1State == LOW) && (button2State == LOW))) // pushing button 1 AND button 2
    // then...
  {
    digitalWrite(ledPin, HIGH);  // turn the LED on
  }
  else
  {
    digitalWrite(ledPin, LOW);  // turn the LED off
  }

  // As you can see, logic operators can be combined to make
  // complex decisions!

  // Don't forget that we use = when we're assigning a value,
  // and use == when we're testing a value for equivalence.
}

