#ifndef h_ROBOT
#define h_ROBOT

#define SOLID_CLOSED_CYLINDER(QUAD, BASE, TOP, HEIGHT, SLICES, STACKS) \
gluCylinder(QUAD, BASE, TOP, HEIGHT, SLICES, STACKS); \
glRotatef(180, 1,0,0); \
gluDisk(QUAD, 0.0f, BASE, SLICES, 1); \
glRotatef(180, 1,0,0); \
glTranslatef(0.0f, 0.0f, HEIGHT); \
gluDisk(QUAD, 0.0f, TOP, SLICES, 1); \
glTranslatef(0.0f, 0.0f, -HEIGHT);

const GLfloat body_color[3] = {0.55f, 0.65f, 0.73f};
const GLfloat members_color[3] = {0.35f, 0.45f, 0.53};

class Robot {
public:
    GLfloat x, y, z;
    void Draw();
    void Walk();
};

#endif
