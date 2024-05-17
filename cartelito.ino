#define luz1 2
#define luz2 3
#define luz3 4
#define luz4 5
#define luz5 6
#define luz6 7

void resetLuces(bool estado);
void animacion1();
void animacion2();
void animacion3();
void animacion4();

const bool invertido = true;

const bool encendido = !invertido;
const bool apagado = invertido;

void setup() {
  pinMode(luz1, OUTPUT);
  pinMode(luz2, OUTPUT);
  pinMode(luz3, OUTPUT);
  pinMode(luz4, OUTPUT);
  pinMode(luz5, OUTPUT);
  pinMode(luz6, OUTPUT);
}

void loop() {
  animacion1();
  resetLuces(apagado);
  delay(500);
  animacion1();
  resetLuces(apagado);
  delay(500);
  animacion2();
  resetLuces(apagado);
  delay(250);
  animacion3();
  resetLuces(apagado);
  delay(250);
  animacion4();
  resetLuces(apagado);
  delay(500);
}

void resetLuces(bool estado){
  digitalWrite(luz1, estado);
  digitalWrite(luz2, estado);
  digitalWrite(luz3, estado);
  digitalWrite(luz4, estado);
  digitalWrite(luz5, estado);
  digitalWrite(luz6, estado);
}

void animacion1(){
  digitalWrite(luz1, encendido);
  delay(500);
  digitalWrite(luz2, encendido);
  delay(500);
  digitalWrite(luz3, encendido);
  delay(500);
  digitalWrite(luz4, encendido);
  delay(500);
  digitalWrite(luz5, encendido);
  delay(500);
  digitalWrite(luz6, encendido);
  delay(500);
}

void animacion2(){
  digitalWrite(luz1, encendido);
  digitalWrite(luz2, encendido);
  delay(500);
  digitalWrite(luz3, encendido);
  digitalWrite(luz4, encendido);
  delay(500);
  digitalWrite(luz5, encendido);
  digitalWrite(luz6, encendido);
  delay(500);
}

void animacion3(){
  for(int i=0; i<3; i++){
    delay(250);
    resetLuces(encendido);
    delay(500);
    resetLuces(false);
    delay(250);
  }
}

void animacion4(){
  digitalWrite(luz1, encendido);
  digitalWrite(luz3, encendido);
  delay(250);
  digitalWrite(luz4, encendido);
  digitalWrite(luz6, encendido);
  delay(500);
  digitalWrite(luz2, encendido);
  digitalWrite(luz5, encendido);
  delay(500);
}
