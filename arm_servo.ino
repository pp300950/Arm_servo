#include <Servo.h>

Servo servo1;  // เซอร์โวมอเตอร์ตัวที่หนึ่ง
Servo servo2;  // เซอร์โวมอเตอร์ตัวที่สอง
Servo servo3;  // เซอร์โวมอเตอร์ตัวที่สาม
Servo servo4;
int pos1 = 0;  // ตำแหน่งปัจจุบันของเซอร์โวมอเตอร์ตัวแรก
int pos2 = 0;  // ตำแหน่งเริ่มต้นของเซอร์โวมอเตอร์ตัวที่สอง
int pos3 = 90;  // ตำแหน่งเริ่มต้นของเซอร์โวมอเตอร์ตัวที่สาม
int pos4 = 90;

void setup() {
  servo1.attach(9);  // ตั้งขาที่เชื่อมกับ Servo Motor เป็นขา 9
  servo2.attach(10); // ตั้งขาที่เชื่อมกับ Servo Motor เป็นขา 10
  servo3.attach(11); // ตั้งขาที่เชื่อมกับ Servo Motor เป็นขา 11
  servo4.attach(6);
}

void loop() {
  // เซอร์โวมอเตอร์ตัวที่หนึ่งหมุนจาก 0 ถึง 90 องศา
  servo1.write(pos1);

  delay(10000);
  servo2.write(pos2);
  delay(1000);
  servo3.write(pos3);
  delay(1000);
  servo4.write(pos4);

  delay(3000);
  for (pos1 = 0; pos1 <= 180; pos1 += 1) {
    servo1.write(pos1);  // กำหนดตำแหน่งของ Servo
    delay(15);           // รอเพื่อให้ Servo หมุนไปยังตำแหน่งใหม่
  }
  delay(10000000);
  for (pos2 = 0; pos2 <= 180; pos2 += 1) {
    servo2.write(pos2);  // กำหนดตำแหน่งของ Servo
    delay(15);           // รอเพื่อให้ Servo หมุนไปยังตำแหน่งใหม่
  }
  delay(1000);
  for (pos3 = 0; pos3 <= 90; pos3 += 1) {
    servo3.write(pos3);  // กำหนดตำแหน่งของ Servo
    delay(15);           // รอเพื่อให้ Servo หมุนไปยังตำแหน่งใหม่
  }
  delay(1000);
  for (pos2 = 180; pos2 >= 30; pos2 -= 1) {
    servo2.write(pos2);  // กำหนดตำแหน่งของ Servo
    delay(15);           // รอเพื่อให้ Servo หมุนไปยังตำแหน่งใหม่
  }
  delay(1000);
  for (pos2 = 30; pos2 <= 90; pos2 += 1) {
    servo2.write(pos2);  // กำหนดตำแหน่งของ Servo
    delay(15);           // รอเพื่อให้ Servo หมุนไปยังตำแหน่งใหม่
  }
  delay(1000);
  for (pos2 = 90; pos2 <= 130; pos2 += 1) {
    servo2.write(pos2);  // กำหนดตำแหน่งของ Servo
    delay(15);           // รอเพื่อให้ Servo หมุนไปยังตำแหน่งใหม่
  }
  delay(1000);  // รอเพื่อเป็นการหยุดสักครู่ที่ตำแหน่งสุดท้าย
  // เซอร์โวมอเตอร์ตัวที่สองหมุนจาก 120 ถึง 90 องศา
  for (pos1 = 90; pos1 <= 130; pos1 += 1) {
    servo1.write(pos1);  // กำหนดตำแหน่งของ Servo
    delay(15);           // รอเพื่อให้ Servo หมุนไปยังตำแหน่งใหม่
  }
  delay(1000); 
  for (pos1 = 130; pos1 >= 50; pos1 -= 1) {
    servo1.write(pos1);  // กำหนดตำแหน่งของ Servo
    delay(15);           // รอเพื่อให้ Servo หมุนไปยังตำแหน่งใหม่
  }
  delay(1000); 
  pos1 = 150;
  servo1.write(pos1);
  delay(1000); 

  for (pos1 = 130; pos1 >= 90; pos1 -= 1) {
    servo1.write(pos1);  // กำหนดตำแหน่งของ Servo
    delay(15);           // รอเพื่อให้ Servo หมุนไปยังตำแหน่งใหม่
  }
  delay(1000);
  for (pos3 = 90; pos3 <= 180; pos3 += 1) {
    servo3.write(pos3);  // กำหนดตำแหน่งของ Servo
    delay(15);           // รอเพื่อให้ Servo หมุนไปยังตำแหน่งใหม่
  }
  delay(10000000);

}


