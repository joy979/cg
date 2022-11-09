#include <GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include<math.h>
#include <stdlib.h>

static float spin = -100;
static float tx=0,ty=0;
void trainMove()
{
    tx=tx+.05;
    if(tx>250)
    {

        tx=-135;
    }
    glutPostRedisplay();
}
void mov(){
    spin+=0.1;
    if(spin > 100)
        spin = -100;
    glutPostRedisplay();
}

static float cspin = -125;
void cmov(){
    cspin+=0.1;
    if(cspin > 125)
        cspin = -125;
    glutPostRedisplay();
}
void init()
{

    glClearColor(0.2, 0.6, 0.0, 0.6);


    glMatrixMode(GL_PROJECTION);

    glOrtho(-125, 125, -100, 100, -4, 4);
}
void DrawCircle(float cx, float cy, float rx, float ry, int num_segments)
{

   glBegin(GL_TRIANGLE_FAN);
    for (int ii = 0; ii < num_segments; ii++)
    {

       float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);

float x = rx * cosf(theta);
        float y = ry * sinf(theta);
       glVertex2f(x + cx, y + cy);
    }
    glEnd();
}

    void display() {

  glClear(GL_COLOR_BUFFER_BIT);
  //////TOTAL field
  glColor3ub(150,233,86);
  glRectf(-125,-100,125,60);

  //grass
  glBegin(GL_TRIANGLES);
    glColor3ub(0,128,0);
    glVertex2f(-75.0f, -90.0f);
    glVertex2f(-70.0f, -78.0f);
    glVertex2f(-70.5f,-92.0f);
    glEnd();

     glBegin(GL_TRIANGLES);
    glColor3ub(0,128,0);
    glVertex2f(-70.0f, -92.0f);
    glVertex2f(-65.0f, -75.0f);
    glVertex2f(-67.5f,-92.0f);
    glEnd();

     glBegin(GL_TRIANGLES);
    glColor3ub(0,128,0);
    glVertex2f(-120.0f, -85.0f);
    glVertex2f(-115.0f, -78.0f);
    glVertex2f(-115.5f,-92.0f);
    glEnd();

   //TREE

      glBegin(GL_QUADS);
    glColor3ub(205,133,63);
    glVertex2f(-95, 0);
    glVertex2f(-100, 0);
    glVertex2f(-94, -12);
    glVertex2f(-90, -10);
    glEnd();

     glColor3ub(0,128,0);
    DrawCircle(-97, 0, 13, 7, 500);

    glColor3ub(0,128,0);
    DrawCircle(-101, 0, 7, 11, 500);

    glColor3ub(0,128,0);
    DrawCircle(-92, 6, 7, 9, 500);

     glColor3ub(0,128,0);
    DrawCircle(-105, 6, 5, 11, 500);



//HOUSE
     glBegin(GL_QUADS);
    glColor3ub(192,192,192);
    glVertex2f(-60, 0);
    glVertex2f(-85, 0);
    glVertex2f(-70, -20);
    glVertex2f(-40, -20);
    glEnd();

    glBegin(GL_POLYGON);
   glColor3ub(47,79,79);
    glVertex2f(-85.0f,0.0f);
    glVertex2f(-100.0f,-20.0f);
    glVertex2f(-95.0f,-20.0f);
    glVertex2f(-95.0f,-50.0f);
    glVertex2f(-70.0f,-50.0f);
    glVertex2f(-70.0f,-20.0f);
    glVertex2f(-85.0f,0.0f);

    glEnd();
     glColor3ub(192,192,192);
     glRectf(-90,-30,-85,-40);

    glBegin(GL_QUADS);
    glColor3ub(0,128,128);
    glVertex2f(-70, -20);
    glVertex2f(-45, -20);
    glVertex2f(-45, -50);
    glVertex2f(-70, -50);
    glEnd();

     glColor3ub	(210,180,140);
     glRectf(-55,-50,-66,-35);


      glBegin(GL_QUADS);
    glColor3ub(139,69,19);
    glVertex2f(-95, -50);
    glVertex2f(-100, -55);
    glVertex2f(-40, -55);
    glVertex2f(-45, -50);
    glEnd();

   // HOUSE 2
    glBegin(GL_QUADS);
    glColor3ub(72,61,139);
    glVertex2f(38,55);
    glVertex2f(42, 50);
    glVertex2f(52, 50);
    glVertex2f(46, 55);
    glEnd();


     glColor3ub(205,133,63);
     glRectf(42,50,50,40);

     glColor3ub(147,112,219);
     glRectf(43,40,46,46);


    glColor3ub(199,21,133);
    glRectf(35,40,42,50);

     glBegin(GL_TRIANGLES);
    glColor3ub(205,133,63);
    glVertex2f(33.0f, 50.0f);
    glVertex2f(38.0f, 55.0f);
    glVertex2f(42.5f,50.0f);
    glEnd();

     glColor3ub(147,112,219);
     glRectf(36,44,39,46);

//2
    glBegin(GL_QUADS);
    glColor3ub(147,112,219);
    glVertex2f(20,55);
    glVertex2f(25, 50);
    glVertex2f(37, 50);
    glVertex2f(30, 55);
    glEnd();


     glColor3ub(205,133,63);
     glRectf(25,40,35,50);

     glColor3ub(147,112,219);
     glRectf(28,40,31,46);


    glColor3ub(205,133,63);
    glRectf(15,40,25,50);

     glBegin(GL_TRIANGLES);
    glColor3ub(205,133,63);
    glVertex2f(13.0f, 50.0f);
    glVertex2f(25.0f, 50.0f);
    glVertex2f(20.5f,55.0f);
    glEnd();

     glColor3ub(147,112,219);
     glRectf(17,44,21,46);
//2







    //road

   glBegin(GL_POLYGON);
   glColor3ub(218,165,32);
    glVertex2f(-115.0f,-100.0f);
    glVertex2f(-95.0f,-70.0f);
    glVertex2f(-60.0f,-55.0f);
    glVertex2f(-55.0f,-55.0f);
    glVertex2f(-90.0f,-70.0f);
    glVertex2f(-105.0f,-100.0f);
    glVertex2f(-115.0f,-100.0f);

    glEnd();



     //sky


 glColor3ub(0,191,255);
  glRectf(-125,60,125,100);
  //tree
     glColor3ub(205,133,63);
  glRectf(-31,60,-33,73);

   glBegin(GL_TRIANGLES);
    glColor3ub(0,128,0);
    glVertex2f(-40.0f, 72.0f);
    glVertex2f(-26.0f, 72.0f);
    glVertex2f(-32.5f,83.0f);
    glEnd();
    //2
     glColor3ub(205,133,63);
  glRectf(0,60,3,73);

   glBegin(GL_TRIANGLES);
    glColor3ub(0,128,0);
    glVertex2f(-5.0f, 72.0f);
    glVertex2f(7.0f, 72.0f);
    glVertex2f(0.0f,83.0f);
    glEnd();
    //3
    glColor3ub(205,133,63);
  glRectf(12,60,14,72);

   glBegin(GL_TRIANGLES);
    glColor3ub(0,128,0);
    glVertex2f(7.0f,72.0f);
    glVertex2f(15.0f, 84.0f);
    glVertex2f(20.5f,72.0f);
    glEnd();
    //4
     glColor3ub(205,133,63);
  glRectf(23,60,25,72);

   glBegin(GL_TRIANGLES);
    glColor3ub(0,128,0);
    glVertex2f(19.0f,72.0f);
    glVertex2f(23.0f, 82.0f);
    glVertex2f(28.5f,72.0f);
    glEnd();
    //5
    glColor3ub(205,133,63);
  glRectf(110,60,112,74);

   glBegin(GL_TRIANGLES);
    glColor3ub(0,128,0);
    glVertex2f(106.0f,74.0f);
    glVertex2f(111.0f, 83.0f);
    glVertex2f(115.5f,74.0f);

    glEnd();
    //6
    glColor3ub(205,133,63);
  glRectf(120,60,121,85);



    glColor3ub(222,184,135);

   DrawCircle(120, 85, 5, 3, 500);

    glColor3ub(0,128,0);

   DrawCircle(120, 89,7, 6, 100);

   //7

    glColor3ub(205,133,63);
  glRectf(-117,60,-115,78);

  glColor3ub(0,128,0);

   DrawCircle(-116, 80,7, 6, 100);

   //8
glColor3ub(205,133,63);
  glRectf(-87,60,-85,78);

  glColor3ub(0,128,0);

   DrawCircle(-85, 80,8, 6, 100);



//1
  glBegin(GL_TRIANGLES);
    glColor3ub(34,139,34);
    glVertex2f(-125.0f, 60.0f);
    glVertex2f(-105.0f, 80.0f);
    glVertex2f(-85.0f,60.0f);
    glEnd();
    //2
     glBegin(GL_TRIANGLES);
    glColor3ub(34,139,34);
    glVertex2f(-85.0f, 60.0f);
    glVertex2f(-65.0f, 80.0f);
    glVertex2f(-30.0f,60.0f);
    glEnd();

    //3

     glBegin(GL_TRIANGLES);
    glColor3ub(34,139,34);
    glVertex2f(-32.0f, 60.0f);
    glVertex2f(-15.0f, 75.0f);
    glVertex2f(-5.0f,60.0f);
    glEnd();
//4
glBegin(GL_TRIANGLES);
    glColor3ub(34,139,34);
    glVertex2f(-7.0f, 60.0f);
    glVertex2f(8.0f, 70.0f);
    glVertex2f(12.0f,60.0f);
    glEnd();




////RIVER

glBegin(GL_POLYGON);
   glColor3ub(139,69,19);
    glVertex2f(-45.0f,-100.0f);
    glVertex2f(-25.0f,-80.0f);
    glVertex2f(0.0f,-60.0f);
    glVertex2f(15.0f,-50.0f);
    glVertex2f(20.0f,-20.0f);
    glVertex2f(45.0f,-10.0f);
    glVertex2f(55.0f,5.0f);
     glVertex2f(75.0f,10.0f);
    glVertex2f(85.0f,5.0f);
    glVertex2f(125.0f,15.0f);
    glVertex2f(125.0f,-5.0f);
    glVertex2f(105.0f,-30.0f);
    glVertex2f(90.0f,-50.0f);
    glVertex2f(80.0f,-70.0f);
    glVertex2f(65.0f,-75.0f);
    glVertex2f(85.0f,-90.0f);
    glVertex2f(70.0f,-100.0f);
     glVertex2f(-45.0f,-100.0f);

    glEnd();

    glBegin(GL_POLYGON);
   glColor3ub(0,0,255);
    glVertex2f(-43.0f,-100.0f);
    glVertex2f(-22.0f,-80.0f);
    glVertex2f(2.0f,-60.0f);
    glVertex2f(17.0f,-50.0f);
    glVertex2f(22.0f,-20.0f);
    glVertex2f(47.0f,-10.0f);
    glVertex2f(57.0f,5.0f);
     glVertex2f(76.0f,8.0f);
    glVertex2f(83.0f,3.0f);
    glVertex2f(123.0f,15.0f);
    glVertex2f(127.0f,-5.0f);
    glVertex2f(103.0f,-30.0f);
    glVertex2f(86.0f,-56.0f);
    glVertex2f(83.0f,-68.0f);
    glVertex2f(66.0f,-73.0f);
    glVertex2f(87.0f,-89.0f);
    glVertex2f(72.0f,-100.0f);
     glVertex2f(-45.0f,-100.0f);


    glEnd();
    //road 2
     glBegin(GL_QUADS);
    glColor3ub(112,128,144);
    glVertex2f(80,-100);
    glVertex2f(105,-100);
    glVertex2f(125, -40);
    glVertex2f(125, -3);
    glEnd();





    glColor3ub	(105,105,105);
     glRectf(90,-80,92,-75);

    //boat
    glColor3ub(0,0,0);
    glRectf(-10,-90,0,-85);
     glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(-10.0f, -90.0f);
    glVertex2f(-20.0f, -83.0f);
    glVertex2f(-10.0f,-85.0f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(0.0f, -85.0f);
    glVertex2f(0.0f, -90.0f);
    glVertex2f(8.0f,-83.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(178,34,34);
    glVertex2f(-10.0f, -85.0f);
    glVertex2f(-5.0f, -80.0f);
    glVertex2f(0.0f,-85.0f);
    glEnd();
    //2
      glColor3ub(0,0,0);
    glRectf(-10,-80,0,-75);
     glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(-10.0f, -80.0f);
    glVertex2f(-20.0f, -73.0f);
    glVertex2f(-10.0f,-75.0f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(0.0f, -75.0f);
    glVertex2f(0.0f, -80.0f);
    glVertex2f(8.0f,-73.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(178,34,34);
    glVertex2f(-10.0f, -75.0f);
    glVertex2f(-5.0f, -70.0f);
    glVertex2f(0.0f,-75.0f);
    glEnd();

    //3
glColor3ub(0,0,0);
    glRectf(-10,-70,0,-65);
     glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(-10.0f, -70.0f);
    glVertex2f(-20.0f, -63.0f);
    glVertex2f(-10.0f,-65.0f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(0.0f, -65.0f);
    glVertex2f(0.0f, -70.0f);
    glVertex2f(8.0f,-63.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(178,34,34);
    glVertex2f(-10.0f, -65.0f);
    glVertex2f(-5.0f, -60.0f);
    glVertex2f(0.0f,-65.0f);
    glEnd();


     glBegin(GL_LINES);

   glColor3ub(0,0,0);
    glVertex2f(-20,-90);
    glVertex2f(-20, -60);
     glEnd();


//road line
    glBegin(GL_LINES);

   glColor3ub(255,255,255);
    glVertex2f(95,-95);
    glVertex2f(105, -70);
    glVertex2f(107, -65);
    glVertex2f(120, -30);
    glEnd();

 //sun

    glColor3ub(255,255,0);

   DrawCircle(90, 85, 10, 10, 500);


   //tree
     glColor3ub(205,133,63);
  glRectf(-31,-80,-33,-72);

   glBegin(GL_TRIANGLES);
    glColor3ub(0,128,0);
    glVertex2f(-36.0f,-72.0f);
    glVertex2f(-31.0f, -60.0f);
    glVertex2f(-28.5f,-72.0f);
    glEnd();
     glColor3ub(205,133,63);
  glRectf(-21,-70,-23,-62);

   glBegin(GL_TRIANGLES);
    glColor3ub(0,128,0);
    glVertex2f(-26.0f,-62.0f);
    glVertex2f(-21.0f, -48.0f);
    glVertex2f(-18.5f,-62.0f);
    glEnd();
    glColor3ub(205,133,63);
  glRectf(-11,-60,-13,-52);

   glBegin(GL_TRIANGLES);
    glColor3ub(0,128,0);
    glVertex2f(-16.0f,-52.0f);
    glVertex2f(-11.0f, -40.0f);
    glVertex2f(-8.5f,-52.0f);

    glEnd();glColor3ub(205,133,63);
  glRectf(-3,-50,-5,-40);

   glBegin(GL_TRIANGLES);
    glColor3ub(0,128,0);
    glVertex2f(-8.0f,-40.0f);
    glVertex2f(-3.0f, -28.0f);
    glVertex2f(0.5f,-40.0f);
    glEnd();

    //CAR

    glBegin(GL_QUADS);
    glColor3ub(175,238,238);
    glVertex2f(95,-90);
    glVertex2f(100,-93);
    glVertex2f(107, -75);
    glVertex2f(104, -74);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(127,255,212);
    glVertex2f(95,-90);
    glVertex2f(93,-85);
    glVertex2f(97, -78);
    glVertex2f(102, -78);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(47,79,79);
    glVertex2f(95,-83);
    glVertex2f(96,-85);
    glVertex2f(95, -81.5);
    glVertex2f(96, -82);
    glEnd();


     glColor3ub(0,0,0);
    DrawCircle(102, -87, 1.5, 1.5, 500);
    glColor3ub(0,0,0);
    DrawCircle(106, -79, 1.5, 1.5, 500);


    //grass


     glBegin(GL_TRIANGLES);
    glColor3ub(34,139,34);
    glVertex2f(108.0f,-100.0f);
    glVertex2f(110.0f, -90.0f);
    glVertex2f(110.5f,-100.0f);
    glEnd();
     glBegin(GL_TRIANGLES);
    glColor3ub(34,139,34);
    glVertex2f(110.0f,-100.0f);
    glVertex2f(115.0f, -88.0f);
    glVertex2f(115.5f,-100.0f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(34,139,34);
    glVertex2f(116.0f,-100.0f);
    glVertex2f(120.0f, -85.0f);
    glVertex2f(120.5f,-100.0f);
    glEnd();

    glColor3ub(205,133,63);
  glRectf(121,-79,123,-65);
   glBegin(GL_TRIANGLES);
    glColor3ub(0,128,0);
    glVertex2f(118.0f,-65.0f);
    glVertex2f(121.0f, -55.0f);
    glVertex2f(125.5f,-65.0f);
    glEnd();

    glColor3ub(205,133,63);
  glRectf(120,-90,122,-80);
   glBegin(GL_TRIANGLES);
    glColor3ub(0,128,0);
    glVertex2f(117.0f,-80.0f);
    glVertex2f(125.0f, -80.0f);
    glVertex2f(121.5f,-70.0f);
    glEnd();


    //field
    glColor3ub(244,164,96);
    glRectf(60,43,95,57);
    //crops
     glColor3ub(0,128,0);
    DrawCircle(64, 46, 1, 1, 500);
    glColor3ub(0,128,0);
    DrawCircle(68, 46, 1, 1, 500);

     glColor3ub(0,128,0);
    DrawCircle(72, 46, 1, 1, 500);
     glColor3ub(0,128,0);
    DrawCircle(76, 46, 1, 1, 500);
    glColor3ub(0,128,0);
    DrawCircle(80, 46, 1, 1, 500);
     glColor3ub(0,128,0);
    DrawCircle(84, 46, 1, 1, 500);
     glColor3ub(0,128,0);
    DrawCircle(88, 46, 1, 1, 500);
    glColor3ub(0,128,0);
    DrawCircle(92, 46, 1, 1, 500);
    //2
    glColor3ub(0,128,0);
    DrawCircle(64, 50, 1, 1, 500);
    glColor3ub(0,128,0);
    DrawCircle(68, 50, 1, 1, 500);

     glColor3ub(0,128,0);
    DrawCircle(72, 50, 1, 1, 500);
     glColor3ub(0,128,0);
    DrawCircle(76, 50, 1, 1, 500);
    glColor3ub(0,128,0);
    DrawCircle(80, 50, 1, 1, 500);
     glColor3ub(0,128,0);
    DrawCircle(84, 50, 1, 1, 500);
     glColor3ub(0,128,0);
    DrawCircle(88, 50, 1, 1, 500);
    glColor3ub(0,128,0);
    DrawCircle(92, 50, 1, 1, 500);

    //3
     glColor3ub(0,128,0);
    DrawCircle(64, 54, 1, 1, 500);
    glColor3ub(0,128,0);
    DrawCircle(68, 54, 1, 1, 500);

     glColor3ub(0,128,0);
    DrawCircle(72, 54, 1, 1, 500);
     glColor3ub(0,128,0);
    DrawCircle(76, 54, 1, 1, 500);
    glColor3ub(0,128,0);
    DrawCircle(80, 54, 1, 1, 500);
     glColor3ub(0,128,0);
    DrawCircle(84, 54, 1, 1, 500);
     glColor3ub(0,124,0);
    DrawCircle(88, 54, 1, 1, 500);
    glColor3ub(0,128,0);
    DrawCircle(92, 54, 1, 1, 500);



//CLOUD

  glPushMatrix();
    glTranslatef(cspin,0,0);
    cmov();

  glColor3ub(255,255,255);
    DrawCircle(65, 86, 5, 9, 500);

     glColor3ub(255,255,255);
    DrawCircle(65, 80, 10, 5, 500);

    glColor3ub(255,255,255);
    DrawCircle(60, 80,8, 10, 500);

      glColor3ub(255,255,255);
    DrawCircle(55, 87,6, 12, 500);

     glColor3ub(255,255,255);
    DrawCircle(53, 80,12, 6, 500);
    glPopMatrix();

    //pond
  glColor3ub(189,183,107);

   DrawCircle(-75, 50, 18, 8, 500);

   glColor3ub(65,105,225);

   DrawCircle(-75, 50, 17, 7, 500);

   //BIRD
   //pakhi 1//
    glPushMatrix();
    glTranslatef(spin,5,0);
    mov();
      glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(-120.0f,90.0f);
    glVertex2f(-116.0f,87.0f);
    glVertex2f(-105.0f,85.0f);
    glVertex2f(-99.0f,90.0f);


 glEnd();

       glBegin(GL_POLYGON);

    glVertex2f(-111.0f,90.0f);
    glVertex2f(-116.0f,95.0f);
    glVertex2f(-110.0f,92.0f);
    glVertex2f(-111.0f,97.0f);
    glVertex2f(-103.0f,90.0f);

 glEnd();

DrawCircle(-101, 90, 1, 0.5, 500);

//pakhi2//
      glBegin(GL_POLYGON);
    glColor3ub(0,0,255);
    glVertex2f(-97.0f,82.0f);
    glVertex2f(-92.0f,79.0f);
    glVertex2f(-81.0f,77.0f);
    glVertex2f(-76.0f,82.0f);


 glEnd();

       glBegin(GL_POLYGON);

    glVertex2f(-87.0f,80.0f);
    glVertex2f(-92.0f,86.0f);
    glVertex2f(-86.0f,84.0f);
    glVertex2f(-87.0f,89.0f);
    glVertex2f(-82.0f,82.0f);

 glEnd();

DrawCircle(-78, 82, 1, 0.5, 500);



//pakhi3//
      glBegin(GL_POLYGON);
    glColor3ub(0,255,255);
    glVertex2f(5.0f,85.0f);
    glVertex2f(9.5f,82.0f);
    glVertex2f(21.0f,80.0f);
    glVertex2f(26.0f,85.0f);


 glEnd();

       glBegin(GL_POLYGON);

    glVertex2f(16.0f,85.0f);
    glVertex2f(10.0f,89.0f);
    glVertex2f(17.0f,87.0f);
    glVertex2f(16.0f,92.0f);
    glVertex2f(22.0f,85.0f);

 glEnd();

DrawCircle(24, 85, 1, 0.5, 500);
   //pakhi4//
      glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(-45.0f,87.0f);
    glVertex2f(-50.0f,90.0f);
    glVertex2f(-30.0f,90.0f);
    glVertex2f(-35.0f,85.0f);


 glEnd();

       glBegin(GL_POLYGON);

    glVertex2f(-40.0f,90.0f);
    glVertex2f(-45.0f,95.0f);
    glVertex2f(-41.0f,93.0f);
    glVertex2f(-40.0f,95.0f);
    glVertex2f(-35.0f,90.0f);

 glEnd();

DrawCircle(-32, 90, 1, 0.5, 500);

glPopMatrix();

//cricket playground
glColor3ub(0,255,0);
   DrawCircle(-20, -10, 25, 20, 500);

    glColor3ub(205,133,63);
    glRectf(-25,-25,-15,0);

   glColor3ub(255,248,220);
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2i(-27, -20);
     glVertex2i(-13, -20);

     glVertex2i(-27, -2);
     glVertex2i(-13, -2);
   glEnd();


   //train
    glLineWidth(5);
     glBegin(GL_LINES);

    glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(-125,20);
    glVertex2f(125, 20);

    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-125, 30);
    glVertex2f(125, 30);
    glEnd();
    int i = 0;
    glColor3f(0.3, 0.3, 0.3);
    glBegin(GL_QUADS);
    for (i = -135;i <= 125;i = i + 15) {

        glVertex2d(i, 18);
        glVertex2d(i + 5, 18);
        glVertex2d(i + 20, 32);
        glVertex2d(i + 25, 32);



    }
     glEnd();
     //boggy

     glPushMatrix();
     glTranslatef(tx,ty,0);

     for (int j = -125;j <= -25;j = j + 23) {
      glBegin(GL_QUADS);
    glColor3ub(128,0,128);

        glVertex2d(j+10, 25);
        glVertex2d(j + 30, 25);
        glVertex2d(j + 30, 40);
        glVertex2d(j + 10, 40);

        glColor3f(0,0,0);
        glVertex2d(j + 30, 30);
        glVertex2d(j + 30, 35);

        glVertex2d(j + 35, 35);
        glVertex2d(j + 35, 30);


    glEnd();
     glColor3ub(0,0,0);
     DrawCircle(j+15, 23, 3, 3, 500);
     glColor3ub(0,0,0);
     DrawCircle(j+25, 23, 3, 3, 500);

     }
     //big boggy

    glColor3ub(51,0,51);

       glRectf(0,25,32,42);
    glColor3ub(51,0,51);
     DrawCircle(29, 33.5, 10, 8.5, 500);

       glColor3ub(72,61,139);
       glRectf(26,41,22,48);
       glColor3ub(169,169,169);
     DrawCircle(23, 50, 2, 2, 500);
       glColor3ub(169,169,169);
     DrawCircle(20, 55, 3, 2, 500);
     glColor3ub(169,169,169);
     DrawCircle(15, 60, 4, 3, 500);




       glColor3ub(0,0,0);
     DrawCircle(5, 23, 3, 3, 500);
     glColor3ub(0,0,0);
     DrawCircle(27, 23, 3, 3, 500);

     glPopMatrix();
     trainMove();



  glFlush();
}

/////night mode//////




void display1() {

  glClear(GL_COLOR_BUFFER_BIT);
  //////TOTAL field
  glColor3ub(150,233,86);
  glRectf(-125,-100,125,60);

  //grass
  glBegin(GL_TRIANGLES);
    glColor3ub(0,128,0);
    glVertex2f(-75.0f, -90.0f);
    glVertex2f(-70.0f, -78.0f);
    glVertex2f(-70.5f,-92.0f);
    glEnd();

     glBegin(GL_TRIANGLES);
    glColor3ub(0,128,0);
    glVertex2f(-70.0f, -92.0f);
    glVertex2f(-65.0f, -75.0f);
    glVertex2f(-67.5f,-92.0f);
    glEnd();

     glBegin(GL_TRIANGLES);
    glColor3ub(0,128,0);
    glVertex2f(-120.0f, -85.0f);
    glVertex2f(-115.0f, -78.0f);
    glVertex2f(-115.5f,-92.0f);
    glEnd();

   //TREE

      glBegin(GL_QUADS);
    glColor3ub(205,133,63);
    glVertex2f(-95, 0);
    glVertex2f(-100, 0);
    glVertex2f(-94, -12);
    glVertex2f(-90, -10);
    glEnd();

     glColor3ub(0,128,0);
    DrawCircle(-97, 0, 13, 7, 500);

    glColor3ub(0,128,0);
    DrawCircle(-101, 0, 7, 11, 500);

    glColor3ub(0,128,0);
    DrawCircle(-92, 6, 7, 9, 500);




//HOUSE
     glBegin(GL_QUADS);
    glColor3ub(192,192,192);
    glVertex2f(-60, 0);
    glVertex2f(-85, 0);
    glVertex2f(-70, -20);
    glVertex2f(-40, -20);
    glEnd();

    glBegin(GL_POLYGON);
   glColor3ub(47,79,79);
    glVertex2f(-85.0f,0.0f);
    glVertex2f(-100.0f,-20.0f);
    glVertex2f(-95.0f,-20.0f);
    glVertex2f(-95.0f,-50.0f);
    glVertex2f(-70.0f,-50.0f);
    glVertex2f(-70.0f,-20.0f);
    glVertex2f(-85.0f,0.0f);

    glEnd();
     glColor3ub(192,192,192);
     glRectf(-90,-30,-85,-40);

    glBegin(GL_QUADS);
    glColor3ub(0,128,128);
    glVertex2f(-70, -20);
    glVertex2f(-45, -20);
    glVertex2f(-45, -50);
    glVertex2f(-70, -50);
    glEnd();

     glColor3ub	(210,180,140);
     glRectf(-55,-50,-66,-35);


      glBegin(GL_QUADS);
    glColor3ub(139,69,19);
    glVertex2f(-95, -50);
    glVertex2f(-100, -55);
    glVertex2f(-40, -55);
    glVertex2f(-45, -50);
    glEnd();

   // HOUSE 2
    glBegin(GL_QUADS);
    glColor3ub(72,61,139);
    glVertex2f(38,55);
    glVertex2f(42, 50);
    glVertex2f(52, 50);
    glVertex2f(46, 55);
    glEnd();


     glColor3ub(205,133,63);
     glRectf(42,50,50,40);

     glColor3ub(147,112,219);
     glRectf(43,40,46,46);


    glColor3ub(199,21,133);
    glRectf(35,40,42,50);

     glBegin(GL_TRIANGLES);
    glColor3ub(205,133,63);
    glVertex2f(33.0f, 50.0f);
    glVertex2f(38.0f, 55.0f);
    glVertex2f(42.5f,50.0f);
    glEnd();

     glColor3ub(147,112,219);
     glRectf(36,44,39,46);

//2
    glBegin(GL_QUADS);
    glColor3ub(147,112,219);
    glVertex2f(20,55);
    glVertex2f(25, 50);
    glVertex2f(37, 50);
    glVertex2f(30, 55);
    glEnd();


     glColor3ub(205,133,63);
     glRectf(25,40,35,50);

     glColor3ub(147,112,219);
     glRectf(28,40,31,46);


    glColor3ub(205,133,63);
    glRectf(15,40,25,50);

     glBegin(GL_TRIANGLES);
    glColor3ub(205,133,63);
    glVertex2f(13.0f, 50.0f);
    glVertex2f(25.0f, 50.0f);
    glVertex2f(20.5f,55.0f);
    glEnd();

     glColor3ub(147,112,219);
     glRectf(17,44,21,46);
//2







    //road

   glBegin(GL_POLYGON);
   glColor3ub(96,96,96);
    glVertex2f(-115.0f,-100.0f);
    glVertex2f(-95.0f,-70.0f);
    glVertex2f(-60.0f,-55.0f);
    glVertex2f(-55.0f,-55.0f);
    glVertex2f(-90.0f,-70.0f);
    glVertex2f(-105.0f,-100.0f);
    glVertex2f(-115.0f,-100.0f);

    glEnd();



     //sky

 glColor3ub(96,96,96);
  glRectf(-125,60,125,100);
  //tree
     glColor3ub(205,133,63);
  glRectf(-31,60,-33,73);

   glBegin(GL_TRIANGLES);
    glColor3ub(0,128,0);
    glVertex2f(-40.0f, 72.0f);
    glVertex2f(-26.0f, 72.0f);
    glVertex2f(-32.5f,83.0f);
    glEnd();
    //2
     glColor3ub(205,133,63);
  glRectf(0,60,3,73);

   glBegin(GL_TRIANGLES);
    glColor3ub(0,128,0);
    glVertex2f(-5.0f, 72.0f);
    glVertex2f(7.0f, 72.0f);
    glVertex2f(0.0f,83.0f);
    glEnd();
    //3
    glColor3ub(205,133,63);
  glRectf(12,60,14,72);

   glBegin(GL_TRIANGLES);
    glColor3ub(0,128,0);
    glVertex2f(7.0f,72.0f);
    glVertex2f(15.0f, 84.0f);
    glVertex2f(20.5f,72.0f);
    glEnd();
    //4
     glColor3ub(205,133,63);
  glRectf(23,60,25,72);

   glBegin(GL_TRIANGLES);
    glColor3ub(0,128,0);
    glVertex2f(19.0f,72.0f);
    glVertex2f(23.0f, 82.0f);
    glVertex2f(28.5f,72.0f);
    glEnd();
    //5
    glColor3ub(205,133,63);
  glRectf(110,60,112,74);

   glBegin(GL_TRIANGLES);
    glColor3ub(0,128,0);
    glVertex2f(106.0f,74.0f);
    glVertex2f(111.0f, 83.0f);
    glVertex2f(115.5f,74.0f);

    glEnd();
    //6
    glColor3ub(205,133,63);
  glRectf(120,60,121,85);



    glColor3ub(222,184,135);

   DrawCircle(120, 85, 5, 3, 500);

    glColor3ub(0,128,0);

   DrawCircle(120, 89,7, 6, 100);

   //7

    glColor3ub(205,133,63);
  glRectf(-117,60,-115,78);

  glColor3ub(0,128,0);

   DrawCircle(-116, 80,7, 6, 100);

   //8
glColor3ub(205,133,63);
  glRectf(-87,60,-85,78);

  glColor3ub(0,128,0);

   DrawCircle(-85, 80,8, 6, 100);



//1
  glBegin(GL_TRIANGLES);
    glColor3ub(34,139,34);
    glVertex2f(-125.0f, 60.0f);
    glVertex2f(-105.0f, 80.0f);
    glVertex2f(-85.0f,60.0f);
    glEnd();
    //2
     glBegin(GL_TRIANGLES);
    glColor3ub(34,139,34);
    glVertex2f(-85.0f, 60.0f);
    glVertex2f(-65.0f, 80.0f);
    glVertex2f(-30.0f,60.0f);
    glEnd();

    //3

     glBegin(GL_TRIANGLES);
    glColor3ub(34,139,34);
    glVertex2f(-32.0f, 60.0f);
    glVertex2f(-15.0f, 75.0f);
    glVertex2f(-5.0f,60.0f);
    glEnd();
//4
glBegin(GL_TRIANGLES);
    glColor3ub(34,139,34);
    glVertex2f(-7.0f, 60.0f);
    glVertex2f(8.0f, 70.0f);
    glVertex2f(12.0f,60.0f);
    glEnd();




////RIVER

glBegin(GL_POLYGON);
   glColor3ub(139,69,19);
    glVertex2f(-45.0f,-100.0f);
    glVertex2f(-25.0f,-80.0f);
    glVertex2f(0.0f,-60.0f);
    glVertex2f(15.0f,-50.0f);
    glVertex2f(20.0f,-20.0f);
    glVertex2f(45.0f,-10.0f);
    glVertex2f(55.0f,5.0f);
     glVertex2f(75.0f,10.0f);
    glVertex2f(85.0f,5.0f);
    glVertex2f(125.0f,15.0f);
    glVertex2f(125.0f,-5.0f);
    glVertex2f(105.0f,-30.0f);
    glVertex2f(90.0f,-50.0f);
    glVertex2f(80.0f,-70.0f);
    glVertex2f(65.0f,-75.0f);
    glVertex2f(85.0f,-90.0f);
    glVertex2f(70.0f,-100.0f);
     glVertex2f(-45.0f,-100.0f);

    glEnd();

    glBegin(GL_POLYGON);
   glColor3ub(0,0,139);
    glVertex2f(-43.0f,-100.0f);
    glVertex2f(-22.0f,-80.0f);
    glVertex2f(2.0f,-60.0f);
    glVertex2f(17.0f,-50.0f);
    glVertex2f(22.0f,-20.0f);
    glVertex2f(47.0f,-10.0f);
    glVertex2f(57.0f,5.0f);
     glVertex2f(76.0f,8.0f);
    glVertex2f(83.0f,3.0f);
    glVertex2f(123.0f,15.0f);
    glVertex2f(127.0f,-5.0f);
    glVertex2f(103.0f,-30.0f);
    glVertex2f(86.0f,-56.0f);
    glVertex2f(83.0f,-68.0f);
    glVertex2f(66.0f,-73.0f);
    glVertex2f(87.0f,-89.0f);
    glVertex2f(72.0f,-100.0f);
     glVertex2f(-45.0f,-100.0f);


    glEnd();
    //road 2
     glBegin(GL_QUADS);
    glColor3ub	(0,0,0);
    glVertex2f(80,-100);
    glVertex2f(105,-100);
    glVertex2f(125, -40);
    glVertex2f(125, -3);
    glEnd();





    glColor3ub	(105,105,105);
     glRectf(90,-80,92,-75);

    //boat
    glColor3ub(0,0,0);
    glRectf(-10,-90,0,-85);
     glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(-10.0f, -90.0f);
    glVertex2f(-20.0f, -83.0f);
    glVertex2f(-10.0f,-85.0f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(0.0f, -85.0f);
    glVertex2f(0.0f, -90.0f);
    glVertex2f(8.0f,-83.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(178,34,34);
    glVertex2f(-10.0f, -85.0f);
    glVertex2f(-5.0f, -80.0f);
    glVertex2f(0.0f,-85.0f);
    glEnd();
    //2
      glColor3ub(0,0,0);
    glRectf(-10,-80,0,-75);
     glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(-10.0f, -80.0f);
    glVertex2f(-20.0f, -73.0f);
    glVertex2f(-10.0f,-75.0f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(0.0f, -75.0f);
    glVertex2f(0.0f, -80.0f);
    glVertex2f(8.0f,-73.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(178,34,34);
    glVertex2f(-10.0f, -75.0f);
    glVertex2f(-5.0f, -70.0f);
    glVertex2f(0.0f,-75.0f);
    glEnd();

    //3
glColor3ub(0,0,0);
    glRectf(-10,-70,0,-65);
     glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(-10.0f, -70.0f);
    glVertex2f(-20.0f, -63.0f);
    glVertex2f(-10.0f,-65.0f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(0.0f, -65.0f);
    glVertex2f(0.0f, -70.0f);
    glVertex2f(8.0f,-63.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(178,34,34);
    glVertex2f(-10.0f, -65.0f);
    glVertex2f(-5.0f, -60.0f);
    glVertex2f(0.0f,-65.0f);
    glEnd();


     glBegin(GL_LINES);

   glColor3ub(0,0,0);
    glVertex2f(-20,-90);
    glVertex2f(-20, -60);
     glEnd();


//road line
    glBegin(GL_LINES);

   glColor3ub(255,255,255);
    glVertex2f(95,-95);
    glVertex2f(105, -70);
    glVertex2f(107, -65);
    glVertex2f(120, -30);
    glEnd();

 //sun

    glColor3ub(224,255,255);

   DrawCircle(90, 85, 10, 10, 500);


   //tree
     glColor3ub(205,133,63);
  glRectf(-31,-80,-33,-72);

   glBegin(GL_TRIANGLES);
    glColor3ub(0,128,0);
    glVertex2f(-36.0f,-72.0f);
    glVertex2f(-31.0f, -60.0f);
    glVertex2f(-28.5f,-72.0f);
    glEnd();
     glColor3ub(205,133,63);
  glRectf(-21,-70,-23,-62);

   glBegin(GL_TRIANGLES);
    glColor3ub(0,128,0);
    glVertex2f(-26.0f,-62.0f);
    glVertex2f(-21.0f, -48.0f);
    glVertex2f(-18.5f,-62.0f);
    glEnd();
    glColor3ub(205,133,63);
  glRectf(-11,-60,-13,-52);

   glBegin(GL_TRIANGLES);
    glColor3ub(0,128,0);
    glVertex2f(-16.0f,-52.0f);
    glVertex2f(-11.0f, -40.0f);
    glVertex2f(-8.5f,-52.0f);

    glEnd();glColor3ub(205,133,63);
  glRectf(-3,-50,-5,-40);

   glBegin(GL_TRIANGLES);
    glColor3ub(0,128,0);
    glVertex2f(-8.0f,-40.0f);
    glVertex2f(-3.0f, -28.0f);
    glVertex2f(0.5f,-40.0f);
    glEnd();

    //CAR

    glBegin(GL_QUADS);
    glColor3ub(175,238,238);
    glVertex2f(95,-90);
    glVertex2f(100,-93);
    glVertex2f(107, -75);
    glVertex2f(104, -74);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(127,255,212);
    glVertex2f(95,-90);
    glVertex2f(93,-85);
    glVertex2f(97, -78);
    glVertex2f(102, -78);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(47,79,79);
    glVertex2f(95,-83);
    glVertex2f(96,-85);
    glVertex2f(95, -81.5);
    glVertex2f(96, -82);
    glEnd();


     glColor3ub(0,0,0);
    DrawCircle(102, -87, 1.5, 1.5, 500);
    glColor3ub(0,0,0);
    DrawCircle(106, -79, 1.5, 1.5, 500);


    //grass


     glBegin(GL_TRIANGLES);
    glColor3ub(34,139,34);
    glVertex2f(108.0f,-100.0f);
    glVertex2f(110.0f, -90.0f);
    glVertex2f(110.5f,-100.0f);
    glEnd();
     glBegin(GL_TRIANGLES);
    glColor3ub(34,139,34);
    glVertex2f(110.0f,-100.0f);
    glVertex2f(115.0f, -88.0f);
    glVertex2f(115.5f,-100.0f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(34,139,34);
    glVertex2f(116.0f,-100.0f);
    glVertex2f(120.0f, -85.0f);
    glVertex2f(120.5f,-100.0f);
    glEnd();

    glColor3ub(205,133,63);
  glRectf(121,-79,123,-65);
   glBegin(GL_TRIANGLES);
    glColor3ub(0,128,0);
    glVertex2f(118.0f,-65.0f);
    glVertex2f(121.0f, -55.0f);
    glVertex2f(125.5f,-65.0f);
    glEnd();

    glColor3ub(205,133,63);
  glRectf(120,-90,122,-80);
   glBegin(GL_TRIANGLES);
    glColor3ub(0,128,0);
    glVertex2f(117.0f,-80.0f);
    glVertex2f(125.0f, -80.0f);
    glVertex2f(121.5f,-70.0f);
    glEnd();


    //field
    glColor3ub(244,164,96);
    glRectf(60,43,95,57);
    //crops
     glColor3ub(0,128,0);
    DrawCircle(64, 46, 1, 1, 500);
    glColor3ub(0,128,0);
    DrawCircle(68, 46, 1, 1, 500);

     glColor3ub(0,128,0);
    DrawCircle(72, 46, 1, 1, 500);
     glColor3ub(0,128,0);
    DrawCircle(76, 46, 1, 1, 500);
    glColor3ub(0,128,0);
    DrawCircle(80, 46, 1, 1, 500);
     glColor3ub(0,128,0);
    DrawCircle(84, 46, 1, 1, 500);
     glColor3ub(0,128,0);
    DrawCircle(88, 46, 1, 1, 500);
    glColor3ub(0,128,0);
    DrawCircle(92, 46, 1, 1, 500);
    //2
    glColor3ub(0,128,0);
    DrawCircle(64, 50, 1, 1, 500);
    glColor3ub(0,128,0);
    DrawCircle(68, 50, 1, 1, 500);

     glColor3ub(0,128,0);
    DrawCircle(72, 50, 1, 1, 500);
     glColor3ub(0,128,0);
    DrawCircle(76, 50, 1, 1, 500);
    glColor3ub(0,128,0);
    DrawCircle(80, 50, 1, 1, 500);
     glColor3ub(0,128,0);
    DrawCircle(84, 50, 1, 1, 500);
     glColor3ub(0,128,0);
    DrawCircle(88, 50, 1, 1, 500);
    glColor3ub(0,128,0);
    DrawCircle(92, 50, 1, 1, 500);

    //3
     glColor3ub(0,128,0);
    DrawCircle(64, 54, 1, 1, 500);
    glColor3ub(0,128,0);
    DrawCircle(68, 54, 1, 1, 500);

     glColor3ub(0,128,0);
    DrawCircle(72, 54, 1, 1, 500);
     glColor3ub(0,128,0);
    DrawCircle(76, 54, 1, 1, 500);
    glColor3ub(0,128,0);
    DrawCircle(80, 54, 1, 1, 500);
     glColor3ub(0,128,0);
    DrawCircle(84, 54, 1, 1, 500);
     glColor3ub(0,124,0);
    DrawCircle(88, 54, 1, 1, 500);
    glColor3ub(0,128,0);
    DrawCircle(92, 54, 1, 1, 500);



//CLOUD

  glPushMatrix();
    glTranslatef(cspin,0,0);
    cmov();

  glColor3ub(192,192,192);
    DrawCircle(65, 86, 5, 9, 500);


    DrawCircle(65, 80, 10, 5, 500);


    DrawCircle(60, 80,8, 10, 500);

    DrawCircle(55, 87,6, 12, 500);


    DrawCircle(53, 80,12, 6, 500);
    glPopMatrix();

    //pond
  glColor3ub	(0,0,139);

   DrawCircle(-75, 50, 18, 8, 500);

   glColor3ub(65,105,225);

   DrawCircle(-75, 50, 17, 7, 500);

   //BIRD
   //pakhi 1//
    glPushMatrix();
    glTranslatef(spin,5,0);
    mov();
      glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(-120.0f,90.0f);
    glVertex2f(-116.0f,87.0f);
    glVertex2f(-105.0f,85.0f);
    glVertex2f(-99.0f,90.0f);


 glEnd();

       glBegin(GL_POLYGON);

    glVertex2f(-111.0f,90.0f);
    glVertex2f(-116.0f,95.0f);
    glVertex2f(-110.0f,92.0f);
    glVertex2f(-111.0f,97.0f);
    glVertex2f(-103.0f,90.0f);

 glEnd();

DrawCircle(-101, 90, 1, 0.5, 500);

//pakhi2//
      glBegin(GL_POLYGON);
    glColor3ub(0,0,255);
    glVertex2f(-97.0f,82.0f);
    glVertex2f(-92.0f,79.0f);
    glVertex2f(-81.0f,77.0f);
    glVertex2f(-76.0f,82.0f);


 glEnd();

       glBegin(GL_POLYGON);

    glVertex2f(-87.0f,80.0f);
    glVertex2f(-92.0f,86.0f);
    glVertex2f(-86.0f,84.0f);
    glVertex2f(-87.0f,89.0f);
    glVertex2f(-82.0f,82.0f);

 glEnd();

DrawCircle(-78, 82, 1, 0.5, 500);



//pakhi3//
      glBegin(GL_POLYGON);
    glColor3ub(0,255,255);
    glVertex2f(5.0f,85.0f);
    glVertex2f(9.5f,82.0f);
    glVertex2f(21.0f,80.0f);
    glVertex2f(26.0f,85.0f);


 glEnd();

       glBegin(GL_POLYGON);

    glVertex2f(16.0f,85.0f);
    glVertex2f(10.0f,89.0f);
    glVertex2f(17.0f,87.0f);
    glVertex2f(16.0f,92.0f);
    glVertex2f(22.0f,85.0f);

 glEnd();

DrawCircle(24, 85, 1, 0.5, 500);
   //pakhi4//
      glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(-45.0f,87.0f);
    glVertex2f(-50.0f,90.0f);
    glVertex2f(-30.0f,90.0f);
    glVertex2f(-35.0f,85.0f);


 glEnd();

       glBegin(GL_POLYGON);

    glVertex2f(-40.0f,90.0f);
    glVertex2f(-45.0f,95.0f);
    glVertex2f(-41.0f,93.0f);
    glVertex2f(-40.0f,95.0f);
    glVertex2f(-35.0f,90.0f);

 glEnd();

DrawCircle(-32, 90, 1, 0.5, 500);

glPopMatrix();

//cricket playground
glColor3ub(0,255,0);
   DrawCircle(-20, -10, 25, 20, 500);

    glColor3ub(205,133,63);
    glRectf(-25,-25,-15,0);

   glColor3ub(255,248,220);
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2i(-27, -20);
     glVertex2i(-13, -20);

     glVertex2i(-27, -2);
     glVertex2i(-13, -2);
   glEnd();


   //train
    glLineWidth(5);
     glBegin(GL_LINES);

    glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(-125,20);
    glVertex2f(125, 20);

    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-125, 30);
    glVertex2f(125, 30);
    glEnd();
    int i = 0;
    glColor3f(0.3, 0.3, 0.3);
    glBegin(GL_QUADS);
    for (i = -135;i <= 125;i = i + 15) {

        glVertex2d(i, 18);
        glVertex2d(i + 5, 18);
        glVertex2d(i + 20, 32);
        glVertex2d(i + 25, 32);



    }
     glEnd();
     //boggy

     glPushMatrix();
     glTranslatef(tx,ty,0);

     for (int j = -125;j <= -25;j = j + 23) {
      glBegin(GL_QUADS);
    glColor3ub(128,0,128);

        glVertex2d(j+10, 25);
        glVertex2d(j + 30, 25);
        glVertex2d(j + 30, 40);
        glVertex2d(j + 10, 40);

        glColor3f(0,0,0);
        glVertex2d(j + 30, 30);
        glVertex2d(j + 30, 35);

        glVertex2d(j + 35, 35);
        glVertex2d(j + 35, 30);


    glEnd();
     glColor3ub(0,0,0);
     DrawCircle(j+15, 23, 3, 3, 500);
     glColor3ub(0,0,0);
     DrawCircle(j+25, 23, 3, 3, 500);

     }
     //big boggy

    glColor3ub(51,0,51);

       glRectf(0,25,32,42);
    glColor3ub(51,0,51);
     DrawCircle(29, 33.5, 10, 8.5, 500);

       glColor3ub(72,61,139);
       glRectf(26,41,22,48);
       glColor3ub(169,169,169);
     DrawCircle(23, 50, 2, 2, 500);
       glColor3ub(169,169,169);
     DrawCircle(20, 55, 3, 2, 500);
     glColor3ub(169,169,169);
     DrawCircle(15, 60, 4, 3, 500);




       glColor3ub(0,0,0);
     DrawCircle(5, 23, 3, 3, 500);
     glColor3ub(0,0,0);
     DrawCircle(27, 23, 3, 3, 500);

     glPopMatrix();
     trainMove();



  glFlush();
}


void SpecialInput(int key, int x, int y)
{
switch(key)
{
case GLUT_KEY_UP:

 glutDisplayFunc(display);
break;
case GLUT_KEY_DOWN:

 glutDisplayFunc(display1);


break;

}
glutPostRedisplay();
}

int main(int argc, char** argv)
{

    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    glutInitWindowPosition(100, 100);

    glutInitWindowSize(1000, 600);

    glutCreateWindow("village view ");

    init();
    glutSpecialFunc(SpecialInput);

    glutDisplayFunc(display);

    glutMainLoop();
}




