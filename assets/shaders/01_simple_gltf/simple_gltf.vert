#version 450
#extension GL_ARB_separate_shader_objects : enable

layout(location = 0) in vec3 vertexPosition;
layout(location = 1) in vec3 vertexNormal;

layout(location = 0) out vec3 normal;

layout(set = 0, binding = 0) uniform Camera
{
    mat4 projection;
    mat4 view;
    // vec3 position;
    // float time;
}
camera;

layout(set = 1, binding = 0) uniform Entity
{
    mat4 model;
}
entity;

void main()
{
    normal = normalize((camera.view * entity.model * vec4(vertexNormal, 0.0)).xyz);
    gl_Position = camera.projection * camera.view * entity.model * vec4(vertexPosition, 1.0);
}
