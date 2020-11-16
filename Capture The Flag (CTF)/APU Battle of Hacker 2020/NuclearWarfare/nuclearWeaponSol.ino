#include<Keyboard.h>

void typeKey(int key){
    Keyboard.press(key);
    delay(50);
    Keyboard.release(key);
}

void setup() {
  Keyboard.begin();
  delay(500);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  int i=0;
  char buf[6];
  //nuclear launch code: 3073
  //print 0000-9999
  for(int i=0; i < 10000; i++){        
    sprintf(buf, "%04d", i);
    Keyboard.print(buf);
    //typeKey(KEY_RETURN);
    delay(30);      
  }  
}
