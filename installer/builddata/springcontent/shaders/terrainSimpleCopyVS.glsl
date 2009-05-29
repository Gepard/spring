<<<<<<< HEAD:installer/builddata/springcontent/shaders/terrainSimpleCopyVS.glsl

void main()
{   
    vec4 ecPosition = gl_ModelViewMatrix * gl_Vertex;
    gl_Position = gl_ProjectionMatrix * ecPosition;  
}
=======

void main()
{   
    vec4 ecPosition = gl_ModelViewMatrix * gl_Vertex;
    gl_Position = gl_ProjectionMatrix * ecPosition;  
}
>>>>>>> remotes/gepard/master:installer/builddata/springcontent/shaders/terrainSimpleCopyVS.glsl
