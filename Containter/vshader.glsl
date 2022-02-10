#version 150

in vec4 vPosition;

uniform mat4 uModelView;
uniform mat4 uProjection;

// uniform means this is the same value for all vertices
uniform vec4 uColour[4];

out vec4 vColour;

void main()
{
  gl_Position = uProjection * uModelView * vPosition;
  
  vColour = uColour [gl_VertexID];
}
