// Menu de seleccion tipo de ecg

//vectors b
byte ecg[] = {73, 73, 75, 75, 74, 73, 73, 73, 73, 72, 71, 69, 68, 67, 67, 67, 68, 68, 67, 65, 62, 61, 59, 57, 56, 55, 55, 54, 54, 54, 55, 55, 55, 55, 55, 55, 54, 53, 51, 50, 49, 49, 52, 61, 77, 101, 132, 169, 207, 238, 255, 254, 234, 198, 154, 109, 68, 37, 17, 5, 0, 1, 6, 13, 20, 28, 36, 45, 52, 57, 61, 64, 65, 66, 67, 68, 68, 69, 70, 71, 71, 71, 71, 71, 71, 71, 71, 72, 72, 72, 73, 73, 74, 75, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 86, 88, 91, 93, 96, 98, 100, 102, 104, 107, 109, 112, 115, 118, 121, 123, 125, 126, 127, 127, 127, 127, 127, 126, 125, 124, 121, 119, 116, 113, 109, 105, 102, 98, 95, 92, 89, 87, 84, 81, 79, 77, 76, 75, 74, 73, 72, 70, 69, 68, 67, 67, 67, 68, 68, 68, 69, 69, 69, 69, 69, 69, 69, 70, 71, 72, 73, 73, 74, 74, 75, 75, 75, 75, 75, 75, 74, 74, 73, 73, 73, 73, 72, 72, 72, 71, 71, 71, 71, 71, 71, 71, 70, 70, 70, 69, 69, 69, 69, 69, 70, 70, 70, 69, 68, 68, 67, 67, 67, 67, 66, 66, 66, 65, 65, 65, 65, 65, 65, 65, 65, 64, 64, 63, 63, 64, 64, 65, 65, 65, 65, 65, 65, 65, 64, 64, 64, 64, 64, 64, 64, 64, 65, 65, 65, 66, 67, 68, 69, 73, 73, 73};
// tamaño ecg 256
byte fbv[] = {137, 136, 135, 134, 133, 132, 132, 131, 130, 130, 130, 130, 131, 131, 132, 134, 135, 137, 139, 142, 145, 148, 151, 154, 157, 161, 165, 168, 172, 175, 178, 182, 184, 187, 190, 192, 193, 195, 196, 197, 197, 197, 196, 196, 195, 193, 192, 190, 188, 185, 183, 180, 178, 175, 173, 170, 167, 165, 162, 160, 158, 156, 154, 152, 151, 149, 148, 147, 146, 145, 144, 143, 142, 142, 141, 141, 141, 140, 140, 140, 140, 140, 140, 140, 140, 140, 141, 141, 142, 143, 144, 146, 148, 149, 151, 154, 156, 159, 162, 165, 169, 172, 176, 179, 183, 187, 191, 194, 198, 202, 205, 208, 211, 214, 217, 219, 221, 222, 224, 224, 225, 225, 225, 224, 223, 222, 220, 219, 216, 214, 211, 209, 206, 203, 199, 196, 192, 189, 185, 181, 178, 174, 170, 166, 162, 159, 155, 151, 147, 143, 139, 135, 131, 127, 123, 119, 115, 111, 107, 103, 99, 96, 92, 89, 86, 84, 81, 79, 77, 76, 75, 74, 74, 74, 74, 75, 76, 78, 80, 82, 85, 88, 91, 95, 98, 102, 106, 110, 113, 117, 121, 124, 128, 131, 133, 136, 138, 140, 142, 143, 144, 145, 145, 145, 145, 144, 144, 143, 142, 140, 139, 138, 137, 136, 134, 133, 132, 132, 131, 131, 130, 130, 130};
// tamaño fibrilacion 223
byte par[] = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
// tamaño paro 255

int t = 0; // posicion del vector
// botones
int b1 = 14;
int b2 = 15;
int b3 = 16;
int b4 = 17;
// estado
int s1 = 0;
int s2 = 0;
int s3 = 0;
int s4 = 0;

void setup() {
  // initialize serial communication:
  Serial.begin(9600);

  // initialize port D pin
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);

  // initialize pines of status ecg
  pinMode(8, OUTPUT); // bradicardia pin 2
  pinMode(9, OUTPUT); // taquicardia pin 3
  pinMode(10, OUTPUT); // fibrilacion pin 4
  pinMode(11, OUTPUT); // paro pin 5

  // inicio de los botones
  pinMode (b1, INPUT);
  pinMode (b2, INPUT);
  pinMode (b3, INPUT);
  pinMode (b4, INPUT);

  pinMode(12, INPUT);

}


void loop() {
  // read the sensor:
  s1 = digitalRead(b1); //bradicardia
  s2 = digitalRead(b2); //taquicardia
  s3 = digitalRead(b3); //fibrilacion
  s4 = digitalRead(b4); //paro
  int muerte = digitalRead(12);

  // Caso de ECG normal
  if ((s1 == 0 & s2 == 0 & s3 == 0 & s4 == 0)) {
    Serial.println("ECG");
    digitalWrite(8, LOW); 
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    // salida DAC de vector ecg
    for ( t = 1; t < 256; t++) { //increment "t"
      PORTD = ecg[t];
      delayMicroseconds(3704);
    }
  }

  // Caso de bradicardia
  if ((s1 == 0 & s2 == 1 & s3 == 0 & s4 == 0 & muerte == 0)) {
    Serial.println("Bradicardia");
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    // salida DAC de vector ecg
    for ( t = 0; t < 256; t++) { //increment "t"
      PORTD = ecg[t];
      delayMicroseconds(12000);//
    }
  }

  // Caso de taquicardia

  if ((s1 == 1 & s2 == 0 & s3 == 0 & s4 == 0 & muerte == 0)) {
    Serial.println("Taquicardia");
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    // salida DAC de vector ecg
    for ( t = 0; t < 255; t++) { //increment "t"
      PORTD = ecg[t];
      delayMicroseconds(1000);
    }
  }


  // Caso de fibrilacion

  if ((s1 == 0 & s2 == 0 & s3 == 1 & s4 == 0 & muerte == 0)) {
    Serial.println("Fibrilacion");
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
    // salida DAC de vector ecg
    for ( t = 0; t < 170; t++) { //increment "t"
      PORTD = fbv[t];
      delayMicroseconds(2000);
    }
  }

  // Caso de  paro

  if ((s1 == 0 & s2 == 0 & s3 == 0 & s4 == 1 & muerte == 0)) {
    Serial.println("PARO");
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH);
    // salida DAC de vector ecg
    for ( t = 0; t < 254; t++) { //increment "t"
      PORTD = par[t];
      delayMicroseconds(5000);
    }
  }
// ------ // 


// muerte fibrilacion
if ((muerte == 1 & s1 == 0 & s2 == 0 & s3 == 1 & s4 == 0)) {
    
    // salida DAC de vector ecg
    for ( t = 0; t < 254; t++) { //increment "t"
      PORTD = par[t];
      delayMicroseconds(5000);
    }
  }


// MUERTE TAQUICARDIA
if ((muerte == 1 & s1 == 0 & s2 == 1 & s3 == 0 & s4 == 0)) {
    
    // salida DAC de vector ecg
    for ( t = 0; t < 254; t++) { //increment "t"
      PORTD = par[t];
      delayMicroseconds(5000);
    }
  }


  // POR PARO
if ((muerte == 1 & s1 == 0 & s2 == 0 & s3 == 0 & s4 == 1)) {
    
    // salida DAC de vector ecg
    for ( t = 0; t < 254; t++) { //increment "t"
      PORTD = par[t];
      delayMicroseconds(5000);
    }
  }

}


