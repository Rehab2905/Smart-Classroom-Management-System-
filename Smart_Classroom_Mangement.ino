int button = 2;
int ldr = A0;
int led = 3;

// 7-segment pins
int a = 4;
int b = 5;
int c = 6;
int d = 7;
int e = 8;
int f = 9;
int g = 10;

int count = 1;


void setup() {
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);

  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);

  displayNumber(count);
}

void loop() {

  if (digitalRead(button) == HIGH ) {
    delay(200);

    count++;

    if (count > 9) {
      count = 1;
    }

    displayNumber(count);
  }

  
  int lightValue = analogRead(ldr);

  if (count != 9) {
    if (lightValue < 500) {
      digitalWrite(led, HIGH);
    } else {
      digitalWrite(led, LOW);
    }
  }

  
  if (count == 9) {
    digitalWrite(led, HIGH);
    delay(200);
    digitalWrite(led, LOW);
    delay(200);
  }
}


void displayNumber(int num) {

  
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);

  if (num == 1) {
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
  }

  else if (num == 2) {
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(g, HIGH);
  }

  else if (num == 3) {
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(g, HIGH);
  }

  else if (num == 4) {
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
  }

  else if (num == 5) {
    digitalWrite(a, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
  }

  else if (num == 6) {
    digitalWrite(a, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
  }

  else if (num == 7) {
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
  }

  else if (num == 8) {
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
  }

  else if (num == 9) {
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
  }
}



/*int button = 2;
int ldr = A0;
int led = 3;

// 7-segment pins
int a = 4;
int b = 5;
int c = 6;
int d = 7;
int e = 8;
int f = 9;
int g = 10;

int count = 0;
int lastbutton = 0;
int max = 9;

void setup() {
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);

  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);

  displayNumber(0);
}

void loop() {

  if (digitalRead(button) == HIGH && digitalRead(lastbutton) == LOW) {
    delay(200); // debounce
    count++;

    if (count > max) {
      count = 0;
    }

    displayNumber(count);
  }

  lastbutton = button;

  // LDR 
  int lightValue = analogRead(ldr);

  // if dark - turn LED ON
  if (lightValue < 500) {
    digitalWrite(led, HIGH);
  } 
  else {
    digitalWrite(led, LOW);
  }

  // MAX STUDENTS WARNING 
  if (count== max) {
    digitalWrite(led, HIGH);
    delay(200);
    digitalWrite(led, LOW);
    delay(200);
  }
}

// -------- 7-SEGMENT DISPLAY --------
void displayNumber(int num) {

  // turn OFF all segments first
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);

  switch (num) {

    case 0:
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      break;

    case 1:
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      break;

    case 2:
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(g, HIGH);
      break;

    case 3:
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(g, HIGH);
      break;

    case 4:
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      break;

    case 5:
      digitalWrite(a, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      break;

    case 6:
      digitalWrite(a, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      break;

    case 7:
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      break;

    case 8:
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      break;

    case 9:
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      break;
  }
}*/

/*int button = 2;
int led = 3;
int ldr = A0;
//7-SEGMENT :
int a = 4;
int b = 5;
int c = 6;
int d = 7;
int e = 8;
int f = 9;
int g = 10;

int count = 0;
int lastButton=0;
int max = 9;


void setup() {
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);

  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}

void loop() {
  if (digitalRead(button) == HIGH & digitalRead(button) == LOW) {
    if (count < max)
    delay(200);
      ++count;
    

    if (count > 9) {
      displayFull();
    } else {
      displayNumber(count);
    }
  }

  if (count == max) {
    digitalWrite(led, HIGH);
    delay(300);
    digitalWrite(led, LOW);
    delay(500);
  } else {
    int lightValue = analogRead(ldr);

    if (lightValue < 500) {
      digitalWrite(led, HIGH);
    } else {
      digitalWrite(led, LOW);
    }
  }
}

void displayNumber(int num) {

  if (num == 0) {
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
  }

  else if (num == 1) {
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
  }

  else if (num == 2) {
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
  }

  else if (num == 3) {
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
  }

  else if (num == 4) {
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
  }

  else if (num == 5) {
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
  }

  else if (num == 6) {
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
  }

  else if (num == 7) {
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
  }

  else if (num == 8) {
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
  }

  else if (num == 9) {
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
  }
}
void displayFull() {
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}*/
/*int buttonPin = 2;
int ldrPin = A0;
int ledPin = 3;


int a = 4;
int b = 5;
int c = 6;
int d = 7;
int e = 8;
int f = 9;
int g = 10;


int countStudents = 0;
int lastButtonState = 0;
int maxStudents = 9;   


void setup() {
  pinMode(buttonPin, INPUT);

  pinMode(ledPin, OUTPUT);

  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);

  displayNumber(0);
}


void loop() {

  int buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH && lastButtonState == LOW) {
    delay(200); 

    countStudents++;

    if (countStudents > maxStudents) {
      countStudents = 0; 
    }

    displayNumber(countStudents);
  }

  lastButtonState = buttonState;

  int lightValue = analogRead(ldrPin);

  if (lightValue < 500) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);  
  }

  
  if (countStudents == maxStudents) {
    digitalWrite(ledPin, HIGH);
    delay(200);
    digitalWrite(ledPin, LOW);
    delay(200);
  }
}

void displayNumber(int num) {

  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);

  switch (num) {

    case 0:
      digitalWrite(a, HIGH); digitalWrite(b, HIGH);
      digitalWrite(c, HIGH); digitalWrite(d, HIGH);
      digitalWrite(e, HIGH); digitalWrite(f, HIGH);
      break;

    case 1:
      digitalWrite(b, HIGH); digitalWrite(c, HIGH);
      break;

    case 2:
      digitalWrite(a, HIGH); digitalWrite(b, HIGH);
      digitalWrite(d, HIGH); digitalWrite(e, HIGH);
      digitalWrite(g, HIGH);
      break;

    case 3:
      digitalWrite(a, HIGH); digitalWrite(b, HIGH);
      digitalWrite(c, HIGH); digitalWrite(d, HIGH);
      digitalWrite(g, HIGH);
      break;

    case 4:
      digitalWrite(b, HIGH); digitalWrite(c, HIGH);
      digitalWrite(f, HIGH); digitalWrite(g, HIGH);
      break;

    case 5:
      digitalWrite(a, HIGH); digitalWrite(c, HIGH);
      digitalWrite(d, HIGH); digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      break;

    case 6:
      digitalWrite(a, HIGH); digitalWrite(c, HIGH);
      digitalWrite(d, HIGH); digitalWrite(e, HIGH);
      digitalWrite(f, HIGH); digitalWrite(g, HIGH);
      break;

    case 7:
      digitalWrite(a, HIGH); digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      break;

    case 8:
      digitalWrite(a, HIGH); digitalWrite(b, HIGH);
      digitalWrite(c, HIGH); digitalWrite(d, HIGH);
      digitalWrite(e, HIGH); digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      break;

    case 9:
      digitalWrite(a, HIGH); digitalWrite(b, HIGH);
      digitalWrite(c, HIGH); digitalWrite(d, HIGH);
      digitalWrite(f, HIGH); digitalWrite(g, HIGH);
      break;
  }
}*/