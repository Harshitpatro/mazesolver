#define m1 9  //Right Motor MA1
#define m2 8  //Right Motor MA2
#define m3 7  //Left Motor MB1
#define m4 6  //Left Motor MB2
#define e1 10  //Right Motor Enable Pin EA
#define e2 5 //Left Motor Enable Pin EB

//**********5 Channel IR Sensor Connection**********//
#define ir1 A0
#define ir2 A1
#define ir3 A2
#define ir4 A3
#define ir5 A4
//*************************************************//

void setup() {
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(m3, OUTPUT);
  pinMode(m4, OUTPUT);
  pinMode(e1, OUTPUT);
  pinMode(e2, OUTPUT);
  pinMode(ir1, INPUT);
  pinMode(ir2, INPUT);
  pinMode(ir3, INPUT);
  pinMode(ir4, INPUT);
  pinMode(ir5, INPUT);
}

void loop() {
  //Reading Sensor Values
 char  s1 = digitalRead(ir1);  //Left Most Sensor
  char s2 = digitalRead(ir2);  //Left Sensor
 char s3 = digitalRead(ir3);  //Middle Sensor
  char s4 = digitalRead(ir4);  //Right Sensor
  char s5 = digitalRead(ir5);  //Right Most Sensor

  //if only middle sensor detects black line
  if((s1 == LOW) && (s2 =HIGH) && (s3 == HIGH) && (s4 == HIGH) && (s5 == LOW))
  {
    //going forward with full speed 
    analogWrite(e1, 255); //you can adjust the speed of the motors from 0-255
    analogWrite(e2, 255); //you can adjust the speed of the motors from 0-255
    digitalWrite(m1, HIGH);
    digitalWrite(m2, LOW);
    digitalWrite(m3, HIGH);
    digitalWrite(m4, LOW);
  }
  
  //if only left sensor detects black line
 else if((s1 == LOW) && (s2 == HIGH) && (s3 == LOW) && (s4 == LOW) && (s5 == LOW))
  {
    //going right with full speed 
    analogWrite(e1, 255); //you can adjust the speed of the motors from 0-255
    analogWrite(e2, 255); //you can adjust the speed of the motors from 0-255
    digitalWrite(m1, HIGH);
    digitalWrite(m2, LOW);
    digitalWrite(m3, LOW);
    digitalWrite(m4, LOW);
  }
  
  //if only left most sensor detects black line
  else if((s1 == HIGH) && (s2 == LOW) && (s3 == LOW) && (s4 == LOW) && (s5 == LOW))
  {
    //going right with full speed 
    analogWrite(e1, 255); //you can adjust the speed of the motors from 0-255
    analogWrite(e2, 255); //you can adjust the speed of the motors from 0-255
    digitalWrite(m1, HIGH);
    digitalWrite(m2, LOW);
    digitalWrite(m3, LOW);
    digitalWrite(m4, HIGH);
  }

  //if only right sensor detects black line
  else if((s1 == LOW) && (s2 == LOW) && (s3 == LOW) && (s4 == HIGH) && (s5 == LOW))
  {
    //going left with full speed 
    analogWrite(e1, 255); //you can adjust the speed of the motors from 0-255
    analogWrite(e2, 255); //you can adjust the speed of the motors from 0-255
    digitalWrite(m1, LOW);
    digitalWrite(m2, LOW);
    digitalWrite(m3, HIGH);
    digitalWrite(m4, LOW);
  }

  //if only right most sensor detects black line
  //else if((s1 == 1) && (s2 == 1) && (s3 == 1) && (s4 == 1) && (s5 == 0))
 else if((s1 == LOW) && (s2 == LOW) && (s3 == LOW) && (s4 == HIGH) && (s5 == LOW))
  {
    //going left with full speed 
    analogWrite(e1, 255); //you can adjust the speed of the motors from 0-255
    analogWrite(e2, 255); //you can adjust the speed of the motors from 0-255
    digitalWrite(m1, LOW);
    digitalWrite(m2, HIGH);
    digitalWrite(m3, HIGH);
    digitalWrite(m4, LOW);
  }

  //if middle and right sensor detects black line
 // else if((s1 == 1) && (s2 == 1) && (s3 == 0) && (s4 == 0) && (s5 == 1))
  if((s1 == LOW) && (s2 == LOW) && (s3 == HIGH) && (s4 == HIGH) && (s5 == LOW))
  {
    //going left with full speed 
    analogWrite(e1, 255); //you can adjust the speed of the motors from 0-255
    analogWrite(e2, 255); //you can adjust the speed of the motors from 0-255
    digitalWrite(m1, LOW);
    digitalWrite(m2, LOW);
    digitalWrite(m3, HIGH);
    digitalWrite(m4, LOW);
  }

  //if middle and left sensor detects black line
  //else if((s1 == 1) && (s2 == 0) && (s3 == 0) && (s4 == 1) && (s5 == 1))
 else if((s1 == LOW) && (s2 == LOW) && (s3 == LOW) && (s4 == HIGH) && (s5 == HIGH))
  {
    //going right with full speed 
  digitalWrite(m1,LOW);
    digitalWrite(m2, HIGH);
    digitalWrite(m3, HIGH);
    digitalWrite(m4, LOW);
     analogWrite(e1, 140); //you can adjust the speed of the motors from 0-255
    analogWrite(e2, 140);
  }

  //if middle, left and left most sensor detects black line
 // else if((s1 == 0) && (s2 == 0) && (s3 == 0) && (s4 == 1) && (s5 == 1))
 else if((s1 == HIGH) && (s2 == HIGH) && (s3 == HIGH) && (s4 == LOW) && (s5 == LOW))
  {
    //going right with full speed 
digitalWrite(m1,LOW);
    digitalWrite(m2, HIGH);
    digitalWrite(m3, HIGH);
    digitalWrite(m4, LOW);
     analogWrite(e1, 255); //you can adjust the speed of the motors from 0-255
    analogWrite(e2, 255
    );
  }

  //if middle, right and right most sensor detects black line
 // else if((s1 == 1) && (s2 == 1) && (s3 == 0) && (s4 == 0) && (s5 == 0))
 else if((s1 == LOW) && (s2 == LOW) && (s3 == HIGH) && (s4 == HIGH) && (s5 == HIGH))
  {
    //going left with full speed 
    analogWrite(e1, 255); //you can adjust the speed of the motors from 0-255
    analogWrite(e2, 255); //you can adjust the speed of the motors from 0-255
    digitalWrite(m1, LOW);
    digitalWrite(m2, LOW);
    digitalWrite(m3, HIGH);
    digitalWrite(m4, LOW);
  }

  //if all sensors are on a black line
  //else if((s1 == 0) && (s2 == 0) && (s3 == 0) && (s4 == 0) && (s5 == 0))
 else if((s1 ==  HIGH) && (s2 ==  HIGH) && (s3 ==  HIGH) && (s4 == HIGH) && (s5 ==  HIGH))
  {
    //stop
    digitalWrite(m1, LOW);
    digitalWrite(m2, LOW);
    digitalWrite(m3, LOW);
    digitalWrite(m4, LOW);
  }
 // if ((s1 == 0) && (s2 == 0) && (s3 == 1)&& (s4 ==0)&& (s5 == 0)//T Intersection
  if((s1 ==  HIGH) && (s2 ==  HIGH) && (s3 ==  LOW) && (s4 == HIGH) && (s5 ==  HIGH))  
    {
        //going left with full speed 
    analogWrite(e1, 255); //you can adjust the speed of the motors from 0-255
    analogWrite(e2, 255); //you can adjust the speed of the motors from 0-255
    digitalWrite(m1, LOW);
    digitalWrite(m2, HIGH);
    digitalWrite(m3, HIGH);
    digitalWrite(m4, LOW); // As left is possible
    }
   // if ((s1 == 0)$$(s2 == 0) && (s3 == 0) && (s4 == 1)&&(s5 == 1))//Left T Intersection
    if((s1 ==  HIGH) && (s2 ==  HIGH) && (s3 ==  HIGH) && (s4 == LOW) && (s5 ==  LOW))  
    {
     analogWrite(e1, 255); //you can adjust the speed of the motors from 0-255
    analogWrite(e2, 255); //you can adjust the speed of the motors from 0-255
    digitalWrite(m1, HIGH);
    digitalWrite(m2, LOW);
    digitalWrite(m3, LOW);
    digitalWrite(m4, HIGH); //
    }
//if (IR1 == LOW && IR2 == HIGH && IR3 == HIGH)//Right T Tntersection
//if((s1== LOW)&&(s2 == LOW)&& (s3 == HIGH)&& (s4 ==HIGH) &&(s5 == HIGH))
   
//     if ((s1 == HIGH)&&(s2 == HIGH)&&(s3 == HIGH) && (s4 == HIGH) && (s5 == HIGH))//4 Lane intersection
//    {
//     analogWrite(e1, 255); //you can adjust the speed of the motors from 0-255
//    analogWrite(e2, 255); //you can adjust the speed of the motors from 0-255
//    digitalWrite(m1, LOW);
//    digitalWrite(m2, HIGH);
//    digitalWrite(m3, HIGH);
//    digitalWrite(m4, LOW); //As no other direction is possible
//    }
    //if (IR1 == LOW && IR2 ==LOW && IR3 == LOW)//Dead End
     if ((s1 == LOW)&&(s2 == LOW)&&(s3 == LOW) && (s4 == LOW) && (s5 == LOW))
    {
     analogWrite(e1, 255); //you can adjust the speed of the motors from 0-255
    analogWrite(e2, 255); //you can adjust the speed of the motors from 0-255
    digitalWrite(m1, HIGH);
    digitalWrite(m2, LOW);
    digitalWrite(m3, LOW);
    digitalWrite(m4, HIGH); //As no other direction is possible
    }
}
