//methhuw

int pinArray[] ={2, 3, 4, 5, 6, 7};
int timer = 500;
int count = 0;

int fastbutton = 8;
int fastbuttonstate1;
int fastbuttonstate2 = LOW;

int slowbutton = 9;
int slowbuttonstate1;
int slowbuttonstate2 = LOW;

void checkbutton() {
  int fastbuttonreading = digitalRead(fastbutton);
  int slowbuttonreading = digitalRead(slowbutton);
  int currenttimer = digitalRead(timer);
  if (fastbuttonreading != fastbuttonstate2) {
    if (fastbuttonreading != fastbuttonstate1) {
      fastbuttonstate1 = fastbuttonreading;
      if (fastbuttonstate1 == HIGH) {
        timer = timer / 2;
        if (timer
