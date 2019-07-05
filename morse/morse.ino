int pin = 13; 
void setup() 
{ 
  pinMode(pin, OUTPUT);
  Serial.begin(9600);
  }
  int income=0;
void loop() 
  { income=Serial.read();
    switch (income)
   { case 'a':
       dot();
       dash();
       break;
    case 'b':
       dash();
       dot();
       dot();
       break;
    case 'c':
       dash();
       dot();
       dash();
       dot();
       break;
    case 'd':
       dash();
       dot();
       dot();
       break;
    case 'e':
       dot();
       break;
    case 'f':
       dot();
       dot();
       dash();
       dot();
       break;
     case 'g':
       dash();
       dash();
       dot();
       break;
     case 'h':
       dot();
       dot();
       dot();
       dot();
       break;
     case 'i':
       dot();
       dot();
       break;
     case 'j':
       dot();
       dash();
       dash();
       dash();
       break;
     case 'k':
       dash();
       dot();
       dash();
       break;
     case 'l':
       dot();
       dash();
       dot();
       dot();
       break;
     case 'm':
       dash();
       dash();
       break;
     case 'n':
       dash();
       dot();
       break;
     case 'o':
       dash();
       dash();
       dash();
       break;
     case 'p':
       dot();
       dash();
       dash();
       dot();
       break;
     case 'q':
       dash();
       dash();
       dot();
       dash();
       break;
      case 'r':
        dot();
        dash();
        dot();
        break;
      case 's':
        dot();
        dot();
        dot();
        break;
      case 't':
        dash();
        break;
      case 'u':
        dot();
        dot();
        dash();
        break;
      case 'v':
        dot();
        dot();
        dot();
        dash();
        break;
      case 'w':
        dot();
        dash();
        dash();
        break;
      case 'x':
        dash();
        dot();
        dot();
        dash();
        break;
      case 'y':
        dash();
        dot();
        dash();
        dash();
        break;
      case 'z':
        dash();
        dash();
        dot();
        dot();
        break;
   }
        delay(3000); 
    }
void dot() 
    { 
    digitalWrite(pin, HIGH);
    delay(250);
    digitalWrite(pin, LOW);
    delay(250); }
void dash() 
   {
    digitalWrite(pin, HIGH);
    delay(1000); 
    digitalWrite(pin, LOW); 
    delay(250); 
    }
