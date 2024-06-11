//arduino stepper bluetooth  
// downlood arduino stepper bluetooth app in playstore 

#define dp1 2
#define sp1 3
#define dp2 4
#define sp2 5
#define dp3 6
#define sp3 7
#define dp4 8
#define sp4 9
#define dp5 10
#define sp5 11
#define dp6 12
#define sp6 13

unsigned int temp_value1;
unsigned int temp_value2;

void set_steppers(int values) {
  if (values >= 261 && values <= 262) {
    if (values == 261) {
      digitalWrite(dp1, LOW);      
    } else {
      digitalWrite(dp1, HIGH);
    }
    digitalWrite(sp1, HIGH);
    digitalWrite(sp1, LOW);
  }

  else if (values >= 263 && values <= 264) {
    if (values == 263) {
      digitalWrite(dp2, LOW);
    } else {
      digitalWrite(dp2, HIGH);
    }
    digitalWrite(sp2, HIGH);
    digitalWrite(sp2, LOW);
  }

  else if (values >= 265 && values <= 266) {
    if (values == 265) {
      digitalWrite(dp3, LOW);
    } else {
      digitalWrite(dp3, HIGH);
    }
    digitalWrite(sp3, HIGH);
    digitalWrite(sp3, LOW);
  }

  else if (values >= 267 && values <= 268) {
    if (values == 267) {
      digitalWrite(dp4, LOW);
    } else {
      digitalWrite(dp4, HIGH);
    }
    digitalWrite(sp4, HIGH);
    digitalWrite(sp4, LOW);
  }

  else if (values >= 269 && values <= 270) {
    if (values == 269) {
      digitalWrite(dp5, LOW);
    } else {
      digitalWrite(dp5, HIGH);
    }
    digitalWrite(sp5, HIGH);
    digitalWrite(sp5, LOW);
  }

  else if (values >= 271 && values <= 272) {
    if (values == 271) {
      digitalWrite(dp6, LOW);
    } else {
      digitalWrite(dp6, HIGH);
    }
    digitalWrite(sp6, HIGH);
    digitalWrite(sp6, LOW);
  }
}

void setup() {
  Serial.begin(9600);

  pinMode(dp1, OUTPUT);
  pinMode(sp1, OUTPUT);
  pinMode(dp2, OUTPUT);
  pinMode(sp2, OUTPUT);
  pinMode(dp3, OUTPUT);
  pinMode(sp3, OUTPUT);
  pinMode(dp4, OUTPUT);
  pinMode(sp4, OUTPUT);
  pinMode(dp5, OUTPUT);
  pinMode(sp5, OUTPUT);
  pinMode(dp6, OUTPUT);
  pinMode(sp6, OUTPUT);
  delay(5);
}

void loop() {
  if (Serial.available() > 1) {
    temp_value1 = Serial.read();
    temp_value2 = Serial.read();
    set_steppers((temp_value2 * 256)+temp_value1);
  }
}