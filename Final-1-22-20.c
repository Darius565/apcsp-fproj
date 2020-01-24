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
#include <unistd.h>
#define GPIO_NUMBER "4"
#define GPIO4_PATH "/sys/class/gpio/gpio4/"
#define GPIO_SYSFS "/sys/class/gpio/"



void writeGPIO(char filename[], char value[]){
 FILE* fp; // create a file pointer fp
 fp = fopen(filename, "w+"); // open file for write/update
 fprintf(fp, "%s", value); // send the value to the file
 fclose(fp); // close the file using fp
 }
// the loop function runs over and over again forever

void a(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
void b(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
void c(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  void d(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  void e(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  void f(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  void g(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  void h(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  void i(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  void j(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  void k(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  void l(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  void m(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  void n(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  void o(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  void p(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  void q(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  void r(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  void s(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  void t(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  void u(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  void v(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  void w(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  void x(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  void y(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  void z(){
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(1000000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "1");
  usleep(300000);
  writeGPIO(GPIO4_PATH "value", "0");
  usleep(1000000);
  }
  void space(){
  usleep(1200000);
  }
int main(int argc, char* argv[]){
int counter = 0;
int arg = 0;
while (arg < argc)
{
printf("Arg %d is %s\n", arg, argv[arg]);
arg++;
}

  for (int num=0; num<10; num++){
    char ch = *argv[1];
    if (GPIO_PATH == 1){
	counter = counter + 1;
	printf("The light has flashed %d times\n", counter);
     }
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
