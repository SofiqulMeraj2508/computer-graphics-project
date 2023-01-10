#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>

void init(void)
{
  glClearColor(0.0,0.0,0.0,0.0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
  glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
  glLoadIdentity();
  glOrtho(0.0, 0.80, 0.0, 0.80, -0.80,0.80);
  //gluOrtho2D(0.0,300.0,0.0,300.0); // Orthographic representation; multiply the current matrix by an orthographic matrix 2D= left right,bottom,top equivalent near=-1,far=1
}


void Draw()
{
 glClear(GL_COLOR_BUFFER_BIT);
 //road
   glColor3f( 0.1 ,0.1, 0.1);
   glBegin(GL_POLYGON);
   glVertex2f (0.0, 0.15 );
glVertex2f (0.0, 0.0);
glVertex2f (0.80, 0.00);
glVertex2f (0.80, 0.15);

   glEnd();
   glColor3f( 1 ,1, 1);
   glBegin(GL_POLYGON);
   glVertex2f (0.01, 0.07 );
    glVertex2f (0.00, 0.05);
    glVertex2f (0.10, 0.05);
    glVertex2f (0.11, 0.07);


   glEnd();
   glColor3f( 1 ,1, 1);
   glBegin(GL_POLYGON);
   glVertex2f (0.16, 0.07 );
    glVertex2f (0.15, 0.05);
    glVertex2f (0.25, 0.05);
    glVertex2f (0.26, 0.07);

    glEnd();

     glColor3f( 1 ,1, 1);
   glBegin(GL_POLYGON);
   glVertex2f (0.31, 0.07 );
    glVertex2f (0.30, 0.05);
    glVertex2f (0.40, 0.05);
    glVertex2f (0.41, 0.07);
    glEnd();


   glColor3f( 1 ,1, 1);
   glBegin(GL_POLYGON);
   glVertex2f (0.46, 0.07 );
    glVertex2f (0.45, 0.05);
    glVertex2f (0.55, 0.05);
    glVertex2f (0.56, 0.07);


   glEnd();

    glColor3f( 1 ,1, 1);
   glBegin(GL_POLYGON);
   glVertex2f (0.61, 0.07 );
    glVertex2f (0.60, 0.05);
    glVertex2f (0.70, 0.05);
    glVertex2f (0.71, 0.07);


   glEnd();
   glColor3f( 1 ,1, 1);
   glBegin(GL_POLYGON);
   glVertex2f (0.76, 0.07 );
    glVertex2f (0.75, 0.05);
    glVertex2f (0.80, 0.05);
    glVertex2f (0.80, 0.07);
    glEnd();
//soil
glColor3f( 0.5 ,0.5, 0.5);
   glBegin(GL_POLYGON);
   glVertex2f (0.0, 0.35 );
    glVertex2f (0.0, 0.15);
    glVertex2f (0.80, 0.15);
    glVertex2f (0.80, 0.35);
    glEnd();
    //sky
    glColor3f( 0.0 ,0.5, 1.0);
   glBegin(GL_POLYGON);
   glVertex2f (0.0, 0.80 );
    glVertex2f (0.0, 0.35);
    glVertex2f (0.80, 0.35);
    glVertex2f (0.80, 0.80);
    glEnd();
    //tree
     glColor3f( 0.1 ,0.1, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f (0.05, 0.22 );
    glVertex2f (0.05, 0.17);
    glVertex2f (0.08, 0.17);
    glVertex2f (0.08, 0.22);
    glEnd();

     glColor3f( 0.0 ,1.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f (0.07, 0.25 );
    glVertex2f (0.03, 0.22);
    glVertex2f (0.10, 0.22);

    glEnd();
    glColor3f( 0.0 ,1.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f (0.07, 0.27 );
    glVertex2f (0.04, 0.24);
    glVertex2f (0.095, 0.24);

    glEnd();
    glColor3f( 0.0 ,1.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f (0.07, 0.28 );
    glVertex2f (0.05, 0.26);
    glVertex2f (0.085, 0.26);
    glEnd();
//tree2
     glColor3f( 0.1 ,0.1, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f (0.15, 0.28 );
    glVertex2f (0.15, 0.20);
    glVertex2f (0.18, 0.20);
    glVertex2f (0.18, 0.28);
    glEnd();

     glColor3f( 0.0 ,1.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f (0.165, 0.32 );
    glVertex2f (0.11, 0.28);
    glVertex2f (0.22, 0.28);

    glEnd();
    glColor3f( 0.0 ,1.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f (0.165, 0.35 );
    glVertex2f (0.12, 0.31);
    glVertex2f (0.21, 0.31);

    glEnd();
    glColor3f( 0.0 ,1.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f (0.165, 0.39 );
    glVertex2f (0.13, 0.34);
    glVertex2f (0.20, 0.34);
    glEnd();

    //Market bass

    glColor3f( 0.1 ,0.5, 0.5);
   glBegin(GL_POLYGON);
   glVertex2f (0.30, 0.55 );
    glVertex2f (0.30, 0.17);
    glVertex2f (0.65, 0.17);
    glVertex2f (0.65, 0.55);
    glEnd();
    glColor3f( 0.1 ,0.5, 0.5);
   glBegin(GL_POLYGON);
   glVertex2f (0.65, 0.55 );
    glVertex2f (0.65, 0.17);
    glVertex2f (0.70, 0.20);
    glVertex2f (0.70, 0.60);
    glEnd();
    glColor3f( 0.1 ,0.5, 0.5);
   glBegin(GL_POLYGON);
   glVertex2f (0.35, 0.60 );
    glVertex2f (0.30, 0.55);
    glVertex2f (0.65, 0.55);
    glVertex2f (0.70, 0.60);
    glEnd();
    //build broad
    glColor3f( 1,1,1);
   glBegin(GL_POLYGON);
   glVertex2f (0.43, 0.58 );
    glVertex2f (0.43, 0.57);
    glVertex2f (0.45, 0.57);
    glVertex2f (0.45, 0.58);
    glEnd();

     glColor3f( 1,1,1);
   glBegin(GL_POLYGON);
   glVertex2f (0.55, 0.58 );
    glVertex2f (0.55, 0.57);
    glVertex2f (0.57, 0.57);
    glVertex2f (0.57, 0.58);
    glEnd();

     glColor3f( 1,1,1);
   glBegin(GL_POLYGON);
   glVertex2f (0.37, 0.65 );
    glVertex2f (0.37, 0.58);
    glVertex2f (0.63, 0.58);
    glVertex2f (0.63, 0.65);
    glEnd();
    //Door
     glColor3f( 1,0,0);
   glBegin(GL_POLYGON);
   glVertex2f (0.40, 0.30 );
    glVertex2f (0.40, 0.17);
    glVertex2f (0.55, 0.17);
    glVertex2f (0.55, 0.30);
    glEnd();
    //desing
     glColor3f( 1,1,1);
   glBegin(GL_POLYGON);
   glVertex2f (0.29, 0.38);
    glVertex2f (0.29, 0.36);
    glVertex2f (0.66, 0.36);
    glVertex2f (0.66, 0.38);
    glEnd();
    glColor3f( 1,1,1);
   glBegin(GL_POLYGON);
   glVertex2f (0.66, 0.38);
    glVertex2f (0.66, 0.36);
    glVertex2f (0.70, 0.37);
    glVertex2f (0.70, 0.39);
    glEnd();

    glColor3f( 1,1,1);
   glBegin(GL_POLYGON);
   glVertex2f (0.29, 0.44);
    glVertex2f (0.29, 0.42);
    glVertex2f (0.66, 0.42);
    glVertex2f (0.66, 0.44);
    glEnd();
    glColor3f( 1,1,1);
   glBegin(GL_POLYGON);
   glVertex2f (0.66, 0.44);
    glVertex2f (0.66, 0.42);
    glVertex2f (0.70, 0.43);
    glVertex2f (0.70, 0.45);
    glEnd();

     glColor3f( 1,1,1);
   glBegin(GL_POLYGON);
   glVertex2f (0.29, 0.50);
    glVertex2f (0.29, 0.48);
    glVertex2f (0.66, 0.48);
    glVertex2f (0.66, 0.50);
    glEnd();
    glColor3f( 1,1,1);
   glBegin(GL_POLYGON);
   glVertex2f (0.66, 0.50);
    glVertex2f (0.66, 0.48);
    glVertex2f (0.70, 0.49);
    glVertex2f (0.70, 0.51);
    glEnd();






















glutSwapBuffers();
}

int main(int argc,char **argv){


    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(0,0);
    glutInitWindowSize(500,500);
    glutCreateWindow("Lab Final");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}

