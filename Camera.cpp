
#include<stdlib.h>

#include<math.h>
#define GL_PI 3.1415f
GLint clicks=0;GLint flash=0,n;
GLfloat x,y,angle;
GLint movx = 0,movh=0,radm=25,radf=30,color=1;
//for cube variables
GLfloat vertices[8][3]={{-1.0,-1.0,-1.0},{1.0,-1.0,-1.0},{1.0,1.0,-1.0},{-1.0,1.0,-1.0},{-1.0,-1.0,1.0},{1.0,-1.0,1.0},{1.0,1.0,1.0},{-1.0,1.0,1.0}};
GLfloat theta[]={0.0,0.0,0.0};
GLint axis=2;
//for rain variables
float a=0.0,b=0.0,a1=0.0;
float p=0.0,q=0.0,xx=5.0;
int xt=100,yt=100;
void clickdown()
{
//For smaller click button
GLint x1=480.0+movx;
GLint y1=162.0+movx;
GLint x2=484.0+movx-5;
GLint y2=175.0+movx-6;
GLint x3=504.0+movx-5;
GLint y3=175.0+movx-5;
GLint x4=500.0+movx;
GLint y4=163.0+movx;
glColor3f(1.0,0.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(x1,y1);
glVertex2f(x2,y2);
glVertex2f(x3,y3);
glVertex2f(x4,y4);
glEnd();
glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex2f(483.0,164.0);
	glVertex2f(495.0,168.0);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex2f(483.5,168.0);
	glVertex2f(495.0,164.0);
	glEnd();
	}
void click()
{
	
	if(clicks==0)
{
	//flash button bigger code 
glColor3f(0.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(480.0,162.0);
glVertex2f(480.0,175.0);
glVertex2f(500.0,175.0);
glVertex2f(500.0,163.0);
glEnd();
glColor3f(0.0,0.0,1.0);
	glBegin(GL_LINES);
	glVertex2f(483.0,165.0);
	glVertex2f(495.0,173.0);
	glEnd();
	glColor3f(0.0,0.0,1.0);
	glBegin(GL_LINES);
	glVertex2f(483.5,173.0);
	glVertex2f(495.0,165.0);
	glEnd();
	//ends bigger button code
}
else 
	{
		clicks=1;
		clickdown();
	}

}
void display()

{
	glClear(GL_COLOR_BUFFER_BIT);
	//outer design starts
	glColor3f(0.0,1.0,1.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2.0f*GL_PI);angle+=(GL_PI/100.0f))
{
	x=07.0f*sin(angle)+50;
	y=07.0f*cos(angle)+50;
	glVertex2f(x,y);
	
}
glEnd();
glColor3f(0.0,1.0,1.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2.0f*GL_PI);angle+=(GL_PI/100.0f))
{
	x=08.0f*sin(angle)+50;
	y=08.0f*cos(angle)+85;
	glVertex2f(x,y);
	
}
glEnd();
glColor3f(0.0,1.0,1.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2.0f*GL_PI);angle+=(GL_PI/100.0f))
{
	x=09.0f*sin(angle)+50;
	y=09.0f*cos(angle)+120;
	glVertex2f(x,y);
	
}
glEnd();
glColor3f(0.0,1.0,1.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2.0f*GL_PI);angle+=(GL_PI/100.0f))
{
	x=10.0f*sin(angle)+50;
	y=10.0f*cos(angle)+155;
	glVertex2f(x,y);
	
}
glEnd();
glColor3f(0.0,1.0,1.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2.0f*GL_PI);angle+=(GL_PI/100.0f))
{
	x=11.0f*sin(angle)+50;
	y=11.0f*cos(angle)+190;
	glVertex2f(x,y);
	
}
glEnd();glColor3f(0.0,1.0,1.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2.0f*GL_PI);angle+=(GL_PI/100.0f))
{
	x=12.0f*sin(angle)+50;
	y=12.0f*cos(angle)+225;
	glVertex2f(x,y);
	
}
glEnd();glColor3f(0.0,1.0,1.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2.0f*GL_PI);angle+=(GL_PI/100.0f))
{
	x=06.0f*sin(angle)+50;
	y=06.0f*cos(angle)+20;
	glVertex2f(x,y);
	
}
glEnd();
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2.0f*GL_PI);angle+=(GL_PI/100.0f))
{
	x=10.0f*sin(angle)+100;
	y=10.0f*cos(angle)+20;
	glVertex2f(x,y);
	
}
glEnd();
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2.0f*GL_PI);angle+=(GL_PI/100.0f))
{
	x=9.5f*sin(angle)+190;
	y=9.5f*cos(angle)+20;
	glVertex2f(x,y);
	
}
glEnd();glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2.0f*GL_PI);angle+=(GL_PI/100.0f))
{
	x=9.0f*sin(angle)+280;
	y=9.0f*cos(angle)+20;
	glVertex2f(x,y);
	
}
glEnd();glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2.0f*GL_PI);angle+=(GL_PI/100.0f))
{
	x=8.5f*sin(angle)+370;
	y=8.5f*cos(angle)+20;
	glVertex2f(x,y);
	
}
glEnd();glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2.0f*GL_PI);angle+=(GL_PI/100.0f))
{
	x=8.0f*sin(angle)+460;
	y=8.0f*cos(angle)+20;
	glVertex2f(x,y);
	
}
glEnd();glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2.0f*GL_PI);angle+=(GL_PI/100.0f))
{
	x=7.0f*sin(angle)+550;
	y=7.0f*cos(angle)+20;
	glVertex2f(x,y);
	
}
glEnd();glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2.0f*GL_PI);angle+=(GL_PI/100.0f))
{
	x=6.0f*sin(angle)+640;
	y=6.0f*cos(angle)+20;
	glVertex2f(x,y);
	
}
glEnd();glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2.0f*GL_PI);angle+=(GL_PI/100.0f))
{
	x=5.0f*sin(angle)+730;
	y=5.0f*cos(angle)+20;
	glVertex2f(x,y);
	
}
glEnd();glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2.0f*GL_PI);angle+=(GL_PI/100.0f))
{
	x=4.0f*sin(angle)+820;
	y=4.0f*cos(angle)+20;
	glVertex2f(x,y);
	
}
glEnd();glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2.0f*GL_PI);angle+=(GL_PI/100.0f))
{
	x=3.0f*sin(angle)+900;
	y=3.0f*cos(angle)+20;
	glVertex2f(x,y);
	
}
glEnd();glColor3f(0.0,1.,1.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2.0f*GL_PI);angle+=(GL_PI/100.0f))
{
	x=10.0f*sin(angle)+900;
	y=10.0f*cos(angle)+47;
	glVertex2f(x,y);
	
}
glEnd();glColor3f(0.0,1.0,1.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2.0f*GL_PI);angle+=(GL_PI/100.0f))
{
	x=9.0f*sin(angle)+900;
	y=9.0f*cos(angle)+82;
	glVertex2f(x,y);
	
}
glEnd();glColor3f(0.0,1.0,1.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2.0f*GL_PI);angle+=(GL_PI/100.0f))
{
	x=8.0f*sin(angle)+900;
	y=8.0f*cos(angle)+117;
	glVertex2f(x,y);
	
}
glEnd();
glColor3f(0.0,1.0,1.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2.0f*GL_PI);angle+=(GL_PI/100.0f))
{
	x=07.0f*sin(angle)+900;
	y=07.0f*cos(angle)+152;
	glVertex2f(x,y);
	
}
glEnd();
glColor3f(0.0,1.0,1.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2.0f*GL_PI);angle+=(GL_PI/100.0f))
{
	x=06.0f*sin(angle)+900;
	y=06.0f*cos(angle)+187;
	glVertex2f(x,y);
	
}
glEnd();
glColor3f(0.0,1.0,1.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2.0f*GL_PI);angle+=(GL_PI/100.0f))
{
	x=05.0f*sin(angle)+900;
	y=05.0f*cos(angle)+210;
	glVertex2f(x,y);
	
}
glEnd();
glColor3f(0.0,1.0,1.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2.0f*GL_PI);angle+=(GL_PI/100.0f))
{
	x=04.0f*sin(angle)+900;
	y=04.0f*cos(angle)+230;
	glVertex2f(x,y);
	
}
glEnd();
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2.0f*GL_PI);angle+=(GL_PI/100.0f))
{
	x=09.0f*sin(angle)+845;
	y=09.0f*cos(angle)+230;
	glVertex2f(x,y);
	
}
glEnd();
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2.0f*GL_PI);angle+=(GL_PI/100.0f))
{
	x=08.5f*sin(angle)+755;
	y=08.5f*cos(angle)+230;
	glVertex2f(x,y);
	
}
glEnd();
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2.0f*GL_PI);angle+=(GL_PI/100.0f))
{
	x=8.0f*sin(angle)+665;
	y=8.0f*cos(angle)+230;
	glVertex2f(x,y);
	
}
glEnd();
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2.0f*GL_PI);angle+=(GL_PI/100.0f))
{
	x=07.5f*sin(angle)+575;
	y=07.5f*cos(angle)+230;
	glVertex2f(x,y);
	
}
glEnd();
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2.0f*GL_PI);angle+=(GL_PI/100.0f))
{
	x=06.0f*sin(angle)+485;
	y=06.0f*cos(angle)+230;
	glVertex2f(x,y);
	
}
glEnd();
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2.0f*GL_PI);angle+=(GL_PI/100.0f))
{
	x=05.0f*sin(angle)+395;
	y=05.0f*cos(angle)+230;
	glVertex2f(x,y);
	
}
glEnd();
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2.0f*GL_PI);angle+=(GL_PI/100.0f))
{
	x=04.0f*sin(angle)+305;
	y=04.0f*cos(angle)+230;
	glVertex2f(x,y);
	
}
glEnd();
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2.0f*GL_PI);angle+=(GL_PI/100.0f))
{
	x=03.5f*sin(angle)+215;
	y=03.5f*cos(angle)+230;
	glVertex2f(x,y);
	
}
glEnd();
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2.0f*GL_PI);angle+=(GL_PI/100.0f))
{
	x=03.0f*sin(angle)+125;
	y=03.0f*cos(angle)+230;
	glVertex2f(x,y);
	
}
glEnd();

	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex2f(25.0,09.0);
	glVertex2f(25.0,241.0);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.0,0.0,0.0);
	glVertex2f(25.0,241.0);
	glVertex2f(925.0,241.0);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex2f(925.0,241.0);
	glVertex2f(925.0,09.0);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex2f(925.0,09.0);
	glVertex2f(25.0,09.0);
glEnd();
glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex2f(70.0,30.0);
	glVertex2f(70.0,220.0);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.0,0.0,0.0);
	glVertex2f(70.0,220.0);
	glVertex2f(880.0,220.0);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex2f(880.0,220.0);
	glVertex2f(880.0,30.0);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex2f(880.0,30.0);
	glVertex2f(70.0,30.0);

glEnd();//outer design ends..
//camera-rectangle
glColor3f(0.0,1.0,1.0);
glBegin(GL_QUADS);
glVertex2f(330.0,90.0);
glVertex2f(330.0,150.0);
glVertex2f(515.0,160.0);
glVertex2f(515.0,100.0);
glEnd();//end
//line for camera
glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex2f(330.0,140.0);
	glVertex2f(515.0,150.0);
	glEnd();
	//bigger circle
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINE_LOOP);
for(angle=0.0f;angle<=(2.0f*GL_PI);angle+=(GL_PI/100.0f))
{
	x=20.0f*sin(angle)+425;
	y=17.0f*cos(angle)+128;
	glVertex2f(x,y);
	
}
glEnd();//smaller inner circle
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2.0f*GL_PI);angle+=(GL_PI/100.0f))
{
	x=12.0f*sin(angle)+425;
	y=13.0f*cos(angle)+130;
	glVertex2f(x,y);
	
}
glEnd();
//camera left eye.
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2.0f*GL_PI);angle+=(GL_PI/100.0f))
{
	x=04.0f*sin(angle)+375;
	y=04.0f*cos(angle)+135;
	glVertex2f(x,y);
	
}
glEnd();
//camera right eye.
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2.0f*GL_PI);angle+=(GL_PI/100.0f))
{
	x=04.0f*sin(angle)+475;
	y=04.0f*cos(angle)+140;
	glVertex2f(x,y);
	
}
glEnd();
//camera left hand
glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex2f(330.0,130.0);
	glVertex2f(300.0,128.0);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex2f(300.0,128.0);
	glVertex2f(290.0,100.0);
	glEnd();
glColor3f(0.0,1.0,1.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2.0f*GL_PI);angle+=(GL_PI/100.0f))
{
	x=04.0f*sin(angle)+290;
	y=04.0f*cos(angle)+98;
	glVertex2f(x,y);
	
}
glEnd();
//camera right hand
glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex2f(515.0,140.0);
	glVertex2f(545.0,142.0);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex2f(545.0,142.0);
	glVertex2f(555.0,168.0);
	glEnd();
glColor3f(0.0,1.0,1.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2.0f*GL_PI);angle+=(GL_PI/100.0f))
{
	x=04.0f*sin(angle)+555;
	y=04.0f*cos(angle)+168;
	glVertex2f(x,y);
	
}
glEnd();
//camera left leg
glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex2f(365.5,92.5);
	glVertex2f(365.5,70.0);
	glEnd();
glColor3f(0.0,1.0,1.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2.0f*GL_PI);angle+=(GL_PI/100.0f))
{
	x=08.0f*sin(angle)+372.5;
	y=01.0f*cos(angle)+70;
	glVertex2f(x,y);
	
}
glEnd();
	//camera right leg
glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex2f(480.5,98.5);
	glVertex2f(480.5,70.5);
	glEnd();
glColor3f(0.0,1.0,1.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2.0f*GL_PI);angle+=(GL_PI/100.0f))
{
	x=08.0f*sin(angle)+487;
	y=01.0f*cos(angle)+70;
	glVertex2f(x,y);
	
}
glEnd();



//mouth
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
for(angle=1.5f;angle<=(1.49*GL_PI);angle+=(GL_PI/360.0f))
{
	x=11.0f*sin(angle)+428;
	y=08.0f*cos(angle)+105;
	glVertex2f(x,y);
	
}
glEnd();


	glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(345.0,151.0);
glVertex2f(345.0,155.0);
glVertex2f(365.0,156.0);
glVertex2f(365.0,152.0);
glEnd();


	glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(480.0,158.0);
glVertex2f(480.0,162.0);
glVertex2f(500.0,163.0);
glVertex2f(500.0,159.0);
glEnd();
	//sc1
	glColor3f(0.0,1.0,0.0);
glBegin(GL_LINE_LOOP);
for(angle=0.0f;angle<=(2*GL_PI);angle+=(GL_PI/360.0f))
{
	x=03.0f*sin(angle)+445;
	y=01.0f*cos(angle)+175;
	glVertex2f(x,y);
	
}
glEnd();//sc2
glColor3f(0.0,0.0,1.0);
glBegin(GL_LINE_LOOP);
for(angle=0.0f;angle<=(2*GL_PI);angle+=(GL_PI/360.0f))
{
	x=03.0f*sin(angle)+425;
	y=01.0f*cos(angle)+182;
	glVertex2f(x,y);
	
}
glEnd();
//sc3
glColor3f(1.0,0.0,.0);
glBegin(GL_LINE_LOOP);
for(angle=0.0f;angle<=(2*GL_PI);angle+=(GL_PI/360.0f))
{
	x=02.0f*sin(angle)+465;
	y=01.0f*cos(angle)+170;
	glVertex2f(x,y);
	
}
glEnd();
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINE_LOOP);
for(angle=1.5f;angle<=(2.5*GL_PI);angle+=(GL_PI/360.0f))
{
	x=65.0f*sin(angle)+360;
	y=10.0f*cos(angle)+195;
	glVertex2f(x,y);
	
}
glEnd();


//char c[10]="Smile";
glRasterPos2f(320,195);
//for(i=0;i!='\0';i++)

	glutBitmapCharacter(GLUT_BITMAP_9_BY_15,'S');
	glRasterPos2f(340,195);
	glutBitmapCharacter(GLUT_BITMAP_9_BY_15,'M');
	glRasterPos2f(355,195);
	glutBitmapCharacter(GLUT_BITMAP_9_BY_15,'I');
	glRasterPos2f(370,195);
	glutBitmapCharacter(GLUT_BITMAP_9_BY_15,'L');
	glRasterPos2f(385,195);
	glutBitmapCharacter(GLUT_BITMAP_9_BY_15,'E');

	click();
glFlush();
}
//END OF DESIGH OF THE CAMERA
void *currentfont;

void setfont(void *font)
{
	currentfont = font;
}
void writetext(float x,float y,char *string)	//font function
{
	char *c;
	glRasterPos2i(x, y);
	for(c = string; *c != '\0'; c++)
	{	
		glutBitmapCharacter(currentfont, *c);
	}
}
//START OF SMILEY FUNCTION
void drawsmiley()
{
	glClear(GL_COLOR_BUFFER_BIT);
	//glClearColor(1.0,1.0,1.0,0.0);
	glColor3f(1.0,1.0,0.0);
	glPushMatrix();
	glTranslatef(0,0,0);
	//glScalef(0,0,0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2*GL_PI);angle+=(GL_PI/100.0f))
{
	x=65.0f*sin(angle)+450;
	y=27.0f*cos(angle)+130;
	glVertex2f(x,y);
	
}
glEnd();
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2*GL_PI);angle+=(GL_PI/100.0f))
{
	x=06.0f*sin(angle)+420;
	y=04.0f*cos(angle)+140;
	glVertex2f(x,y);
	
}
glEnd();
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2*GL_PI);angle+=(GL_PI/100.0f))
{
	x=06.0f*sin(angle)+480;
	y=04.0f*cos(angle)+140;
	glVertex2f(x,y);
	
}
glEnd();
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
for(angle=1.5f;angle<=(1.52*GL_PI);angle+=(GL_PI/360.0f))
{
	x=25.0f*sin(angle)+450;
	y=10.0f*cos(angle)+122;
	glVertex2f(x,y);
	
}
glEnd();
glPopMatrix();
glColor3f(0, 1, 0);
	setfont(GLUT_BITMAP_TIMES_ROMAN_24);
	writetext(20, 240, "Right Mouse click to Zoomin,Zoomout and to change Color.               ");
		glFlush();
}


void mouse(int btn, int state, int, int)
{
	if(btn == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
	clicks=1;
	clickdown();
	}
	glutPostRedisplay();
	
}
void drawsmiley1()
{//int r=1,g=1,b=0;
glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1,1,0);
	glPushMatrix();
	glTranslatef(-500,-100,0);
	glScalef(2,2,0);
	glBegin(GL_POLYGON);

for(angle=0.0f;angle<=(2*GL_PI);angle+=(GL_PI/100.0f))
{
	x=65.0f*sin(angle)+450;
	y=27.0f*cos(angle)+130;
	glVertex2f(x,y);
	
}
glEnd();
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2*GL_PI);angle+=(GL_PI/100.0f))
{
	x=06.0f*sin(angle)+420;
	y=04.0f*cos(angle)+140;
	glVertex2f(x,y);
	
}
glEnd();
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2*GL_PI);angle+=(GL_PI/100.0f))
{
	x=06.0f*sin(angle)+480;
	y=04.0f*cos(angle)+140;
	glVertex2f(x,y);
	
}
glEnd();
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
for(angle=1.5f;angle<=(1.52*GL_PI);angle+=(GL_PI/360.0f))
{
	x=25.0f*sin(angle)+450;
	y=10.0f*cos(angle)+122;
	glVertex2f(x,y);
	
}
glEnd();
glPopMatrix();
}

void drawsmiley2()
{//int r=1,g=1,b=0;
glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1,1,0);
	glPushMatrix();
	glTranslatef(360,100,0);
	glScalef(0.2,.2,0);
	glBegin(GL_POLYGON);

for(angle=0.0f;angle<=(2*GL_PI);angle+=(GL_PI/100.0f))
{
	x=65.0f*sin(angle)+450;
	y=27.0f*cos(angle)+130;
	glVertex2f(x,y);
	
}
glEnd();
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2*GL_PI);angle+=(GL_PI/100.0f))
{
	x=06.0f*sin(angle)+420;
	y=04.0f*cos(angle)+140;
	glVertex2f(x,y);
	
}
glEnd();
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2*GL_PI);angle+=(GL_PI/100.0f))
{
	x=06.0f*sin(angle)+480;
	y=04.0f*cos(angle)+140;
	glVertex2f(x,y);
	
}
glEnd();
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
for(angle=1.5f;angle<=(1.52*GL_PI);angle+=(GL_PI/360.0f))
{
	x=25.0f*sin(angle)+450;
	y=10.0f*cos(angle)+122;
	glVertex2f(x,y);
	
}
glEnd();
glPopMatrix();
}

void drawsmileycolor()
{ GLint r=1,g=0,b=0;
glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(r,g,b);
	glPushMatrix();
	glTranslatef(0,0,0);
	//glScalef(0.2,.2,0);
	glBegin(GL_POLYGON);

for(angle=0.0f;angle<=(2*GL_PI);angle+=(GL_PI/100.0f))
{
	x=65.0f*sin(angle)+450;
	y=27.0f*cos(angle)+130;
	glVertex2f(x,y);
	
}
glEnd();
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2*GL_PI);angle+=(GL_PI/100.0f))
{
	x=06.0f*sin(angle)+420;
	y=04.0f*cos(angle)+140;
	glVertex2f(x,y);
	
}
glEnd();
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
for(angle=0.0f;angle<=(2*GL_PI);angle+=(GL_PI/100.0f))
{
	x=06.0f*sin(angle)+480;
	y=04.0f*cos(angle)+140;
	glVertex2f(x,y);
	
}
glEnd();
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
for(angle=1.5f;angle<=(1.52*GL_PI);angle+=(GL_PI/360.0f))
{
	x=25.0f*sin(angle)+450;
	y=10.0f*cos(angle)+122;
	glVertex2f(x,y);
	
}
glEnd();
glPopMatrix();
}
void zoomin()
{
drawsmiley1();
glFlush();
}
void zoomout()
{
drawsmiley2();
glFlush();
}
void color1()
{
drawsmileycolor();
	glFlush();
}
void topmenu1(int b)
{
	switch(b)
	{
	case 0:zoomin();
		break;
	case 1:zoomout();
		break;
	case 2:color1();
		break;
	}
}
void createmen1(void)
{
glutCreateMenu(topmenu1);
glutAddMenuEntry("Zoomin",0);
glutAddMenuEntry("zoomout",1);
glutAddMenuEntry("color",2);
glutAttachMenu(GLUT_RIGHT_BUTTON);
//init();
}
void init()
{
	glClearColor(1.0,1.0,1.0,0.0);
	glPointSize(5.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,950.0,0.0,250.00);
}
void smiley()
{
clicks=1;
if(clicks==1)
{
clickdown();
}
glutPostRedisplay();
glutInitWindowSize(500, 500);
glutInitWindowPosition(10, 10);
glutCreateWindow("Smiley");
glutDisplayFunc(drawsmiley);
init();
glClear(GL_COLOR_BUFFER_BIT);
createmen1();
}
//END OF SMILEY CODE
//START OF HOUSE CODE
void drawshouse()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_TRIANGLES);
	
	glVertex2f(420.0,140.0);
	glVertex2f(460.0,170.0);
	glVertex2f(500.0,140.0);
	glEnd();
	glColor3f(0.0,1.0,0.0);
	glBegin(GL_QUADS);
	glVertex2f(420.0,100.0);
	glVertex2f(420.0,140.0);
	glVertex2f(500.0,140.0);
	glVertex2f(500.0,100.0);
	glEnd();
	glColor3f(1.0,1.0,0.0);
	glBegin(GL_QUADS);
	glVertex2f(450.0,100.0);
	glVertex2f(450.0,110.0);
	glVertex2f(470.0,110.0);
	glVertex2f(470.0,100.0);
	glEnd();
 glColor3f(0, 1, 0);
	setfont(GLUT_BITMAP_TIMES_ROMAN_24);
	writetext(20, 240, "Right Mouse click to Zoomin,Zoomout and to change Color. ");
glFlush();
}
void drawshouse1()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,0.0);
	glPushMatrix();
	glTranslatef(-500,-100,0);
	glScalef(2,2,0);
	glBegin(GL_TRIANGLES);
	
	glVertex2f(420.0,140.0);
	glVertex2f(460.0,170.0);
	glVertex2f(500.0,140.0);
	glEnd();
	glColor3f(0.0,1.0,0.0);
	glBegin(GL_QUADS);
	glVertex2f(420.0,100.0);
	glVertex2f(420.0,140.0);
	glVertex2f(500.0,140.0);
	glVertex2f(500.0,100.0);
	glEnd();
	glColor3f(1.0,1.0,0.0);
	glBegin(GL_QUADS);
	glVertex2f(450.0,100.0);
	glVertex2f(450.0,110.0);
	glVertex2f(470.0,110.0);
	glVertex2f(470.0,100.0);
	glEnd();
	glPopMatrix();
	glFlush();
//glutSwapBuffers();
}
void drawshouse2()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,0.0);
	glPushMatrix();
	glTranslatef(360,100,0);
	glScalef(0.2,.2,0);
	glBegin(GL_TRIANGLES);
	
	glVertex2f(420.0,140.0);
	glVertex2f(460.0,170.0);
	glVertex2f(500.0,140.0);
	glEnd();
	glColor3f(0.0,1.0,0.0);
	glBegin(GL_QUADS);
	glVertex2f(420.0,100.0);
	glVertex2f(420.0,140.0);
	glVertex2f(500.0,140.0);
	glVertex2f(500.0,100.0);
	glEnd();
	glColor3f(1.0,1.0,0.0);
	glBegin(GL_QUADS);
	glVertex2f(450.0,100.0);
	glVertex2f(450.0,110.0);
	glVertex2f(470.0,110.0);
	glVertex2f(470.0,100.0);
	glEnd();
	glPopMatrix();
	//glFlush();
//glutSwapBuffers();
}
void drawhousecolor()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0,1.2,1.0);
	glBegin(GL_TRIANGLES);
	
	glVertex2f(420.0,140.0);
	glVertex2f(460.0,170.0);
	glVertex2f(500.0,140.0);
	glEnd();
	glColor3f(1.8,1.6,0.0);
	glBegin(GL_QUADS);
	glVertex2f(420.0,100.0);
	glVertex2f(420.0,140.0);
	glVertex2f(500.0,140.0);
	glVertex2f(500.0,100.0);
	glEnd();
	glColor3f(1.0,0.8,0.5);
	glBegin(GL_QUADS);
	glVertex2f(450.0,100.0);
	glVertex2f(450.0,110.0);
	glVertex2f(470.0,110.0);
	glVertex2f(470.0,100.0);
	glEnd();
	glFlush();
glutSwapBuffers();
}
void zoomin1()
{
drawshouse1();
glFlush();
}
void zoomout2()
{
drawshouse2();
glFlush();
}
void color2()
{
drawhousecolor();
	glFlush();
}
void topmenu2(int b)
{
	switch(b)
	{
	case 0:zoomin1();
		break;
	case 1:zoomout2();
		break;
	case 2:color2();
		break;
	}
}
void createmen2(void)
{
glutCreateMenu(topmenu2);
glutAddMenuEntry("Zoomin",0);
glutAddMenuEntry("zoomout",1);
glutAddMenuEntry("color",2);
glutAttachMenu(GLUT_RIGHT_BUTTON);
}
void house()
{
clicks=1;
if(clicks==1)
{
clickdown();
}
glutPostRedisplay();
glutInitWindowSize(500, 500);
glutInitWindowPosition(10, 10);
glutCreateWindow("house");
glutDisplayFunc(drawshouse);
init();
glClear(GL_COLOR_BUFFER_BIT);
createmen2();
}
//END OF HOUSE CODE
//CODE FOR ROTATION OF THE CUBE
void polygon(int a,int b,int c,int d)
{
	glBegin(GL_POLYGON);
	glColor3fv(vertices[a]);
	glNormal3fv(vertices[a]);
	glVertex3fv(vertices[a]);
	glColor3fv(vertices[b]);
	glNormal3fv(vertices[b]);
	glVertex3fv(vertices[b]);
glColor3fv(vertices[c]);
	glNormal3fv(vertices[c]);
	glVertex3fv(vertices[c]);
glColor3fv(vertices[d]);
	glNormal3fv(vertices[d]);
	glVertex3fv(vertices[d]);
	glEnd();
}
void colorcube(void)
{
	polygon(0,3,2,1);
	polygon(2,3,7,6);
	polygon(0,4,7,3);
	polygon(1,2,6,5);
	polygon(4,5,6,7);
	polygon(0,1,5,4);
}
void myreshape(int w,int h)
{
	glViewport(0,0,w,h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	if(w<=h)
		glOrtho(-2.0,2.0,-2.0*(GLfloat)h/(GLfloat)w,2.0*(GLfloat)h/(GLfloat)w,-10.0,10.0);
	else
		glOrtho(-2.0*(GLfloat)h/(GLfloat)w,2.0*(GLfloat)h/(GLfloat)w,-2.0,2.0,-10.0,10.0);
	glMatrixMode(GL_MODELVIEW);
}
void display2(void)
{
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glRotatef(theta[0],1.0,0.0,0.0);
	glRotatef(theta[1],0.0,1.0,0.0);
	glRotatef(theta[2],0.0,0.0,1.0);
	colorcube();
	glutSwapBuffers();
}
void spincube1()
{
	theta[axis]+=0.05;
	if(theta[axis]>360.0)
		theta[axis]-=360.0;
	glutPostRedisplay();
}
void mouse1(int btn,int state,int,int)
{
	if(btn==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
		axis=0;
	if(btn==GLUT_MIDDLE_BUTTON && state==GLUT_DOWN)
		axis=1;	
	if(btn==GLUT_RIGHT_BUTTON && state==GLUT_DOWN)
		axis=2;
}	
void spincube()
{
clicks=1;
if(clicks==1)
{
clickdown();
}
glutPostRedisplay();
glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB|GLUT_DEPTH);
glutInitWindowSize(500, 500);
glutInitWindowPosition(10, 10);
glutCreateWindow("cube");
init();
glutReshapeFunc(myreshape);
glutDisplayFunc(display2);
glutIdleFunc(spincube1);
glutMouseFunc(mouse1);
glEnable(GL_DEPTH_TEST);
glutMainLoop();
}
//END OF SPIN CUBE CODE
//RAIN CODE STARTS....
void star(int xt,int yt)
{
    glBegin(GL_LINES);
    glVertex2f(xt,yt);
    glVertex2f(xt+25,yt+25);
    glEnd();
    
}

void mul_star()
{   
    glColor3f(0.64,0.86,0.82);
    //yt=1150;
    for(int i=0;i<=100;i++)
       
    {

    star((rand()%1200),(rand()%1200));
    //xt+=50;
    }
   }


void display3()
{
	glClear(GL_COLOR_BUFFER_BIT);
	mul_star();
	glutSwapBuffers();
	glFlush();
	glutPostRedisplay();
}
void thunder()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.88,0.87,0.86);
	glBegin(GL_LINE_LOOP);
	glVertex2f(200.0,100.0);
	glVertex2f(100.0,200.0);
	glVertex2f(200.0,400.0);
	glVertex2f(100.0,500.0);
	glVertex2f(200.0,600.0);
	glVertex2f(100.0,800.0);
	glVertex2f(210.0,600.0);
	glVertex2f(110.0,500.0);
	glVertex2f(210.0,400.0);
	glVertex2f(110.0,200.0);
	glVertex2f(200.0,100.0);
	glEnd();
	glFlush();
}

void update()
{
    p+=0.1;
    xx-=0.1;
    if(p>250)
  {
      xx=5;
	glClear(GL_COLOR_BUFFER_BIT);
  display3();
  }
glutPostRedisplay();
}

void cloud1()                   //cloud 
{
		//disp();
	glClear(GL_COLOR_BUFFER_BIT);
		glPushMatrix();
		glTranslatef(p,q,0);
	 glBegin(GL_POINTS);
	 glColor3f(0.64,0.64,0.64);
	float x1,y1,angle1;
	for(angle1=2.5;angle1<=(2*GL_PI);angle1+=(GL_PI/100.0))
	{
		x1=50.0*sin(angle1)+50;
		y1=50.0*cos(angle1)+600;
		glVertex2f(x1,y1);
	}
	glEnd();
glBegin(GL_POINTS);
	 glColor3f(0.64,0.64,0.64);
	float x2,y2,angle2;
	for(angle2=4.0;angle2<=(2.7*GL_PI);angle2+=(GL_PI/100.0))
	{
		x2=40.0*sin(angle2)+75;
		y2=40.0*cos(angle2)+675;
		glVertex2f(x2,y2);
	}
	glEnd();
  glBegin(GL_POINTS);
	 glColor3f(0.64,0.64,0.64);
	float x3,y3,angle3;
	for(angle3=0.0;angle3<=(1.3*GL_PI);angle3+=(GL_PI/100.0))
	{
		x3=40.0*sin(angle3)+100;
		y3=40.0*cos(angle3)+615;
		glVertex2f(x3,y3);
	}
	glEnd();
	glPopMatrix();
	
glPushMatrix();
	glTranslatef(xx,q,0);
	glBegin(GL_POINTS);
	 glColor3f(0.64,0.64,0.64);
	float x4,y4,angle4;
	for(angle4=2.0;angle4<=(2.3*GL_PI);angle4+=(GL_PI/100.0))
	{
		x4=40.0*sin(angle4)+695;
		y4=40.0*cos(angle4)+650;
		glVertex2f(x4,y4);
	}
	glEnd();
glBegin(GL_POINTS);
	 glColor3f(0.64,0.64,0.64);
	float x5,y5,angle5;
	for(angle5=2.0;angle5<=(1.8*GL_PI);angle5+=(GL_PI/100.0))
	{
		x5=40.0*sin(angle5)+760;
		y5=40.0*cos(angle5)+630;
		glVertex2f(x5,y5);
	}
	glEnd();


	glBegin(GL_POINTS);
	 glColor3f(0.64,0.64,0.64);
	float x6,y6,angle6;
	for(angle6=4.5;angle6<=(2.5*GL_PI);angle6+=(GL_PI/100.0))
	{
		x6=40.0*sin(angle6)+760;
		y6=40.0*cos(angle6)+685;
		glVertex2f(x6,y6);
	}
	glEnd();
	glBegin(GL_POINTS);
	 glColor3f(0.64,0.64,0.64);
	float x7,y7,angle7;
	for(angle7=0.0;angle7<=(1.2*GL_PI);angle7+=(GL_PI/100.0))
	{
		x7=40.0*sin(angle7)+795;
		y7=40.0*cos(angle7)+650;
		glVertex2f(x7,y7);
	}
	glEnd();
	glPopMatrix();
	update();
	glutSwapBuffers();
//glFlush();
}
void init1()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0.0,0.0,0.0,1.0);
	glPointSize(5.0);
	glLineWidth(5.0f);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,1000.0,0.0,1000.0);
}
void rain()
{
clicks=1;
if(clicks==1)
{
clickdown();
}
glutPostRedisplay();
glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
glutInitWindowSize(800, 800);
glutInitWindowPosition(10, 10);
glutCreateWindow("rain");
glutDisplayFunc(cloud1);
//glutDisplayFunc(display3);
init1();
//glutMainLoop();
}


void menu(int val)
{
	switch(val)
	{
	case 1:smiley();
		break;
	case 2:house();
		break;
	case 3:spincube();
		break;
	case 4:rain();
		break;
/*case 5:zoomin();
break;*/
	}
}
void createmenu()
{
int sel=glutCreateMenu(menu);
glutAddMenuEntry("Smiley",1);
glutAddMenuEntry("House",2);
int id=glutCreateMenu(menu);
glutAddMenuEntry("SpinCube",3);
glutAddMenuEntry("rain",4);
glutCreateMenu(menu);
glutAttachMenu(GLUT_RIGHT_BUTTON);
glutAddSubMenu("camera mode",sel);
glutAddSubMenu("video mode",id);
}
int main(int argc,char **argv)
	{
		glutInit(&argc,argv);
		glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
		glutInitWindowSize(500,500);
		glutInitWindowPosition(10,10);
		glutCreateWindow("camera");
		glutDisplayFunc(display);
		init();
		glutMouseFunc(mouse);
		//glutKeyboardFunc(keys);
		createmenu();
       glutMainLoop();
	}