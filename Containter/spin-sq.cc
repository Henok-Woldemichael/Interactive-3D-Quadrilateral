// ROTATING FRUTSUM

#include </home/hen/Desktop/include/Angel.h>

//----------------------------------------------------------------------------

GLfloat thetaX = 0.0, thetaY = 0.0, thetaZ = 0.0;
vec3 position = (0.0,0.0,0.0);
GLfloat currentScale = (1.0,1.0,1.0);
GLint modelViewLoc,projLoc,colourLoc;
const int NUMPOINTS = 4;

GLuint vao[2], buffer[2];

void init()
{
  // Load shaders and use the resulting shader program
  GLuint program = InitShader( "vshader.glsl", "fshader.glsl" );
  glUseProgram( program );
  
  modelViewLoc = glGetUniformLocation(program, "uModelView");
  projLoc = glGetUniformLocation(program, "uProjection");
  colourLoc = glGetUniformLocation(program, "uColour");



  const vec3 pointsBottom[NUMPOINTS] = {
    vec3(-0.5, -0.5,-0.5),
    vec3(-0.5, 0.5,-0.5),
    vec3(0.5, 0.5,-0.5),
    vec3(0.5, -0.5,-0.5)
  };

  const vec3 pointsTop[NUMPOINTS] = {
    vec3(-0.25,-0.25, 0.5),
    vec3(-0.25,0.25,0.5),
    vec3(0.25,0.25,0.5),
    vec3(0.25,-0.25,0.5)
};

 /* const vec3 pointsA[NUMPOINTS] = {
    vec3(-0.25,-0.25, 0.5),
     vec3(-0.5, -0.5,-0.5),
     vec3(-0.25,0.25,0.5),
     vec3(-0.5, 0.5,-0.5)
};

*/	  


  glGenVertexArrays(2,vao);
  glGenBuffers(2,buffer);

  GLuint loc = glGetAttribLocation( program, "vPosition" );
  
  
  
  for(int i = 0; i < 2; i++){
  
    glBindVertexArray(vao[i]);
    glBindBuffer(GL_ARRAY_BUFFER,buffer[i]);


   
    if(i == 0){
    	glBufferData(GL_ARRAY_BUFFER, sizeof(pointsBottom), pointsBottom, GL_STATIC_DRAW);
    	glEnableVertexAttribArray(loc);
    	glVertexAttribPointer( loc, 3, GL_FLOAT, GL_FALSE, 0,BUFFER_OFFSET(0));  
    }
  
    if(i == 1){
   	glBufferData(GL_ARRAY_BUFFER, sizeof(pointsTop), pointsTop, GL_STATIC_DRAW);
        glEnableVertexAttribArray(loc);
        glVertexAttribPointer( loc, 3, GL_FLOAT, GL_FALSE, 0,BUFFER_OFFSET(0));

    
    }

     /* else {
        glBufferData(GL_ARRAY_BUFFER, sizeof(pointsA), pointsA, GL_STATIC_DRAW);
        glEnableVertexAttribArray(loc);
        glVertexAttribPointer( loc, 3, GL_FLOAT, GL_FALSE, 0,BUFFER_OFFSET(0));


    }
*/
 }

  /*
   vec2 pointsA[NUMPOINTS] = {
    vec2(0.2, 0.2),
    vec2(-0.2, 0.2),
    vec2(-0.2, -0.5),
    vec2(0.2, -0.2)

  };

   vec2 pointsB[NUMPOINTS] = {
    vec2(0.9, 0.9),
    vec2(-0.9, 0.9),
    vec2(-0.9, -0.9),
    vec2(0.9, -0.9)

  };

   vec2 pointsC[NUMPOINTS] = {
    vec2(0.1, 0.1),
    vec2(-0.1, 0.1),
    vec2(-0.1, -0.1),
    vec2(0.1, -0.1)

  };

  vec2 pointsD[NUMPOINTS] = {
    vec2(0.56, 0.56),
    vec2(-0.56, 0.56),
    vec2(-0.56, -0.56),
    vec2(0.56, -0.56)

  };*/

  
  
  // Create a vertex array object
  
 /* GLuint vaoBottom;
  glGenVertexArrays( 1, &vaoBottom );
  glBindVertexArray( vaoBottom);
  */

   // Create a vertex array object
 /* GLuint vaoBottom;
  glGenVertexArrays( 1, &vaoBottom );
  glBindVertexArray( vaoBottom );


   // Create a vertex array object
  GLuint vaoA;
  glGenVertexArrays( 1, &vaoA );
  glBindVertexArray( vao );


   // Create a vertex array object
  GLuint vaoB;
  glGenVertexArrays( 1, &vaoB );
  glBindVertexArray( vaoB );


   // Create a vertex array object
  GLuint vaoC;
  glGenVertexArrays( 1, &vaoC );
  glBindVertexArray( vaoC );

   // Create a vertex array object
  GLuint vaoD
  glGenVertexArrays( 1, &vaoD );
  glBindVertexArray( vaoD );
 */


  // Create and initialize a buffer object
  /*GLuint bufferTop;
  glGenBuffers( 1, &bufferTop );
  glBindBuffer( GL_ARRAY_BUFFER, bufferTop );
  glBufferData( GL_ARRAY_BUFFER, sizeof(pointsBottom), pointsBottom, GL_STATIC_DRAW );
  */
  
   // Create and initialize a buffer object
  /*
  GLuint bufferBottom;
  glGenBuffers( 1, &bufferBottom );
  glBindBuffer( GL_ARRAY_BUFFER, bufferBottom );
  glBufferData( GL_ARRAY_BUFFER, sizeof(pointsBottom), pointsBottom, GL_STATIC_DRAW );


  // Create and initialize a buffer object
  GLuint bufferA;
  glGenBuffers( 1, &bufferA );
  glBindBuffer( GL_ARRAY_BUFFER, bufferA );
  glBufferData( GL_ARRAY_BUFFER, sizeof(pointsA), pointsA, GL_STATIC_DRAW );

  
    // Create and initialize a buffer object
  GLuint buffer;
  glGenBuffers( 1, &bufferB );
  glBindBuffer( GL_ARRAY_BUFFER, bufferB );
  glBufferData( GL_ARRAY_BUFFER, sizeof(pointsB), pointsB, GL_STATIC_DRAW );


    // Create and initialize a buffer object
  GLuint bufferC;
  glGenBuffers( 1, &bufferC );
  glBindBuffer( GL_ARRAY_BUFFERC, bufferC );
  glBufferData( GL_ARRAY_BUFFER, sizeof(pointsC), pointsC, GL_STATIC_DRAW );


  // Create and initialize a buffer object
  GLuint bufferD;
  glGenBuffers( 1, &bufferD );
  glBindBuffer( GL_ARRAY_BUFFER, bufferD );
  glBufferData( GL_ARRAY_BUFFER, sizeof(pointsD), pointsD, GL_STATIC_DRAW );

  
  */
 

  
  //YOU ARE NOW DONE LOADING THE VERTEX'S INTO THE SHADER
  
  

  
  
  glClearColor( 0.0, 0.0, 0.0, 1.0 ); // white background
  glEnable(GL_DEPTH_TEST);
}
 
//----------------------------------------------------------------------------

void display( void )
{
  
    glClear(GL_COLOR_BUFFER_BIT |GL_DEPTH_BUFFER_BIT);

    	
    GLfloat colours[NUMPOINTS*4] = {
	1,0,0,1, 0,0,1,1, 0,1,0,1, 0,0,0,1

};

  glClear( GL_COLOR_BUFFER_BIT );     // clear the window

  
  //Rotate()
  //Scale(factor)
  //Translate(direction)
  //ALL THESE COME FROM THE TEXTBOOK MATH.H LIBRARY,check it out its easy to see what's happening 

  //THIS IS MAJOR, YOU ARE ROATING ON THE Z AXIS HERE WHATEVER THE MEANS, THEN THE X AND Y TOO
  
  mat4 modelZ = RotateZ(thetaZ);
  mat4 modelY = RotateY(thetaY); 
  mat4 modelX = RotateX(thetaX);
  
  mat4 rotate = modelZ * modelY * modelX;
  mat4 model = Translate(position) * rotate *  Scale(currentScale);

  vec4 eye(0,-1,1,1), at(0,0,0,1), up(0,0,1,0);
  mat4 view = LookAt(eye,at,up);
  mat4 modelView = view * model;
  glUniformMatrix4fv(modelViewLoc, 1, GL_TRUE, modelView);
  
  mat4 proj = Ortho(-1,1,-1,1,-1,100);
  glUniformMatrix4fv(projLoc, 1, GL_TRUE, proj);
  
  for(int i= 0; i < 2; i++){
  	glBindVertexArray(vao[i]);
	glBindBuffer(GL_ARRAY_BUFFER,buffer[i]);
        glDrawArrays(GL_TRIANGLE_FAN,0,4);
  	glUniform4fv(colourLoc, 4, colours);
  };


 
  

  glutSwapBuffers(); 
};
/*void idle()
{
  theta += 0.01;i
  glutPostRedisplay();
}
*/
//----------------------------------------------------------------------------

void
keyboard( unsigned char key, int x, int y )
{
  switch ( key ) {
  case 033:
    exit( EXIT_SUCCESS );
    break;
  }
}

void arrow(int key, int x, int y)
{
  switch (key) {
  case GLUT_KEY_LEFT:
    position -= vec3(0.05, 0, 0);
    break;
  case GLUT_KEY_RIGHT:
    position += vec3(0.05, 0, 0);
    break;
  case GLUT_KEY_UP:
    position += vec3(0, 0, 0.05);
    break;
  case GLUT_KEY_DOWN:
    position -= vec3(0, 0, 0.05);
    break;
  case GLUT_KEY_PAGE_UP:
    currentScale *= 3.05;
    break;
  case GLUT_KEY_PAGE_DOWN:
    currentScale *= 0.5/1.05;
    break;
  case GLUT_KEY_HOME:
    thetaX += 0.5;
    break;
  case GLUT_KEY_END:
    thetaY += 0.5;
    break;
  case GLUT_KEY_INSERT:
    thetaZ += 0.5;
    break;
  }
  glutPostRedisplay();
}


//----------------------------------------------------------------------------

int
main( int argc, char **argv )
{
    glutInit( &argc, argv );
    glutInitDisplayMode( GLUT_RGBA | GLUT_DOUBLE );
    glutInitWindowSize( 512, 512 );

    // If you are using freeglut, the next two lines will check if 
    // the code is truly 3.2. Otherwise, comment them out
    
    glutInitContextVersion( 3, 2 );
    glutInitContextProfile( GLUT_CORE_PROFILE );

    glutCreateWindow( "Spinning Polygon" );

    glewInit();

    init();

    glutDisplayFunc( display );
    glutKeyboardFunc( keyboard);
    glutSpecialFunc(arrow);


    glutMainLoop();
    return 0;
}
