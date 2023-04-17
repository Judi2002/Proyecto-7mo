 const int INTENTOS = 7; 
 const int BTN0 = 3;
 const int BTN1 = 4; 
 const int BTN2 = 5;
 const int BTN3 = 6;
 const int BTN4 = 7;
 const int BTN5 = 8;
 const int BTN6 = 9;
 const int BTN7 = 10;
 const int BTN8 = 11;
 const int BTN9 = 12;
 int EstadoBTN = HIGH;
 int i = 0;
 
void setup() {
  Serial.begin(9600);
  pinMode(BTN0, INPUT_PULLUP);
  pinMode(BTN1, INPUT_PULLUP);
  pinMode(BTN2, INPUT_PULLUP);
  pinMode(BTN3, INPUT_PULLUP);
  pinMode(BTN4, INPUT_PULLUP);
  pinMode(BTN5, INPUT_PULLUP);
  pinMode(BTN6, INPUT_PULLUP);
  pinMode(BTN7, INPUT_PULLUP);
  pinMode(BTN8, INPUT_PULLUP);
  pinMode(BTN9, INPUT_PULLUP);
}

void loop() {
 int btn0_pressed, btn1_pressed, btn2_pressed, btn3_pressed, btn4_pressed, btn5_pressed, btn6_pressed, btn7_pressed, btn8_pressed, btn9_pressed;
 
 btn0_pressed = ButtonPressed(BTN0);
if (btn0_pressed == 1){
  Serial.println("Apretado BTN0");
 }

  btn1_pressed = ButtonPressed(BTN1);
if (btn1_pressed == 1){
  Serial.println("Apretado BTN1");
 }

 btn2_pressed = ButtonPressed(BTN2);
if (btn2_pressed == 1){
  Serial.println("Apretado BTN2");
 }

 btn3_pressed = ButtonPressed(BTN3);
if (btn3_pressed == 1){
  Serial.println("Apretado BTN3");
 }

btn4_pressed = ButtonPressed(BTN4);
if (btn4_pressed == 1){
  Serial.println("Apretado BTN4");
 }

btn5_pressed = ButtonPressed(BTN5);
if (btn5_pressed == 1){
  Serial.println("Apretado BTN5");
 }

btn6_pressed = ButtonPressed(BTN6);
if (btn6_pressed == 1){
  Serial.println("Apretado BTN6");
 }

btn7_pressed = ButtonPressed(BTN7);
if (btn7_pressed == 1){
  Serial.println("Apretado BTN7");
 }

btn8_pressed = ButtonPressed(BTN8);
if (btn8_pressed == 1){
  Serial.println("Apretado BTN8");
 }

btn9_pressed = ButtonPressed(BTN9);
if (btn9_pressed == 1){
  Serial.println("Apretado BTN9");
 }

}

int ButtonPressed (int button) {
   EstadoBTN = digitalRead(button);
  if(EstadoBTN == LOW) {      
    for(i = 0; i < INTENTOS; i++){
      delay(10);
      EstadoBTN = digitalRead(button);
      if( EstadoBTN == HIGH) {
        break;
      }
    }
    if(i == INTENTOS){
      return 1;
    }
   } 
   return 0;
}
