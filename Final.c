/*Created by Darius Yazdekhasti and Kevin Zhang
This flashes my name in morse code by inputing my name in the
code by finding my letters from something like a dictionary
so that it will take the commands from each letter and
flash the light on the board.
The site for the book is "https://raks.ee/books/pdf/exploringraspberrypi.pdf"
Page: 194-195
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define GPIO_NUMBER "4"
#define GPIO4_PATH "/sys/class/gpio/gpio/
#define GPIO_SYSFS "/sys/class/gpio/"
const int LED_PIN = 1;
void setup() {
  // initialize digital pin LED_PIN as an output.
  pinMode(LED_PIN, OUTPUT);
}
// the loop function runs over and over again forever
void loop(){
  char phrase[] = "This is what will be blinked on the light";
  int length = strlen(phrase);
  Serial.print("phrase length: "); Serial.println(length);
  for (int num=0; num<length; num++){
    Serial.println(phrase[num]);
    char ch = phrase[num];
    switch (ch)
    {
      case 'a':
        a();
        break;
      case 'b':
      {
        b();
        break;
      }
      case 'c':
      {
        c();
        break;
      }
      case 'd':
      {
        d();
        break;
      }
      case 'e':
      {
        e();
        break;
      }
      case 'f':
      {
        f();
        break;
      }
      case 'g':
      {
        g();
        break;
      }
      case 'h':
      {
        h();
        break;
      }
      case 'i':
      {
        i();
        break;
      }
      case 'j':
      {
        j();
        break;
      }
      case 'k':
      {
        k();
        break;
      }
      case 'l':
      {
        l();
        break;
      }
      case 'm':
      {
        m();
        break;
      }
      case 'n':
      {
        n();
        break;
      }
      case 'o':
      {
        o();
        break;
      }
      case 'p':
      {
        p();
        break;
      }
      case 'q':
      {
        q();
        break;
      }
      case 'r':
      {
        r();
        break;
      }
      case 's':
      {
        s();
        break;
      }
      case 't':
      {
        t();
        break;
      }
      case 'u':
      {
        u();
        break;
      }
      case 'v':
      {
        v();
        break;
      }
      case 'w':
      {
        w();
        break;
      }
      case 'x':
      {
        x();
        break;
      }
      case 'y':
      {
        y();
        break;
      }
      case 'z':
      {
        z();
        break;
      }
      default:
      space();
      break;
    }
  }
}
void a(){
  digitalWrite(LED_PIN, HIGH);
  delay(450);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(1000);
  }
void b(){
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(450);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(450);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(450);
  digitalWrite(LED_PIN, LOW);
  delay(1000);
  }
void c(){
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(450);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(450);
  digitalWrite(LED_PIN, LOW);
  delay(1000);
  }
  void d(){
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(450);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(450);
  digitalWrite(LED_PIN, LOW);
  delay(1000);
  }
  void e(){
  digitalWrite(LED_PIN, HIGH);
  delay(450);
  digitalWrite(LED_PIN, LOW);
  delay(1000);
  }
  void f(){
  digitalWrite(LED_PIN, HIGH);
  delay(450);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(450);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(450);
  digitalWrite(LED_PIN, LOW);
  delay(1000);
  }
  void g(){
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(450);
  digitalWrite(LED_PIN, LOW);
  delay(1000);
  }
  void h(){
  digitalWrite(LED_PIN, HIGH);
  delay(450);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(450);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(450);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(450);
  digitalWrite(LED_PIN, LOW);
  delay(1000);
  }
  void i(){
  digitalWrite(LED_PIN, HIGH);
  delay(450);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(450);
  digitalWrite(LED_PIN, LOW);
  delay(1000);
  }
  void j(){
  digitalWrite(LED_PIN, HIGH);
  delay(450);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(1000);
  }
  void k(){
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(450);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(1000);
  }
  void l(){
  digitalWrite(LED_PIN, HIGH);
  delay(450);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(450);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(450);
  digitalWrite(LED_PIN, LOW);
  delay(1000);
  }
  void m(){
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(1000);
  }
  void n(){
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(450);
  digitalWrite(LED_PIN, LOW);
  delay(1000);
  }
  void o(){
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(1000);
  }
  void p(){
  digitalWrite(LED_PIN, HIGH);
  delay(450);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(450);
  digitalWrite(LED_PIN, LOW);
  delay(1000);
  }
  void q(){
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(450);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(1000);
  }
  void r(){
  digitalWrite(LED_PIN, HIGH);
  delay(450);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(450);
  digitalWrite(LED_PIN, LOW);
  delay(1000);
  }
  void s(){
  digitalWrite(LED_PIN, HIGH);
  delay(450);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(450);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(450);
  digitalWrite(LED_PIN, LOW);
  delay(1000);
  }
  void t(){
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(1000);
  }
  void u(){
  digitalWrite(LED_PIN, HIGH);
  delay(450);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(450);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(1000);
  }
  void v(){
  digitalWrite(LED_PIN, HIGH);
  delay(450);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(450);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(450);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(1000);
  }
  void w(){
  digitalWrite(LED_PIN, HIGH);
  delay(450);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(1000);
  }
  void x(){
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(450);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(450);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(1000);
  }
  void y(){
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(450);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(1000);
  }
  void z(){
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(450);
  digitalWrite(LED_PIN, LOW);
  delay(450);
  digitalWrite(LED_PIN, HIGH);
  delay(450);
  digitalWrite(LED_PIN, LOW);
  delay(1000);
  }
  void space(){
  delay(1200);
  }
