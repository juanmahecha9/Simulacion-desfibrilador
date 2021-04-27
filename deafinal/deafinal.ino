//  Variables a usar
int lectura = A0; // lectura señal de ecg

// Lectura de pines que declaran el tipo de condicion del pcte
int paro = 5;
int fibrilacion = 4;
int taquicardia = 3;
int bradicardia = 2;

// Estados de la tecura
int s1 = 0;
int s2 = 0;
int s3 = 0;
int s4 = 0;

// variables de switch, Relay
// recordar la carga y descarga se realiza por el tao del condensador
// cd is charge and discharge
int cd = 7;

// Variables led
int ledC = 10;
int ledD = 11;


//adjust of variables
void setup() {
  Serial.begin(9600);
  // initialize pines of read pacient status
  pinMode(paro, INPUT);
  pinMode(fibrilacion, INPUT);
  pinMode(taquicardia, INPUT);
  pinMode(bradicardia, INPUT);

  // initialize pines of write switch status
  pinMode(cd, OUTPUT);

  // Indicator charge and discharge
  pinMode(ledC, OUTPUT);
  pinMode(ledD, OUTPUT);

  //
  pinMode(12, OUTPUT); // pin 12 es defino para controlar el simulador en caso de que las descargas no sean acertadas, hacer que el paciente muera
}


void loop() {
  // Iniciar puertos de salida en LOW
  digitalWrite(cd, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, LOW);

  //Lectura estados paciente
  s1 = digitalRead(bradicardia);
  s2 = digitalRead(taquicardia);
  s3 = digitalRead(fibrilacion);
  s4 = digitalRead(paro);



  // ciclos para la bradicardia
  if (s1 == 1 & s2 == 0 & s3 == 0 & s4 == 0) {
    Serial.println(" paciente en bradicardia");
    Serial.println(" EL paciente no requiere de desfibrilacion");
    delay (5000);

  }

  // ------- //

  // ciclo para la taquicardia
  if (s1 == 0 & s2 == 1 & s3 == 0 & s4 == 0) {
    Serial.println(" paciente en taquicardia");
    delay (3000);
    // tener en cuenta el tao de carga del condensador que sera de 1 segundo y el tao de descarga el mismo
    // tener en cuenta los taos de carga
    //Primera carga equivale a un tao

    //cierra switch para realizar la carga
    digitalWrite(cd, HIGH);
    digitalWrite(ledD, HIGH);
    digitalWrite(ledC, LOW);
    Serial.println("PRIMERA CARGA, 1.72mJ");
    Serial.println(" ");
    delay(1000);

    //Abre el switch para realizar descarga
    digitalWrite(cd, LOW);
    digitalWrite(ledC, LOW);
    digitalWrite(ledD, HIGH);
    Serial.println("DESCARGA");
    delay(1000);

    //Tiempo para realizar RCP
    digitalWrite(cd, LOW);
    digitalWrite(ledC, LOW);
    digitalWrite(ledD, LOW);
    Serial.println("Aplicar RCP");
    delay(10000);

    //SEGUNDA DESCARGA
    //Lectura estados paciente
    s1 = digitalRead(bradicardia);
    s2 = digitalRead(taquicardia);
    s3 = digitalRead(fibrilacion);
    s4 = digitalRead(paro);
    if (s1 == 0 & s2 == 1 & s3 == 0 & s4 == 0) {
      //cierra switch para realizar la carga
      digitalWrite(cd, HIGH);
      digitalWrite(ledC, HIGH);
      digitalWrite(ledD, LOW);
      Serial.println("SEGUNDA CARGA, 3.655mJ");
      Serial.println(" ");
      delay(3000);

      //Abre el switch para realizar descarga
      digitalWrite(cd, LOW);
      digitalWrite(ledC, LOW);
      digitalWrite(ledD, HIGH);
      Serial.println("DESCARGA");
      delay(1000);

      //Tiempo para realizar RCP
      digitalWrite(cd, LOW);
      digitalWrite(ledC, LOW);
      digitalWrite(ledD, LOW);
      Serial.println("Aplicar RCP");
      delay(10000);
    }

    //TERCERA DESCARGA
    //Lectura estados paciente
    s1 = digitalRead(bradicardia);
    s2 = digitalRead(taquicardia);
    s3 = digitalRead(fibrilacion);
    s4 = digitalRead(paro);
    if (s1 == 0 & s2 == 1 & s3 == 0 & s4 == 0) {
      //cierra switch para realizar la carga
      digitalWrite(cd, HIGH);
      digitalWrite(ledC, HIGH);
      digitalWrite(ledD, LOW);
      Serial.println("TERCERA CARGA, 4.05mJ");
      Serial.println(" ");
      delay(5000);

      //Abre el switch para realizar descarga
      digitalWrite(cd, LOW);
      digitalWrite(ledC, LOW);
      digitalWrite(ledD, HIGH);
      Serial.println("DESCARGA");
      delay(1000);

      //Tiempo para realizar RCP
      digitalWrite(cd, LOW);
      digitalWrite(ledC, LOW);
      digitalWrite(ledD, LOW);
      Serial.println("Aplicar RCP");
      delay(10000);
    }


    //MENSAJE
    //Lectura estados paciente
    s1 = digitalRead(bradicardia);
    s2 = digitalRead(taquicardia);
    s3 = digitalRead(fibrilacion);
    s4 = digitalRead(paro);
    if (s1 == 0 & s2 == 1 & s3 == 0 & s4 == 0) {

      mensaje();
    }

  }

  // ----- //

  // ciclo para la fibrilacion
  if (s1 == 0 & s2 == 0 & s3 == 1 & s4 == 0) {
    Serial.println(" paciente en fibrilacion");
    delay (3000);
    // tener e1n cuenta el tao de carga del condensador que sera de 1 segundo y el tao de descarga el mismo
    // tener en cuenta los taos de carga

    //Primera carga equivale a un tao

    //cierra switch para realizar la carga
    digitalWrite(cd, HIGH);
    digitalWrite(ledC, HIGH);
    digitalWrite(ledD, LOW);
    Serial.println("PRIMERA CARGA, 1.72mJ");
    Serial.println(" ");
    delay(1000);

    //Abre el switch para realizar descarga
    digitalWrite(cd, LOW);
    digitalWrite(ledC, LOW);
    digitalWrite(ledD, HIGH);
    Serial.println("DESCARGA");
    delay(1000);

    //Tiempo para realizar RCP
    digitalWrite(cd, LOW);
    digitalWrite(ledC, LOW);
    digitalWrite(ledD, LOW);
    Serial.println("Aplicar RCP");
    delay(10000);

    // SEGUNDA DESCARGA
    //Lectura estados paciente
    s1 = digitalRead(bradicardia);
    s2 = digitalRead(taquicardia);
    s3 = digitalRead(fibrilacion);
    s4 = digitalRead(paro);
    if (s1 == 0 & s2 == 0 & s3 == 1 & s4 == 0) {
      //cierra switch para realizar la carga
      digitalWrite(cd, HIGH);
      digitalWrite(ledC, HIGH);
      digitalWrite(ledD, LOW);
      Serial.println("SEGUNDA CARGA, 3.655mJ");
      Serial.println(" ");
      delay(3000);

      //Abre el switch para realizar descarga
      digitalWrite(cd, LOW);
      digitalWrite(ledC, LOW);
      digitalWrite(ledD, HIGH);
      Serial.println("DESCARGA");
      delay(1000);

      //Tiempo para realizar RCP
      digitalWrite(cd, LOW);
      digitalWrite(ledC, LOW);
      digitalWrite(ledD, LOW);
      Serial.println("Aplicar RCP");
      delay(10000);
    }

    // TERCERA DESCARGA
    //Lectura estados paciente
    s1 = digitalRead(bradicardia);
    s2 = digitalRead(taquicardia);
    s3 = digitalRead(fibrilacion);
    s4 = digitalRead(paro);
    if (s1 == 0 & s2 == 0 & s3 == 1 & s4 == 0) {
      //cierra switch para realizar la carga
      digitalWrite(cd, HIGH);
      digitalWrite(ledC, HIGH);
      digitalWrite(ledD, LOW);
      Serial.println("TERCERA CARGA, 4.05mJ");
      Serial.println(" ");
      delay(5000);

      //Abre el switch para realizar descarga
      digitalWrite(cd, LOW);
      digitalWrite(ledC, LOW);
      digitalWrite(ledD, HIGH);
      Serial.println("DESCARGA");
      delay(1000);

      //Tiempo para realizar RCP
      digitalWrite(cd, LOW);
      digitalWrite(ledC, LOW);
      digitalWrite(ledD, LOW);
      Serial.println("Aplicar RCP");
      delay(10000);
    }

    // MENSAJE
    //Lectura estados paciente
    s1 = digitalRead(bradicardia);
    s2 = digitalRead(taquicardia);
    s3 = digitalRead(fibrilacion);
    s4 = digitalRead(paro);
    if (s1 == 0 & s2 == 0 & s3 == 1 & s4 == 0) {


      mensaje();

    }
  }
  // ----- //

  // ciclo para paro
  if (s1 == 0 & s2 == 0 & s3 == 0 & s4 == 1) {
    Serial.println(" paciente en paro");

    delay (1000);
    // tener en cuenta el tao de carga del condensador que sera de 1 segundo y el tao de descarga el mismo
    // tener en cuenta los taos de carga

    //Primera carga equivale a un tao

    //cierra switch para realizar la carga
    digitalWrite(cd, HIGH);
    digitalWrite(ledC, HIGH);
    digitalWrite(ledD, LOW);
    Serial.println("PRIMERA CARGA, 1.72mJ");
    Serial.println(" ");
    delay(1000);

    //Abre el switch para realizar descarga
    digitalWrite(cd, LOW);
    digitalWrite(ledC, LOW);
    digitalWrite(ledD, HIGH);
    Serial.println("DESCARGA");
    delay(1000);

    //Tiempo para realizar RCP
    digitalWrite(cd, LOW);
    digitalWrite(ledC, LOW);
    digitalWrite(ledD, LOW);
    Serial.println("Aplicar RCP");
    delay(10000);

    // SEGUNDA DESCARGA
    //Lectura estados paciente
    s1 = digitalRead(bradicardia);
    s2 = digitalRead(taquicardia);
    s3 = digitalRead(fibrilacion);
    s4 = digitalRead(paro);
    if (s1 == 0 & s2 == 0 & s3 == 0 & s4 == 1) {
      //cierra switch para realizar la carga
      digitalWrite(cd, HIGH);
      digitalWrite(ledC, HIGH);
      digitalWrite(ledD, LOW);
      Serial.println("SEGUNDA CARGA, 3.655mJ");
      Serial.println(" ");
      delay(3000);

      //Abre el switch para realizar descarga
      digitalWrite(cd, LOW);
      digitalWrite(ledC, LOW);
      digitalWrite(ledD, HIGH);
      Serial.println("DESCARGA");
      delay(1000);

      //Tiempo para realizar RCP
      digitalWrite(cd, LOW);
      digitalWrite(ledC, LOW);
      digitalWrite(ledD, LOW);
      Serial.println("Aplicar RCP");
      delay(10000);
      //Lectura estados paciente
      s1 = digitalRead(bradicardia);
      s2 = digitalRead(taquicardia);
      s3 = digitalRead(fibrilacion);
      s4 = digitalRead(paro);
    }

    //TERCERA DESCARGA
    if (s1 == 0 & s2 == 0 & s3 == 0 & s4 == 1) {
      //cierra switch para realizar la carga
      digitalWrite(cd, HIGH);
      digitalWrite(ledC, HIGH);
      digitalWrite(ledD, LOW);
      Serial.println("TERCERA CARGA, 4.05mJ");
      Serial.println(" ");
      delay(5000);

      //Abre el switch para realizar descarga
      digitalWrite(cd, LOW);
      digitalWrite(ledC, LOW);
      digitalWrite(ledD, HIGH);
      Serial.println("DESCARGA");
      delay(1000);

      //Tiempo para realizar RCP
      digitalWrite(cd, LOW);
      digitalWrite(ledC, LOW);
      digitalWrite(ledD, LOW);
      Serial.println("Aplicar RCP");
      delay(10000);
    }

    // MENSAJE
    //Lectura estados paciente
    s1 = digitalRead(bradicardia);
    s2 = digitalRead(taquicardia);
    s3 = digitalRead(fibrilacion);
    s4 = digitalRead(paro);
    if (s1 == 0 & s2 == 0 & s3 == 0 & s4 == 1) {

      mensaje();
    }

  }

  if (s1 == 0 & s2 == 0 & s3 == 0 & s4 == 0) {
    Serial.println("Paciente normal");
    delay (2000);

  }
}


void mensaje () {
A:
  digitalWrite(12, HIGH);
  Serial.println("No se pueden aplicar mas descargas");
  Serial.println("AY, se MURIO, Comprele flores a la esposa");
  delay(5000);
  goto A;
}

